#import <Foundation/Foundation.h>
#import "DVTDeveloperAccountCredentials.h"
#import "DVTDeveloperAccount.h"
#import "DVTAppleIDBasedDeveloperAccount.h"
#import "DVTDirectoryServicesSessionDescription.h"
#import "DVTServicesSession.h"
#import "DVTAnalyticsClientTool.h"

void print(NSString *format, ...) {
    va_list args;
    va_start(args, format);
    NSString *formattedString = [[NSString alloc] initWithFormat:format arguments:args];
    va_end(args);
    [[NSFileHandle fileHandleWithStandardOutput]
     writeData: [formattedString dataUsingEncoding: NSNEXTSTEPStringEncoding]];
}

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        NSError *error;
        
        NSMutableArray *arguments = [[NSProcessInfo processInfo].arguments mutableCopy];
        
        if (arguments.count < 3) {
            print(@"First two arguments are username and password for iTunes Connect?");
            return 1;
        }
        
        NSString *username = arguments[1];
        NSString *password = arguments[2];
        
        DVTDeveloperAccountCredentials *credentials = [DVTDeveloperAccountCredentials accountCredentialsFromUsername:username password:password error:&error];
        
        if (error) {
            print(@"%@", error.localizedDescription);
            return 1;
        }
        
        DVTAppleIDBasedDeveloperAccount *account = [DVTAppleIDBasedDeveloperAccount accountWithCredentials:credentials];
        
        
        // session
        DVTServicesSession *session = [DVTServicesSession servicesSessionByLoggingInWithAccount:account executionContext:0x2 error:&error];
        
        if (error) {
            print(@"%@", error.localizedDescription);
            return 1;
        }
        
        DVTAnalyticsClientTool *tool = [DVTAnalyticsClientTool analyticsClientTool];
        tool.session = session; // ????
        
        // it seems to like the arguments trimmed, even without our extra parameters.
        [arguments removeObjectsInRange:NSMakeRange(0, 3)];
        tool.arguments = arguments;
        
        [tool runWithError:&error];
        
        if (error) {
            print(@"%@", error.localizedDescription);
            return 1;
        }
    }
    return 0;
}

#import <Foundation/Foundation.h>
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
        DVTAnalyticsClientTool *tool = [DVTAnalyticsClientTool analyticsClientTool];
        NSError *error;
        
        // it seems to like the arguments trimmed
        tool.arguments = [[NSProcessInfo processInfo].arguments subarrayWithRange:NSMakeRange(1, [NSProcessInfo processInfo].arguments.count - 1)];
        
        [tool runWithError:&error];
        
        if (error) {
            print(@"%@", error.localizedDescription);
            return 1;
        }
    }
    return 0;
}

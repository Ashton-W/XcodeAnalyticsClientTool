//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTITunesConnectProxy : NSObject
{
}

+ (id)symbolURLsByUUIDForApplicationVersion:(id)arg1 usingSession:(id)arg2 error:(id *)arg3;
+ (id)applicationVersionsForApplicationDecription:(id)arg1 usingSession:(id)arg2 error:(id *)arg3;
+ (id)applicationDescriptionsUsingSession:(id)arg1 error:(id *)arg2;
+ (id)applicationsWithContentHostedInAppPurchasesUsingSession:(id)arg1;
+ (id)uploadApplicationArchiveAtPath:(id)arg1 application:(id)arg2 username:(id)arg3 password:(id)arg4 willBeginCallback:(CDUnknownBlockType)arg5 updatePercentageCallback:(CDUnknownBlockType)arg6 updateMessageCallback:(CDUnknownBlockType)arg7 shouldContinueCallback:(CDUnknownBlockType)arg8 didCompleteCallback:(CDUnknownBlockType)arg9;
+ (id)uploadApplicationArchiveAtPath:(id)arg1 username:(id)arg2 password:(id)arg3 willBeginCallback:(CDUnknownBlockType)arg4 updatePercentageCallback:(CDUnknownBlockType)arg5 updateMessageCallback:(CDUnknownBlockType)arg6 shouldContinueCallback:(CDUnknownBlockType)arg7 didCompleteCallback:(CDUnknownBlockType)arg8;
+ (id)validateApplicationArchiveAtPath:(id)arg1 usingSession:(id)arg2;
+ (id)service;
+ (id)applicationLoaderPathOverride;

@end
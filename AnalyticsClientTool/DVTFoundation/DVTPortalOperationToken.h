//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTPortalOperationToken : NSObject <NSCopying>
{
    _Bool _userHasPicked;
    NSArray *_teams;
    DVTDeveloperAccount *_account;
    NSError *_error;
    NSWindow *_parentWindow;
}

+ (id)tokenWithDeveloperAccount:(id)arg1 andTeamDictionaries:(id)arg2;
+ (id)tokenWithDeveloperAccount:(id)arg1;
+ (id)defaultToken;
@property _Bool userHasPicked; // @synthesize userHasPicked=_userHasPicked;
@property(retain) NSWindow *parentWindow; // @synthesize parentWindow=_parentWindow;
@property(copy) NSError *error; // @synthesize error=_error;
@property(retain) DVTDeveloperAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)individualTeamTokens;
@property(readonly, copy) NSString *teamId;
- (void)setTeam:(id)arg1;
@property(readonly, copy) NSDictionary *team;
@property(copy) NSArray *teams; // @synthesize teams=_teams;
- (_Bool)filterTeamsUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)filterTeamsToSingleTeamId:(id)arg1;
- (_Bool)filterTeamsToTeamIds:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
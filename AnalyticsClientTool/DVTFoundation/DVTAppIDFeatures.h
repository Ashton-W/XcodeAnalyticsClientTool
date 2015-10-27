//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTAppIDFeatures : NSObject <NSCopying>
{
    NSDictionary *_flags;
    NSSet *_cloudContainers;
    NSSet *_applicationGroups;
    NSSet *_omcIdentifiers;
}

+ (id)entitlementS;
+ (id)entitlementO;
+ (id)userNameForFlag:(id)arg1;
@property(readonly) NSSet *omcIdentifiers; // @synthesize omcIdentifiers=_omcIdentifiers;
@property(readonly) NSSet *applicationGroups; // @synthesize applicationGroups=_applicationGroups;
@property(readonly) NSSet *cloudContainers; // @synthesize cloudContainers=_cloudContainers;
@property(readonly) NSDictionary *flags; // @synthesize flags=_flags;
- (void).cxx_destruct;
- (BOOL)allowsFeatures:(id)arg1 missingFeatures:(id *)arg2;
@property(readonly) NSString *userDescription;
- (id)description;
- (id)plistRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) BOOL requiresExplicitAppID;
@property(readonly) DVTAppIDFeatures *enabledFeatures;
- (id)featuresBySettingValue:(id)arg1 forKey:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)initWithFlags:(id)arg1 cloudContainers:(id)arg2 applicationGroups:(id)arg3 omcIdentifiers:(id)arg4;
- (id)init;

@end
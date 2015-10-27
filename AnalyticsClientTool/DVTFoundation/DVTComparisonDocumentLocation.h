//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTComparisonDocumentLocation : DVTDocumentLocation
{
    DVTDocumentLocation *_primaryDocumentLocation;
    DVTDocumentLocation *_secondaryDocumentLocation;
    DVTDocumentLocation *_ancestorDocumentLocation;
}

@property(readonly) DVTDocumentLocation *ancestorDocumentLocation; // @synthesize ancestorDocumentLocation=_ancestorDocumentLocation;
@property(copy) DVTDocumentLocation *secondaryDocumentLocation; // @synthesize secondaryDocumentLocation=_secondaryDocumentLocation;
@property(copy) DVTDocumentLocation *primaryDocumentLocation; // @synthesize primaryDocumentLocation=_primaryDocumentLocation;
- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)description;
- (BOOL)isEqualToDocumentLocationDisregardingDocumentURL:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqualDisregardingTimestamp:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)timestamp;
- (id)documentURL;
- (id)initWithDocumentURL:(id)arg1 timestamp:(id)arg2;
- (id)initWithPrimaryDocumentLocation:(id)arg1 secondaryDocumentLocation:(id)arg2 ancestorDocumentLocation:(id)arg3;

@end
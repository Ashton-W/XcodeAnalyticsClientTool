//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTMacroExpansionBlock : NSObject <DVTMacroExpansion>
{
    CDUnknownBlockType _block;
}

- (void).cxx_destruct;
- (id)dvt_debugDescription;
- (void)dvt_assertInternalConsistency;
- (id)dvt_evaluateAsStringListInScope:(id)arg1 withState:(const struct DVTNestedMacroExpansionState *)arg2;
- (id)dvt_evaluateAsStringInScope:(id)arg1 withState:(const struct DVTNestedMacroExpansionState *)arg2;
- (id)dvt_stringForm;
- (BOOL)dvt_isLiteral;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
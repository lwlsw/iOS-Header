//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBSwitcherModifierEvent.h>

@class SBAppLayout;

@interface SBRemovalSwitcherModifierEvent : SBSwitcherModifierEvent
{
    SBAppLayout *_appLayout;
    long long _reason;
    unsigned long long _phase;
}

@property(readonly, nonatomic) unsigned long long phase; // @synthesize phase=_phase;
@property(readonly, nonatomic) long long reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) SBAppLayout *appLayout; // @synthesize appLayout=_appLayout;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (long long)type;
- (id)initWithAppLayout:(id)arg1 reason:(long long)arg2 phase:(unsigned long long)arg3;

@end

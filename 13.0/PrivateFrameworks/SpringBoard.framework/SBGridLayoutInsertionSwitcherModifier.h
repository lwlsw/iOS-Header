//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBSwitcherModifier.h>

@class SBAppLayout, SBInsertionSwitcherModifier;

@interface SBGridLayoutInsertionSwitcherModifier : SBSwitcherModifier
{
    SBAppLayout *_appLayout;
    SBInsertionSwitcherModifier *_insertionSwitcherModifier;
}

- (void).cxx_destruct;
- (double)scaleForIndex:(unsigned long long)arg1;
- (id)handleEvent:(id)arg1;
- (id)initWithAppLayout:(id)arg1 insertionSwitcherModifier:(id)arg2;

@end

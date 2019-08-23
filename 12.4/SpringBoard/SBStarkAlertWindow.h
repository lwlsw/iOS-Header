//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBAlertWindow.h"

@protocol SBStarkWindowDelegate;

@interface SBStarkAlertWindow : SBAlertWindow
{
    id <SBStarkWindowDelegate> _starkWindowDelegate;
}

+ (double)windowLevel;
@property(nonatomic) __weak id <SBStarkWindowDelegate> starkWindowDelegate; // @synthesize starkWindowDelegate=_starkWindowDelegate;
- (void).cxx_destruct;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;

@end

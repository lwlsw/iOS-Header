//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WFDailyRoutineShortcutSetupViewController, WFTrigger, WFWorkflow;

@protocol WFDailyRoutineShortcutSetupViewControllerDelegate <NSObject>
- (void)dailyRoutineShortcutSetupViewController:(WFDailyRoutineShortcutSetupViewController *)arg1 didFinishWithShortcut:(WFWorkflow *)arg2 trigger:(WFTrigger *)arg3;
- (void)dailyRoutineShortcutSetupViewControllerDidCancel:(WFDailyRoutineShortcutSetupViewController *)arg1;
@end

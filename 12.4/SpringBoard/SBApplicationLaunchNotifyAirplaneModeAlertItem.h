//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBApplicationLaunchNotifyAlertItem.h"

@interface SBApplicationLaunchNotifyAirplaneModeAlertItem : SBApplicationLaunchNotifyAlertItem
{
    _Bool _usesCellNetwork;
}

- (void)_sendUserToSettings;
- (void)_turnOffAirplaneMode;
- (void)_configureForAirplaneModeDataAlertOffCellular:(_Bool)arg1;
- (void)_configureForAirplaneModeDataAlertOnCellular:(_Bool)arg1;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (id)initWithApplication:(id)arg1;

@end

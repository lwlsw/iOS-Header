//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class JobPolicyManager;

@protocol JobPolicyManagerDelegate <NSObject>
- (void)policyManagerDeviceDidUnlock:(JobPolicyManager *)arg1;
- (void)policyManagerDeviceDidLock:(JobPolicyManager *)arg1;
- (void)policyManagerBatterySaverEnabled:(JobPolicyManager *)arg1;
- (void)policyManagerBatterySaverDisabled:(JobPolicyManager *)arg1;
- (void)policyManager:(JobPolicyManager *)arg1 receivedTrigger:(unsigned long long)arg2;
@end


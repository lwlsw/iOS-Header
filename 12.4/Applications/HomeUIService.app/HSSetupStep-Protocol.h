//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HFDiscoveredAccessory, NAFuture, NSError;
@protocol HSSetupStepDelegate;

@protocol HSSetupStep <NSObject>
@property(nonatomic) __weak id <HSSetupStepDelegate> delegate;
@property(readonly, nonatomic) long long setupState;

@optional
@property(readonly, nonatomic) NAFuture *readyToDisplayFuture;
- (void)setupDidFailWithError:(NSError *)arg1 forDiscoveredAccessory:(HFDiscoveredAccessory *)arg2;
@end

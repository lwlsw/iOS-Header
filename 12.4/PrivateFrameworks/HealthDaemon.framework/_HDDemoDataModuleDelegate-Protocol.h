//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HKObject, HKQuantity, _HDDemoDataModule;

@protocol _HDDemoDataModuleDelegate <NSObject>
@property(readonly, nonatomic) HKQuantity *speed;
@property(readonly, nonatomic) long long activityType;
- (void)demoDataModule:(_HDDemoDataModule *)arg1 didProduceDataObject:(HKObject *)arg2;
@end

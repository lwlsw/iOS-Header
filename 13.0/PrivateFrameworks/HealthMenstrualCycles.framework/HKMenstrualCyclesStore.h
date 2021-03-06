//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthMenstrualCycles/HKMenstrualCyclesStoreInterface-Protocol.h>
#import <HealthMenstrualCycles/_HKXPCExportable-Protocol.h>

@class HKHealthStore, HKTaskServerProxyProvider, NSString;

@interface HKMenstrualCyclesStore : NSObject <HKMenstrualCyclesStoreInterface, _HKXPCExportable>
{
    HKTaskServerProxyProvider *_proxyProvider;
    HKHealthStore *_healthStore;
}

@property(readonly, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
- (void).cxx_destruct;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (id)exportedInterface;
- (CDUnknownBlockType)_actionCompletionOnClientQueue:(CDUnknownBlockType)arg1;
- (void)savePeriodEndedOnDayIndex:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)savePeriodStartedOnDayIndex:(long long)arg1 endedOnDayIndex:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)savePeriodStartedOnDayIndex:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)savePeriodNotYetEndedWithCompletion:(CDUnknownBlockType)arg1;
- (void)savePeriodNotYetStartedWithCompletion:(CDUnknownBlockType)arg1;
- (void)saveLastMenstrualPeriodWithDayIndexRange:(CDStruct_ef5fcbe6)arg1 completion:(CDUnknownBlockType)arg2;
- (void)saveMenstrualFlowByDayIndex:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)saveMenstrualFlow:(long long)arg1 dayIndex:(long long)arg2 updateAdjacentDays:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)saveDaySummaries:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)saveDaySummary:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchScheduledNotificationsWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithHealthStore:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


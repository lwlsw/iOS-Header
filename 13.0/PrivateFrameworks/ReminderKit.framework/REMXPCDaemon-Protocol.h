//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, REMStoreContainerToken;

@protocol REMXPCDaemon
- (void)indexingPerformerWithCompletion:(void (^)(id <REMXPCIndexingPerformer>, NSError *))arg1;
- (void)syncInterfacePerformerWithCompletion:(void (^)(id <REMXPCSyncInterfacePerformer>, NSError *))arg1;
- (void)storePerformerWithProcessName:(NSString *)arg1 storeContainerToken:(REMStoreContainerToken *)arg2 completion:(void (^)(id <REMXPCStorePerformer>, NSError *))arg3;
- (void)debugPerformerWithCompletion:(void (^)(id <REMXPCDebugPerformer>, NSError *))arg1;
- (void)changeTrackingPerformerWithStoreContainerToken:(REMStoreContainerToken *)arg1 completion:(void (^)(id <REMXPCChangeTrackingPerformer>, NSError *))arg2;
@end

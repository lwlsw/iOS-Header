//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/RESingleton.h>

@class NSLock, NSMutableDictionary, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface RELocationAuthorizationStatusCache : RESingleton
{
    NSMutableDictionary *_bundleToStatusCache;
    NSMutableDictionary *_bundleToCallbackBlocks;
    NSMutableSet *_bundlesAwaitingQuery;
    NSObject<OS_dispatch_queue> *_schedulingQueue;
    NSObject<OS_dispatch_queue> *_queryQueue;
    NSLock *_bundleToStatusCacheLock;
}

- (void).cxx_destruct;
- (void)_s_queue_updateCacheFromCLWithStatus:(int)arg1 forBundleIdentifier:(id)arg2;
- (void)_q_queue_queryStatusFromCLForBundleIdentifier:(id)arg1;
- (void)_s_queue_scheduleUpdatedStatusForBundleIdentifier:(id)arg1;
- (void)_s_queue_addCallbackInfo:(id)arg1 forBundleIdentifier:(id)arg2;
- (int)_cachedStatusForBundleIdentifier:(id)arg1;
- (int)cachedAuthorizationStatusForBundleIdentifier:(id)arg1 invalidationUpdateQueue:(id)arg2 withCallback:(CDUnknownBlockType)arg3;
- (id)_init;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoAnalysis/PFMulticasterDelegate-Protocol.h>
#import <PhotoAnalysis/PFWeakContainerNilNotificationDelegate-Protocol.h>

@class NSConditionLock, NSMutableSet, PFSerialQueue, PFWeakContainer, PGGraphUpdateManager, PGManager, PHAManager;

@interface PHAGraphManager : NSObject <PFMulticasterDelegate, PFWeakContainerNilNotificationDelegate>
{
    struct PFDirectMessagingMulticaster *_clientMulticaster;
    NSMutableSet *_clientsWantingUpdates;
    long long _updateManagerSuspendCount;
    _Bool _rebuildInProgress;
    PFSerialQueue *_serializer;
    PGManager *_graphManager;
    PFWeakContainer *_graphMonitor;
    NSConditionLock *_graphLoadedCondition;
    PGGraphUpdateManager *_updateManager;
    PHAManager *_photoAnalysisManager;
}

@property(retain, nonatomic) PHAManager *photoAnalysisManager; // @synthesize photoAnalysisManager=_photoAnalysisManager;
@property(readonly, nonatomic) PGGraphUpdateManager *updateManager; // @synthesize updateManager=_updateManager;
- (void).cxx_destruct;
- (void)_stopUpdateManager;
- (void)_startUpdateManager;
- (void)_stopListeningWithClient:(id)arg1;
- (void)_startListeningWithClient:(id)arg1;
- (void)_configureGraphManager;
- (void)suspendGraphUpdateAndPerformBlock:(CDUnknownBlockType)arg1;
- (void)unloadGraph;
- (void)_performRebuildFullRebuild:(_Bool)arg1 withProgressBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)performLightWeightRebuildWithProgressBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)performFullRebuildWithProgressBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)loadGraph;
- (void)multicasterHasNoReceivers:(id)arg1 invalidateBlock:(CDUnknownBlockType)arg2;
- (void)unregisterGraphClient:(id)arg1;
- (id)registerGraphClient:(id)arg1;
- (_Bool)graphNeedsRebuild;
- (void)shutdown;
- (void)_graphBecameReady:(id)arg1;
- (void)weakReferenceBecameNil:(id)arg1;
- (id)statusAsDictionary;
- (void)dealloc;
- (id)initWithManager:(id)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface _MRDMediaServerStateCoordinator : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableDictionary *_dataSourceHashesToDiscoveryModes;
    unsigned int _currentDiscoveryMode;
}

+ (id)sharedCoordinator;
@property(readonly, nonatomic) unsigned int currentDiscoveryMode; // @synthesize currentDiscoveryMode=_currentDiscoveryMode;
- (void).cxx_destruct;
- (void)_updateMediaServerDiscoveryMode;
- (void)clearDiscoveryModeForDataSource:(id)arg1;
- (void)setDiscoveryMode:(unsigned int)arg1 forDataSource:(id)arg2;
- (id)init;

@end

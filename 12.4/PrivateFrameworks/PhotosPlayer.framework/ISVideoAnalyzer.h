//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSOperationQueue;
@protocol OS_dispatch_queue;

@interface ISVideoAnalyzer : NSObject
{
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSMutableDictionary *_operationsByRequestID;
    long long __currentRequestID;
}

+ (id)defaultAnalyzer;
@property(nonatomic, setter=_setCurrentRequestID:) long long _currentRequestID; // @synthesize _currentRequestID=__currentRequestID;
- (void).cxx_destruct;
- (long long)requestAllFrameTimesInAsset:(id)arg1 trackID:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_handleAllFrameTimesRequestFinishedForTime:(CDStruct_1b6d18a9)arg1 frameTimes:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (long long)requestFrameTimesAroundTime:(CDStruct_1b6d18a9)arg1 inAsset:(id)arg2 trackID:(int)arg3 completion:(CDUnknownBlockType)arg4;
- (id)init;

@end

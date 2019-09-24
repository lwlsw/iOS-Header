//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BMMiningTaskDelegate-Protocol.h"

@class BMMiningTask, NSString;
@protocol OS_xpc_object;

@interface BMDaemon : NSObject <BMMiningTaskDelegate>
{
    _Bool _timeoutReached;
    NSObject<OS_xpc_object> *_activity;
    BMMiningTask *_task;
}

@property(nonatomic) _Bool timeoutReached; // @synthesize timeoutReached=_timeoutReached;
@property(retain, nonatomic) BMMiningTask *task; // @synthesize task=_task;
@property(retain, nonatomic) NSObject<OS_xpc_object> *activity; // @synthesize activity=_activity;
- (void).cxx_destruct;
- (void)run;
- (void)registerTimeout;
- (void)miningTaskDidFinish:(id)arg1;
- (void)periodicallyCheckDeferral;
- (void)registerXPCActivity;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

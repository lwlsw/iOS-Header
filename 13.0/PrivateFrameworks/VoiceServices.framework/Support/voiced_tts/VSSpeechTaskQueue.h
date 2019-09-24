//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, VSSpeechRequest;
@protocol OS_dispatch_queue, VSSpeechTaskProtocol;

@interface VSSpeechTaskQueue : NSObject
{
    NSMutableArray *_eagerTasks;
    NSMutableArray *_speakTasks;
    id <VSSpeechTaskProtocol> _currentTask;
    NSObject<OS_dispatch_queue> *_speakingQueue;
    VSSpeechRequest *_lastSynthesisRequest;
    unsigned long long _lastSynthesisRequestCreatedTimeStamp;
    struct _opaque_pthread_mutexattr_t _threadMutexAttr;
    struct _opaque_pthread_mutex_t _threadMutex;
}

+ (id)sharedQueue;
@property(nonatomic) unsigned long long lastSynthesisRequestCreatedTimeStamp; // @synthesize lastSynthesisRequestCreatedTimeStamp=_lastSynthesisRequestCreatedTimeStamp;
@property(retain, nonatomic) VSSpeechRequest *lastSynthesisRequest; // @synthesize lastSynthesisRequest=_lastSynthesisRequest;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *speakingQueue; // @synthesize speakingQueue=_speakingQueue;
@property(nonatomic) struct _opaque_pthread_mutexattr_t threadMutexAttr; // @synthesize threadMutexAttr=_threadMutexAttr;
@property(nonatomic) struct _opaque_pthread_mutex_t threadMutex; // @synthesize threadMutex=_threadMutex;
@property(retain, nonatomic) id <VSSpeechTaskProtocol> currentTask; // @synthesize currentTask=_currentTask;
@property(retain, nonatomic) NSMutableArray *speakTasks; // @synthesize speakTasks=_speakTasks;
@property(retain, nonatomic) NSMutableArray *eagerTasks; // @synthesize eagerTasks=_eagerTasks;
- (void).cxx_destruct;
- (void)resumeCurrentTask;
- (void)suspendCurrentTask;
- (void)cancelCurrentTask;
- (void)spinNextTask;
- (void)addTask:(id)arg1;
- (id)init;

@end

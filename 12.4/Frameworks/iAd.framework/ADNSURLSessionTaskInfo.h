//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSThread, NSURLSessionDataTask;
@protocol NSURLSessionDataDelegate;

@interface ADNSURLSessionTaskInfo : NSObject
{
    id <NSURLSessionDataDelegate> _delegate;
    NSURLSessionDataTask *_task;
    NSThread *_thread;
    NSArray *_modes;
}

@property(copy) NSArray *modes; // @synthesize modes=_modes;
@property(retain) NSThread *thread; // @synthesize thread=_thread;
@property(readonly, retain) NSURLSessionDataTask *task; // @synthesize task=_task;
- (void)invalidate;
- (void)performBlockOnClientThread:(CDUnknownBlockType)arg1;
- (void)perform:(CDUnknownBlockType)arg1 waitUntilDone:(_Bool)arg2;
- (void)performBlockAndWait:(CDUnknownBlockType)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1;
@property __weak id <NSURLSessionDataDelegate> delegate;
- (void)dealloc;
- (id)initWithTask:(id)arg1 delegate:(id)arg2 modes:(id)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _HKObserverRecord : NSObject
{
    id _observer;
    NSObject<OS_dispatch_queue> *_clientQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(nonatomic) __weak id observer; // @synthesize observer=_observer;
- (void).cxx_destruct;
- (id)initWithObserver:(id)arg1 clientQueue:(id)arg2;

@end

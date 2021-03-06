//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol GKTurnBasedEventHandlerDelegate, OS_dispatch_queue;

@interface GKTurnBasedEventHandler : NSObject
{
    _Bool _didBecomeActive;
    NSObject<GKTurnBasedEventHandlerDelegate> *_delegateWeak;
    NSObject<OS_dispatch_queue> *_lookForEventQueue;
}

+ (id)sharedTurnBasedEventHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *lookForEventQueue; // @synthesize lookForEventQueue=_lookForEventQueue;
@property(nonatomic) _Bool didBecomeActive; // @synthesize didBecomeActive=_didBecomeActive;
- (void)lookForEvent;
- (void)callTurnEventForMatch:(id)arg1 userTapped:(_Bool)arg2;
@property(nonatomic) NSObject<GKTurnBasedEventHandlerDelegate> *delegate; // @synthesize delegate=_delegateWeak;
- (void)dealloc;
- (id)init;

@end


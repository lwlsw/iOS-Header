//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TUCarPlayHardwareControlsBroadcaster : NSObject
{
    struct __IOHIDEventSystemClient *_hidEventSystemClientRef;
    NSString *_eventTypeToIgnore;
}

@property(retain) NSString *eventTypeToIgnore; // @synthesize eventTypeToIgnore=_eventTypeToIgnore;
- (void).cxx_destruct;
- (void)longPressTimerFired:(id)arg1;
- (void)dealloc;
- (id)init;

@end

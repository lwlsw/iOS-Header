//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/AMSPushParsable-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AMSPushParsableGenericNotification : NSObject <AMSPushParsable>
{
}

+ (id)_generateNotificationFromPayload:(id)arg1 config:(id)arg2;
+ (void)handleNotificationPayload:(id)arg1 config:(id)arg2 bagContract:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

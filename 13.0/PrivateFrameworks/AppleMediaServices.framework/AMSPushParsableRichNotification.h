//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/AMSPushParsable-Protocol.h>
#import <AppleMediaServices/AMSUserNotificationIntentDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AMSPushParsableRichNotification : NSObject <AMSPushParsable, AMSUserNotificationIntentDelegate>
{
}

+ (_Bool)shouldSkipAccountCheck;
+ (void)userNotification:(id)arg1 selectedButtonAction:(id)arg2;
+ (void)handleNotificationPayload:(id)arg1 config:(id)arg2 bag:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

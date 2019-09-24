//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileTimer/MTNotificationCenter-Protocol.h>

@class MTUserNotificationActionDispatcher, NSDictionary, NSString;

@interface MTUserNotificationCenter : NSObject <MTNotificationCenter>
{
    NSDictionary *_notificationCenters;
    MTUserNotificationActionDispatcher *_actionHandler;
}

+ (id)launchURLForScheme:(id)arg1;
+ (id)userInfoForTimer:(id)arg1;
+ (id)userInfoForAlarm:(id)arg1;
+ (id)categoryForScheduledTimer:(id)arg1;
+ (id)categoryForScheduledAlarm:(id)arg1;
+ (id)contentForScheduledTimer:(id)arg1;
+ (void)_setSnoozeCountdownTitleAndBody:(id)arg1 forSnoozeCountdownNotification:(id)arg2;
+ (id)_wakeUpAlarmStringForAlarm:(id)arg1 bundle:(struct __CFBundle *)arg2;
+ (void)_setGoToBedTitleAndBody:(id)arg1 forGoToBedNotification:(id)arg2;
+ (id)_timeFormatter;
+ (id)_durationComponentsFormatter;
+ (void)_setSpecificContent:(id)arg1 forNormalScheduledAlarm:(id)arg2;
+ (void)_setSpecificContent:(id)arg1 forSnoozeCountdownNotification:(id)arg2;
+ (void)_setSpecificContent:(id)arg1 forGoToBedNotification:(id)arg2;
+ (void)_setSpecificContent:(id)arg1 forScheduledAlarm:(id)arg2;
+ (id)_mutableContentForScheduledAlarmWithCommonSettings:(id)arg1;
+ (id)contentForScheduledAlarm:(id)arg1;
+ (id)notificationPrefixes;
+ (id)_snoozeCountdownIdentifier:(id)arg1;
+ (id)_goToBedIdentifier:(id)arg1;
+ (id)requestIdentifierForScheduledAlarm:(id)arg1;
+ (id)_allIdentifiersForAlarm:(id)arg1 includeMainIdentifier:(_Bool)arg2;
+ (id)_allIdentifiersForAlarm:(id)arg1;
@property(retain, nonatomic) MTUserNotificationActionDispatcher *actionHandler; // @synthesize actionHandler=_actionHandler;
@property(retain, nonatomic) NSDictionary *notificationCenters; // @synthesize notificationCenters=_notificationCenters;
- (void).cxx_destruct;
- (void)postBedtimeNotificationForAlarm:(id)arg1 date:(id)arg2;
- (void)removeAllDeliveredNotifications;
- (void)dismissNotificationsForTimer:(id)arg1;
- (void)interruptAudioAndLockDeviceWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)_notificationCenterForScheduledTimer;
- (void)postNotificationForScheduledTimer:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)dismissNotificationsWithIdentifiers:(id)arg1;
- (void)dismissNotificationsForAlarm:(id)arg1 dismissAction:(unsigned long long)arg2;
- (void)dismissNotificationsForAlarm:(id)arg1 includeMainIdentifier:(_Bool)arg2;
- (void)dismissNotificationsForAlarm:(id)arg1;
- (void)dismissRelatedNotificationsForScheduledAlarm:(id)arg1;
- (void)postNotificationForScheduledAlarm:(id)arg1 content:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)postNotificationForScheduledAlarm:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)_notificationCenterForScheduledAlarm:(id)arg1;
- (id)notificationCategories;
- (id)bedtimeCategories;
- (id)timerCategories;
- (id)alarmCategories;
- (void)registerActionHandler:(id)arg1;
- (void)setupNotificationCenters;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

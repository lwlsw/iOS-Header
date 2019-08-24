//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DACalDAV/MobileCalDAVCalendar.h>

#import <DACalDAV/CalDAVSubscribedCalendar-Protocol.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSSet, NSString, NSTimeZone, NSURL;
@protocol CalDAVPrincipal;

@interface MobileCalDAVSubscribedCalendar : MobileCalDAVCalendar <CalDAVSubscribedCalendar>
{
    NSMutableDictionary *_properties;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isManagedByServer;
@property(nonatomic) double refreshInterval;
@property(nonatomic) _Bool hasTaskFilter;
@property(nonatomic) _Bool hasAttachmentFilter;
@property(nonatomic) _Bool hasAlarmFilter;
@property(retain, nonatomic) NSURL *subscriptionURL;
@property(retain, nonatomic) NSString *title;
@property(nonatomic) _Bool isTaskContainer;
@property(retain, nonatomic) NSURL *calendarURL;
- (id)calendarURLString;
- (id)properties;
- (id)initWithCalendarURL:(id)arg1 calendar:(void *)arg2 properties:(id)arg3 principal:(id)arg4;

// Remaining properties
@property(readonly, nonatomic) NSSet *allItemURLs;
@property(nonatomic) _Bool autoprovisioned;
@property(retain, nonatomic) NSDictionary *bulkRequests;
@property(nonatomic) _Bool canBePublished;
@property(nonatomic) _Bool canBeShared;
@property(retain, nonatomic) NSString *color;
@property(retain, nonatomic) NSString *ctag;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSString *guid;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSDictionary *hrefsToModDeleteActions;
@property(nonatomic) _Bool isAffectingAvailability;
@property(nonatomic) _Bool isEditable;
@property(nonatomic) _Bool isEnabled;
@property(nonatomic) _Bool isEventContainer;
@property(nonatomic) _Bool isFamilyCalendar;
@property(nonatomic) _Bool isMarkedImmutableSharees;
@property(nonatomic) _Bool isMarkedUndeletable;
@property(nonatomic) _Bool isNotification;
@property(nonatomic) _Bool isPoll;
@property(nonatomic) _Bool isPublished;
@property(nonatomic) _Bool isRenameable;
@property(nonatomic) _Bool isScheduleInbox;
@property(nonatomic) _Bool isScheduleOutbox;
@property(nonatomic) _Bool isSubscribed;
@property(readonly, nonatomic) NSArray *itemsToReportAsJunk;
@property(retain, nonatomic) NSString *languageCode;
@property(retain, nonatomic) NSString *locationCode;
@property(readonly, nonatomic) _Bool needsPublishUpdate;
@property(nonatomic) _Bool needsResync;
@property(retain, nonatomic) NSString *notes;
@property(nonatomic) int order;
@property(retain, nonatomic) NSURL *owner;
@property(retain, nonatomic) NSString *ownerDisplayName;
@property(retain, nonatomic) NSURL *prePublishURL;
@property(retain, nonatomic) NSSet *preferredCalendarUserAddresses;
@property(readonly, nonatomic) id <CalDAVPrincipal> principal;
@property(retain, nonatomic) NSURL *publishURL;
@property(retain, nonatomic) NSString *pushKey;
@property(readonly, nonatomic) NSArray *shareeActions;
@property(retain, nonatomic) NSSet *sharees;
@property(nonatomic) int sharingStatus;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSString *symbolicColorName;
@property(readonly, nonatomic) NSArray *syncActions;
@property(retain, nonatomic) NSString *syncToken;
@property(retain, nonatomic) NSTimeZone *timeZone;
@property(readonly, nonatomic) NSDictionary *uuidsToAddActions;
@property(nonatomic) _Bool wasModifiedLocally;

@end

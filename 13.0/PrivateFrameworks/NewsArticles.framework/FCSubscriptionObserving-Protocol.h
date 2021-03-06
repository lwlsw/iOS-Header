//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsArticles/NSObject-Protocol.h>

@class FCSubscriptionController, NSSet;

@protocol FCSubscriptionObserving <NSObject>

@optional
- (void)subscriptionControllerDidResetToEmpty:(FCSubscriptionController *)arg1;
- (void)subscriptionController:(FCSubscriptionController *)arg1 didFindTagsWithNotificationSupport:(NSSet *)arg2;
- (void)subscriptionController:(FCSubscriptionController *)arg1 didAddTags:(NSSet *)arg2 changeTags:(NSSet *)arg3 moveTags:(NSSet *)arg4 removeTags:(NSSet *)arg5 subscriptionType:(unsigned long long)arg6 eventInitiationLevel:(long long)arg7;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HMOutgoingHomeInvitation, HMUser, NSArray, NSError;

@protocol HUUserListManagerTableDelegate <NSObject>
- (void)managerDidSendInvitations:(NSArray *)arg1;
- (void)managerDidDismissWithError:(NSError *)arg1;

@optional
- (void)managerDidUpdateUserList;
- (void)managerDidCancelInvite:(HMOutgoingHomeInvitation *)arg1 error:(NSError *)arg2;
- (void)managerDidRemoveUser:(HMUser *)arg1 error:(NSError *)arg2;
@end

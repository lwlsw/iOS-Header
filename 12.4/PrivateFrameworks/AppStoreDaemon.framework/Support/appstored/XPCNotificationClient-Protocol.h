//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray;

@protocol XPCNotificationClient <NSObject>
- (void)deliverProgress:(NSArray *)arg1 withBarrierBlock:(void (^)(void))arg2;
- (void)deliverNotifications:(NSArray *)arg1 withBarrierBlock:(void (^)(void))arg2;
@end

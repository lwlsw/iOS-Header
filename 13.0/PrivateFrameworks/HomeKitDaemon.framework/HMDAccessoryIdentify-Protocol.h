//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMFMessage;

@protocol HMDAccessoryIdentify <NSObject>
@property(readonly) _Bool supportsIdentify;

@optional
- (void)identifyAccessory:(HMFMessage *)arg1;
@end

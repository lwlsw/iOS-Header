//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AttentionAwareness/BKDeviceDelegate-Protocol.h>

@class BKDevice;

@protocol BKDevicePearlDelegate <BKDeviceDelegate>

@optional
- (void)device:(BKDevice *)arg1 pearlStateChanged:(long long)arg2;
- (void)device:(BKDevice *)arg1 pearlEventOccurred:(long long)arg2;
@end

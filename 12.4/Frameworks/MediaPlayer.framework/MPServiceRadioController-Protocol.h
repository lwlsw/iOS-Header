//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/NSObject-Protocol.h>

@protocol MPServiceRadioController <NSObject>
- (void)serviceRadioControllerGetRecentStationGroupsWithCompletionHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)serviceRadioControllerGetRadioAvailabilityWithCompletionHandler:(void (^)(_Bool, NSError *))arg1;
@end

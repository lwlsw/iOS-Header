//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/CAMControlStatusIndicator.h>

@interface CAMTimerStatusIndicator : CAMControlStatusIndicator
{
    long long _timerDuration;
}

@property(nonatomic) long long timerDuration; // @synthesize timerDuration=_timerDuration;
- (id)imageNameForCurrentState;
- (id)valueText;
- (_Bool)canShowValue;

@end

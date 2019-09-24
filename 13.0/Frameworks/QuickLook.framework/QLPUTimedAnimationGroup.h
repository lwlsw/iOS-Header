//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuickLook/QLPUAnimationGroup.h>

__attribute__((visibility("hidden")))
@interface QLPUTimedAnimationGroup : QLPUAnimationGroup
{
    _Bool _areAnimationsPaused;
    double _pausedElapsedTime;
    double _beginTime;
}

@property(nonatomic) double beginTime; // @synthesize beginTime=_beginTime;
- (void)_update;
- (void)updateAnimations;
@property(readonly, nonatomic) double currentTime;
- (void)resumeAnimations;
- (void)pauseAnimations;
- (void)setElapsedTime:(double)arg1;
- (double)elapsedTime;
- (id)init;

@end

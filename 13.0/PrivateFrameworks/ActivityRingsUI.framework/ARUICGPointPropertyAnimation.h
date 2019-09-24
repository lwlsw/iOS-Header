//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActivityRingsUI/ARUIAnimatableObjectPropertyAnimation.h>

@interface ARUICGPointPropertyAnimation : ARUIAnimatableObjectPropertyAnimation
{
    struct CGPoint _startValue;
    struct CGPoint _endValue;
    struct CGPoint _currentValue;
}

+ (id)animationWithEndingCGPointValue:(struct CGPoint)arg1 duration:(double)arg2 timingFunction:(id)arg3 completion:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) struct CGPoint currentValue; // @synthesize currentValue=_currentValue;
@property(readonly, nonatomic) struct CGPoint endValue; // @synthesize endValue=_endValue;
@property(readonly, nonatomic) struct CGPoint startValue; // @synthesize startValue=_startValue;
- (id)valueByAddingCurrentValueToValue:(id)arg1;
- (void)_updateWithProgress:(float)arg1;
- (void)_setCurrentValue:(id)arg1;
- (void)_setEndValue:(id)arg1;
- (void)_setStartValue:(id)arg1;
- (id)_currentValue;
- (id)_endValue;
- (id)_startValue;

@end

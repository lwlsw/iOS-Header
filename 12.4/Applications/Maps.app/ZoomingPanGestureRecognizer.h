//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIPanGestureRecognizer.h>

#import "ZoomingGestureType-Protocol.h"

@class NSString;
@protocol ZoomingGestureConfiguration;

__attribute__((visibility("hidden")))
@interface ZoomingPanGestureRecognizer : UIPanGestureRecognizer <ZoomingGestureType>
{
    double _translation;
    double _scale;
    double _velocity;
    double _previousVelocity;
    _Bool _didStartUpdate;
    double _lastUpdateTimestamp;
    id <ZoomingGestureConfiguration> _configuration;
}

@property(retain, nonatomic) id <ZoomingGestureConfiguration> configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (double)_zoomDraggingResistanceScale;
- (_Bool)_shouldReverseZoomDirection;
- (void)_updateScaleAndVelocityIfNeeded:(long long)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
@property(readonly, nonatomic) double scale;
@property(readonly, nonatomic) double velocity;
- (void)reset;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

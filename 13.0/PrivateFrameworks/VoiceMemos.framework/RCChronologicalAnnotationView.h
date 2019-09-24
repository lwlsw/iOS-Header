//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class RCUIConfiguration, UIColor, UIFont;

@interface RCChronologicalAnnotationView : UIView
{
    double _majorTickMinimumSpacing;
    UIFont *_timeLabelFont;
    _Bool _isPlayback;
    double _contentDuration;
    RCUIConfiguration *_UIConfiguration;
    UIColor *_backgroundDebugColor;
    unsigned long long _debugID;
    CDStruct_73a5d3ca _visibleTimeRange;
    CDStruct_73a5d3ca _markerClippingRange;
}

@property(nonatomic) unsigned long long debugID; // @synthesize debugID=_debugID;
@property(retain, nonatomic) UIColor *backgroundDebugColor; // @synthesize backgroundDebugColor=_backgroundDebugColor;
@property(copy, nonatomic) RCUIConfiguration *UIConfiguration; // @synthesize UIConfiguration=_UIConfiguration;
@property(nonatomic) _Bool isPlayback; // @synthesize isPlayback=_isPlayback;
@property(nonatomic) CDStruct_73a5d3ca markerClippingRange; // @synthesize markerClippingRange=_markerClippingRange;
@property(nonatomic) double contentDuration; // @synthesize contentDuration=_contentDuration;
@property(nonatomic) CDStruct_73a5d3ca visibleTimeRange; // @synthesize visibleTimeRange=_visibleTimeRange;
- (void).cxx_destruct;
- (id)_timeLabelAttributes;
- (id)_timeLabelAttributesWithFont:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (long long)tickMarksForMajorInterval:(double)arg1;
- (double)timeLabelsMajorInterval;
- (struct CGSize)labelsSize;
- (id)description;
- (id)initWithFrame:(struct CGRect)arg1;

@end

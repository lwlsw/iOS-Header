//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

@interface PXLivePhotoTrimScrubberSnapStripControllerSpec : NSObject
{
    _Bool _alwaysShowKeyTime;
    UIColor *_disabledColor;
    UIColor *_currentPositionMarkerColor;
    UIColor *_originalPositionMarkerColor;
    UIColor *_suggestedMarkerColor;
}

@property(nonatomic) _Bool alwaysShowKeyTime; // @synthesize alwaysShowKeyTime=_alwaysShowKeyTime;
@property(retain, nonatomic) UIColor *suggestedMarkerColor; // @synthesize suggestedMarkerColor=_suggestedMarkerColor;
@property(retain, nonatomic) UIColor *originalPositionMarkerColor; // @synthesize originalPositionMarkerColor=_originalPositionMarkerColor;
@property(retain, nonatomic) UIColor *currentPositionMarkerColor; // @synthesize currentPositionMarkerColor=_currentPositionMarkerColor;
@property(retain, nonatomic) UIColor *disabledColor; // @synthesize disabledColor=_disabledColor;
- (void).cxx_destruct;
- (id)init;

@end

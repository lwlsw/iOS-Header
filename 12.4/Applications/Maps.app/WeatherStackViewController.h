//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AirQualityConditionsViewControllerDelegate-Protocol.h"
#import "UIViewControllerPreviewingDelegate-Protocol.h"
#import "WeatherConditionsViewControllerDelegate-Protocol.h"
#import "WeatherLocationDataProviderObserver-Protocol.h"

@class AirQualityConditionsViewController, NSNumber, NSObject, NSString, UIGestureRecognizer, UIImpactFeedbackGenerator, UILongPressGestureRecognizer, UIStackView, UIView, UIVisualEffectView, WFLocation, WeatherConditionsViewController;
@protocol OS_dispatch_source, UIViewControllerPreviewing;

__attribute__((visibility("hidden")))
@interface WeatherStackViewController : UIViewController <UIViewControllerPreviewingDelegate, WeatherLocationDataProviderObserver, WeatherConditionsViewControllerDelegate, AirQualityConditionsViewControllerDelegate>
{
    _Bool _updatingVisibility;
    NSString *_blurGroupName;
    id <UIViewControllerPreviewing> _previewingContext;
    UIGestureRecognizer *_previewingGestureRecognizer;
    unsigned long long _weatherOrbState;
    UIView *_contentView;
    UIVisualEffectView *_blurView;
    UIStackView *_stackView;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    UIImpactFeedbackGenerator *_feedbackGenerator;
    WFLocation *_location;
    AirQualityConditionsViewController *_airQualityConditionsViewController;
    WeatherConditionsViewController *_weatherConditionsViewController;
    NSNumber *_requestedAirQualityShown;
    NSNumber *_requestedWeatherShown;
    NSObject<OS_dispatch_source> *_updateVisibilityTimer;
}

@property(nonatomic) _Bool updatingVisibility; // @synthesize updatingVisibility=_updatingVisibility;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *updateVisibilityTimer; // @synthesize updateVisibilityTimer=_updateVisibilityTimer;
@property(retain, nonatomic) NSNumber *requestedWeatherShown; // @synthesize requestedWeatherShown=_requestedWeatherShown;
@property(retain, nonatomic) NSNumber *requestedAirQualityShown; // @synthesize requestedAirQualityShown=_requestedAirQualityShown;
@property(retain, nonatomic) WeatherConditionsViewController *weatherConditionsViewController; // @synthesize weatherConditionsViewController=_weatherConditionsViewController;
@property(retain, nonatomic) AirQualityConditionsViewController *airQualityConditionsViewController; // @synthesize airQualityConditionsViewController=_airQualityConditionsViewController;
@property(retain, nonatomic) WFLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator; // @synthesize feedbackGenerator=_feedbackGenerator;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(nonatomic) __weak UIStackView *stackView; // @synthesize stackView=_stackView;
@property(nonatomic) __weak UIVisualEffectView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) unsigned long long weatherOrbState; // @synthesize weatherOrbState=_weatherOrbState;
@property(nonatomic) __weak UIGestureRecognizer *previewingGestureRecognizer; // @synthesize previewingGestureRecognizer=_previewingGestureRecognizer;
@property(retain, nonatomic) id <UIViewControllerPreviewing> previewingContext; // @synthesize previewingContext=_previewingContext;
@property(copy, nonatomic) NSString *blurGroupName; // @synthesize blurGroupName=_blurGroupName;
- (void).cxx_destruct;
- (id)_weatherPunchOutURL;
- (void)_openWeatherPunchOutURL;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_dismissWeatherOrbGesture;
- (void)_configureWeatherOrbSupport;
- (void)_configureSubviews;
- (void)_updateVisibilityAnimated:(_Bool)arg1;
- (void)_requestVisibilityUpdateAnimated:(_Bool)arg1;
- (void)_setCornerRadiusWithMaskedCorners:(unsigned long long)arg1 withValue:(double)arg2;
- (void)airQualityConditionsViewController:(id)arg1 makeVisible:(_Bool)arg2 animated:(_Bool)arg3;
- (void)weatherConditionsViewController:(id)arg1 makeVisible:(_Bool)arg2 animated:(_Bool)arg3;
- (void)weatherLocationDataProvider:(id)arg1 didChangeLocation:(id)arg2;
- (void)longPressDetected:(id)arg1;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)updateTheme;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithWeatherLocationDataProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


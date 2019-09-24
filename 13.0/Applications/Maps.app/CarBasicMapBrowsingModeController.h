//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PassThroughViewController.h"

#import "CarChromeModeController-Protocol.h"
#import "MKMapViewDelegate-Protocol.h"

@class CarChromeViewController, CarMapTrackingController, ChromeViewController, NSArray, NSString, UIViewController;
@protocol MapSelectionManagerDelegate;

__attribute__((visibility("hidden")))
@interface CarBasicMapBrowsingModeController : PassThroughViewController <CarChromeModeController, MKMapViewDelegate>
{
    _Bool _didSetInitialTracking;
    CarChromeViewController *_chromeViewController;
    CarMapTrackingController *_trackingController;
}

@property(nonatomic) ChromeViewController *chromeViewController;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *carFocusOrderSequences;
- (void)resignCurrentModeAnimated:(_Bool)arg1 toMode:(id)arg2;
- (void)becomeCurrentModeAnimated:(_Bool)arg1 fromMode:(id)arg2;
- (id)passThroughView;
@property(readonly, nonatomic) UIViewController *viewController;
@property(readonly, nonatomic) _Bool showsMapView;
- (void)displayCurrentLocationAnimated:(_Bool)arg1;
- (void)setMapCamera:(id)arg1 animated:(_Bool)arg2;
- (void)setVisibleMapRegion:(CDStruct_b7cb895d)arg1 animated:(_Bool)arg2;
- (void)setInitialTrackingIfNeededAndPossible;
@property(readonly, nonatomic) CarMapTrackingController *trackingController; // @synthesize trackingController=_trackingController;
- (id)mapView;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) long long accessoriesHidingBehavior;
@property(readonly, nonatomic) _Bool allowKnobNudgeMapPanning;
@property(readonly, nonatomic) _Bool allowMapZoomAndRecentering;
@property(readonly, nonatomic) long long autohideBehavior;
@property(readonly, nonatomic) double autohideIdlenessInterval;
@property(readonly, nonatomic) int currentUsageTarget;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool invalidAfterDisconnect;
@property(readonly, nonatomic) id <MapSelectionManagerDelegate> mapSelectionManagerDelegate;
@property(readonly, nonatomic) id mapViewDelegate;
@property(readonly, nonatomic) _Bool navigationTransitionShouldOccurImmediately;
@property(readonly, nonatomic) NSArray *preferredCarFocusEnvironments;
@property(readonly, nonatomic) _Bool shouldAccessoriesModifyMapInsets;
@property(readonly, nonatomic) _Bool shouldAllowKnobFocusMovement;
@property(readonly, nonatomic) _Bool shouldEmulateOverlayInset;
@property(readonly, nonatomic) _Bool shouldTimeoutAfterDisconnect;
@property(readonly, nonatomic) _Bool shouldTimeoutDuringNavigation;
@property(readonly, nonatomic) _Bool showsCameraToggleButton;
@property(readonly, nonatomic) _Bool showsExplicitPanButton;
@property(readonly, nonatomic) _Bool showsFloatingControls;
@property(readonly, nonatomic) _Bool showsHeadingIndicator;
@property(readonly, nonatomic) _Bool showsMapViewForTransitions;
@property(readonly, nonatomic) _Bool showsNavPanRecenterButton;
@property(readonly, nonatomic) _Bool showsNavigationBar;
@property(readonly, nonatomic) _Bool showsSpeedLimit;
@property(readonly, nonatomic) _Bool showsZoomControls;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool usesDefaultTransitions;
@property(readonly, nonatomic) id visuallySelectedItem;
@property(readonly, nonatomic) _Bool zoomInButtonPressed;
@property(readonly, nonatomic) _Bool zoomOutButtonPressed;

@end

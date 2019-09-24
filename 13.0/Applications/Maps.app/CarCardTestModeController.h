//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PassThroughViewController.h"

#import "CarChromeModeController-Protocol.h"
#import "PassThroughViewControllerDelegate-Protocol.h"

@class CarChromeViewController, CarFocusableButton, CarMapTrackingController, ChromeViewController, NSArray, NSMutableDictionary, NSString, UIView, UIViewController;
@protocol MapSelectionManagerDelegate;

__attribute__((visibility("hidden")))
@interface CarCardTestModeController : PassThroughViewController <PassThroughViewControllerDelegate, CarChromeModeController>
{
    NSMutableDictionary *_cards;
    NSMutableDictionary *_cardToConfigMap;
    CarFocusableButton *_pushButton;
    CarChromeViewController *_chromeViewController;
}

@property(nonatomic) ChromeViewController *chromeViewController;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *carFocusOrderSequences;
- (void)_handleCardButtonTag:(unsigned long long)arg1 forStackID:(id)arg2 card:(id)arg3;
- (void)_deleteCardUUID:(id)arg1;
- (void)_push;
- (id)_stackedCardWithConfig:(id)arg1 stackID:(id)arg2;
- (void)_addCardWithConfig:(id)arg1;
- (void)_addCardNotification:(id)arg1;
@property(readonly, nonatomic) UIView *passThroughView;
- (void)viewDidLoad;
- (void)configureCardsOverlay:(id)arg1;
- (void)resignCurrentModeAnimated:(_Bool)arg1 toMode:(id)arg2;
- (void)becomeCurrentModeAnimated:(_Bool)arg1 fromMode:(id)arg2;
@property(readonly, nonatomic) UIViewController *viewController;
@property(readonly, nonatomic) long long autohideBehavior;
@property(readonly, nonatomic) _Bool showsMapView;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) long long accessoriesHidingBehavior;
@property(readonly, nonatomic) _Bool allowKnobNudgeMapPanning;
@property(readonly, nonatomic) _Bool allowMapZoomAndRecentering;
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
@property(readonly, nonatomic) CarMapTrackingController *trackingController;
@property(readonly, nonatomic) _Bool usesDefaultTransitions;
@property(readonly, nonatomic) id visuallySelectedItem;
@property(readonly, nonatomic) _Bool zoomInButtonPressed;
@property(readonly, nonatomic) _Bool zoomOutButtonPressed;

@end

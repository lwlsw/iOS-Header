//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ContainerViewController.h"

#import "BannerContainerProtocol-Protocol.h"
#import "MapGestureCardDismissalHelperDelegate-Protocol.h"
#import "MapviewLayoutGuideProtocol-Protocol.h"
#import "PassThroughViewDelegate-Protocol.h"

@class CardAnimation, MapGestureCardDismissalHelper, MaskContainerView, NSArray, NSLayoutConstraint, NSNumber, NSString, StatusBarBackgroundView, StatusBarBackgroundViewStyle, TopBannerView, UILayoutGuide, UIView;
@protocol OverlayContainerDimmingBehaviour, StatusBarSupplementaryView;

__attribute__((visibility("hidden")))
@interface OverlayContainerViewController : ContainerViewController <MapviewLayoutGuideProtocol, BannerContainerProtocol, PassThroughViewDelegate, MapGestureCardDismissalHelperDelegate>
{
    NSLayoutConstraint *_topContentConstraint;
    NSArray *_topContentHorizontalConstraints;
    NSLayoutConstraint *_statusBarBackgroundViewBottomToSafeAreaBottomConstraint;
    NSLayoutConstraint *_overlayToTopInsetConstraint;
    NSLayoutConstraint *_topBannerViewHeightConstraint;
    MaskContainerView *_dimmingView;
    _Bool _dimmingViewDisabled;
    NSNumber *_dimmingViewDisabledAlphaUpdateCache;
    UIView *_topDimmingView;
    StatusBarBackgroundView *_statusBarBackgroundView;
    _Bool _cardDismissalHelperEnabled;
    UIView *_topContentView;
    UIView *_overlayView;
    TopBannerView *_topBannerView;
    UIView<StatusBarSupplementaryView> *_statusBarSupplementaryView;
    unsigned long long _topContentSizeStyle;
    UILayoutGuide *_innerLayoutGuide;
    MapGestureCardDismissalHelper *_cardDismissalHelper;
    id <OverlayContainerDimmingBehaviour> _dimmingBehaviour;
    NSArray *_innerLayoutGuideConstraints;
}

@property(retain, nonatomic) NSArray *innerLayoutGuideConstraints; // @synthesize innerLayoutGuideConstraints=_innerLayoutGuideConstraints;
@property(retain, nonatomic) id <OverlayContainerDimmingBehaviour> dimmingBehaviour; // @synthesize dimmingBehaviour=_dimmingBehaviour;
@property(nonatomic) _Bool cardDismissalHelperEnabled; // @synthesize cardDismissalHelperEnabled=_cardDismissalHelperEnabled;
@property(readonly, nonatomic) MapGestureCardDismissalHelper *cardDismissalHelper; // @synthesize cardDismissalHelper=_cardDismissalHelper;
@property(retain, nonatomic) UILayoutGuide *innerLayoutGuide; // @synthesize innerLayoutGuide=_innerLayoutGuide;
@property(nonatomic) unsigned long long topContentSizeStyle; // @synthesize topContentSizeStyle=_topContentSizeStyle;
@property(retain, nonatomic) UIView<StatusBarSupplementaryView> *statusBarSupplementaryView; // @synthesize statusBarSupplementaryView=_statusBarSupplementaryView;
@property(retain, nonatomic) TopBannerView *topBannerView; // @synthesize topBannerView=_topBannerView;
@property(readonly, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(readonly, nonatomic) UIView *topContentView; // @synthesize topContentView=_topContentView;
- (void).cxx_destruct;
- (id)dragGestureTrackerForCardDismissalHelper:(id)arg1;
- (void)cardDismissalHelper:(id)arg1 requestedDismissalWithVelocity:(double)arg2;
- (double)dismissalRectTopEdgeForCardDismissalHelper:(id)arg1 coordinateSpace:(id)arg2;
- (_Bool)cardDismissalHelperShouldObserveGestures:(id)arg1;
- (double)_topBannerAvailableWidth;
- (id)_topBannerViewHorizontalConstraints;
- (id)_topBannerViewConstraints;
- (void)updateTopBannerViewWithTopBannerItems:(id)arg1;
- (void)viewControllerWantsTopBannerItemsUpdate:(id)arg1;
- (void)setStatusBarSupplementaryView:(id)arg1 animated:(_Bool)arg2;
- (double)topEdgeInset;
@property(readonly, nonatomic) StatusBarBackgroundViewStyle *statusBarBackgroundViewStyle;
- (void)updateStatusBarBackgroundViewFromStyle;
- (void)contentHeightUpdatedWithValue:(double)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)prefersStatusBarHidden;
- (void)presentController:(id)arg1 animated:(_Bool)arg2 useDefaultContaineeLayout:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)updateContainerStyleDependentConstraints;
- (void)containerStyleManagerConfigureLayoutForStyle:(unsigned long long)arg1;
- (void)setupConstraints;
- (void)layoutGuideUpdated;
- (void)setOverlayToBannerViewBottomDistance:(double)arg1;
- (void)viewLayoutMarginsDidChange;
- (void)updateEdgePadding;
- (void)_dismissAction:(id)arg1;
- (void)hideStatusBarBackground:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)showStatusBarBackgroundViewWhenResigning;
- (void)_didBecomeActive:(id)arg1;
- (void)_willResignActive:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)passThroughView;
- (void)updateViewsForCustomDismissalTransition;
- (void)updateViewsForCustomPresentationTransition;
- (void)transitionEnded;
- (double)currentDimmingValue;
- (void)restoreDimmingViewAlphaCacheIfNeeded;
- (void)_updateDimming;
- (void)_updateDimmingViewsWithAlpha:(double)arg1;
- (void)_updateDimmingViewsWithAlpha:(double)arg1 animated:(_Bool)arg2;

// Remaining properties
@property(readonly, nonatomic) double availableHeight;
@property(readonly, nonatomic) NSString *blurGroupName;
@property(readonly) CardAnimation *cardHeightAnimation;
@property(readonly, nonatomic) unsigned long long containeeLayout;
@property(readonly, nonatomic) unsigned long long containerStyle;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) double edgePadding;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long maxLayoutForEdgeInsetsUpdate;
@property(readonly) Class superclass;

@end

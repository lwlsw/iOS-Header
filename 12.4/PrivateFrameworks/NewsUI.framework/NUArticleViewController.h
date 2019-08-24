//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <NewsUI/NUANFDebugSettingsObserver-Protocol.h>
#import <NewsUI/NUBarCompressible-Protocol.h>
#import <NewsUI/NUDynamicTypeObserving-Protocol.h>
#import <NewsUI/NULoadable-Protocol.h>
#import <NewsUI/SXAnalyticsReporting-Protocol.h>
#import <NewsUI/SXScrollViewControllerDelegate-Protocol.h>

@class FCObservable, NFEventManager, NFMultiDelegate, NSHashTable, NSString, NUArticleAdManager, SXScrollViewController, UIScrollView;
@protocol NUANFDebugSettingsProvider, NUArticleDataProvider, NUArticleKeyCommandManager, NUDocumentSectionBlueprintProvider, NUDynamicTypeProviding, NUEndOfArticleDataProvider, NULoadingDelegate, SXAnalyticsReporting;

@interface NUArticleViewController : UIViewController <SXScrollViewControllerDelegate, SXAnalyticsReporting, NUDynamicTypeObserving, NUANFDebugSettingsObserver, NULoadable, NUBarCompressible>
{
    _Bool _articleIsPresentingFullscreen;
    id <NULoadingDelegate> _loadingDelegate;
    id <SXAnalyticsReporting> _analyticsReporting;
    FCObservable *_articleViewStyler;
    NFMultiDelegate *_multiScrollViewDelegate;
    UIScrollView *_scrollView;
    NSString *_anchorFragment;
    SXScrollViewController *_scrollViewController;
    id <NUArticleDataProvider> _articleDataProvider;
    id <NUEndOfArticleDataProvider> _endOfArticleDataProvider;
    NUArticleAdManager *_adManager;
    id <NUDynamicTypeProviding> _dynamicTypeProviding;
    NFEventManager *_eventManager;
    id <NUArticleKeyCommandManager> _keyCommandManager;
    NSHashTable *_loadingListeners;
    id <NUDocumentSectionBlueprintProvider> _documentSectionBlueprintProvider;
    id <NUANFDebugSettingsProvider> _debugSettingsProvider;
    unsigned long long _presentationMode;
}

+ (id)_parentOrPresentingViewControllerFor:(id)arg1;
@property(nonatomic) unsigned long long presentationMode; // @synthesize presentationMode=_presentationMode;
@property(nonatomic) _Bool articleIsPresentingFullscreen; // @synthesize articleIsPresentingFullscreen=_articleIsPresentingFullscreen;
@property(readonly, nonatomic) id <NUANFDebugSettingsProvider> debugSettingsProvider; // @synthesize debugSettingsProvider=_debugSettingsProvider;
@property(readonly, nonatomic) id <NUDocumentSectionBlueprintProvider> documentSectionBlueprintProvider; // @synthesize documentSectionBlueprintProvider=_documentSectionBlueprintProvider;
@property(readonly, nonatomic) NSHashTable *loadingListeners; // @synthesize loadingListeners=_loadingListeners;
@property(readonly, nonatomic) id <NUArticleKeyCommandManager> keyCommandManager; // @synthesize keyCommandManager=_keyCommandManager;
@property(readonly, nonatomic) NFEventManager *eventManager; // @synthesize eventManager=_eventManager;
@property(readonly, nonatomic) id <NUDynamicTypeProviding> dynamicTypeProviding; // @synthesize dynamicTypeProviding=_dynamicTypeProviding;
@property(readonly, nonatomic) NUArticleAdManager *adManager; // @synthesize adManager=_adManager;
@property(readonly, nonatomic) id <NUEndOfArticleDataProvider> endOfArticleDataProvider; // @synthesize endOfArticleDataProvider=_endOfArticleDataProvider;
@property(readonly, nonatomic) id <NUArticleDataProvider> articleDataProvider; // @synthesize articleDataProvider=_articleDataProvider;
@property(readonly, nonatomic) SXScrollViewController *scrollViewController; // @synthesize scrollViewController=_scrollViewController;
@property(copy, nonatomic) NSString *anchorFragment; // @synthesize anchorFragment=_anchorFragment;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(readonly, nonatomic) NFMultiDelegate *multiScrollViewDelegate; // @synthesize multiScrollViewDelegate=_multiScrollViewDelegate;
@property(readonly, nonatomic) FCObservable *articleViewStyler; // @synthesize articleViewStyler=_articleViewStyler;
@property(nonatomic) __weak id <SXAnalyticsReporting> analyticsReporting; // @synthesize analyticsReporting=_analyticsReporting;
@property(nonatomic) __weak id <NULoadingDelegate> loadingDelegate; // @synthesize loadingDelegate=_loadingDelegate;
- (void).cxx_destruct;
- (_Bool)accessibilityShouldScrollForScrollViewController:(id)arg1 defaultValue:(_Bool)arg2;
- (_Bool)scrollViewController:(id)arg1 shouldOccludeAccessibilityElement:(id)arg2;
- (id)currentPresentationAttributes;
- (void)updatePresentationAttributes;
- (void)updateScrollViewControllerWithFooterBlueprint:(id)arg1;
- (void)updateScrollViewControllerWithHeaderBlueprint:(id)arg1;
- (void)scrollToTopAnimated:(_Bool)arg1;
- (void)restoreScrollPositionIfNeeded;
- (void)testingConditionEnabled:(_Bool)arg1;
- (void)viewportDebuggingEnabled:(_Bool)arg1;
- (void)dynamicTypeDidChange:(id)arg1;
- (void)reportEvent:(id)arg1;
- (void)scrollViewController:(id)arg1 enableNavigation:(_Bool)arg2;
- (double)toolBarHeightForScrollViewController:(id)arg1;
- (double)navigationBarHeightForScrollViewController:(id)arg1;
- (void)scrollViewControllerDismissFullscreen:(id)arg1;
- (void)scrollViewControllerRequestsFullscreen:(id)arg1;
- (void)scrollViewControllerDidLayoutContent:(id)arg1;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (_Bool)canBecomeFirstResponder;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithArticleDataProvider:(id)arg1 scrollViewController:(id)arg2 articleAdManager:(id)arg3 dynamicTypeProviding:(id)arg4 appStateMonitor:(id)arg5 keyCommandManager:(id)arg6 loadingListeners:(id)arg7 headerBlueprintProvider:(id)arg8 debugSettingsProvider:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

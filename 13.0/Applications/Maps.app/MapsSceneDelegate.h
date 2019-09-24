//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MSPMapsPushDaemonProxyObserver-Protocol.h"
#import "MapsActivityControllerDelegate-Protocol.h"
#import "UIWindowSceneDelegate-Protocol.h"

@class AppCoordinator, EntryPointsCoordinator, IOSChromeViewController, MapsActionController, MapsActivity, MapsActivityController, NSString, PlatformController, UIWindow;

__attribute__((visibility("hidden")))
@interface MapsSceneDelegate : NSObject <MapsActivityControllerDelegate, MSPMapsPushDaemonProxyObserver, UIWindowSceneDelegate>
{
    id _transportTypeChangedListener;
    UIWindow *_window;
    PlatformController *_platformController;
    AppCoordinator *_appCoordinator;
    IOSChromeViewController *_chromeViewController;
    EntryPointsCoordinator *_entryPointsCoordinator;
    MapsActionController *_mapsActionController;
    MapsActivityController *_mapsActivityController;
}

@property(retain, nonatomic) MapsActivityController *mapsActivityController; // @synthesize mapsActivityController=_mapsActivityController;
@property(retain, nonatomic) MapsActionController *mapsActionController; // @synthesize mapsActionController=_mapsActionController;
@property(retain, nonatomic) EntryPointsCoordinator *entryPointsCoordinator; // @synthesize entryPointsCoordinator=_entryPointsCoordinator;
@property(retain, nonatomic) IOSChromeViewController *chromeViewController; // @synthesize chromeViewController=_chromeViewController;
@property(retain, nonatomic) AppCoordinator *appCoordinator; // @synthesize appCoordinator=_appCoordinator;
@property(retain, nonatomic) PlatformController *platformController; // @synthesize platformController=_platformController;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (void)dismissMapsDebugControllerWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentMapsDebugController;
- (void)updateDirectionsListVisibility:(_Bool)arg1;
- (void)historyDidChange;
- (void)favoritesDidChange;
- (void)pushDaemonProxyReceivedNotificationData:(id)arg1 forType:(id)arg2 recordIdentifier:(id)arg3;
- (void)_resetViewModeForTransportTypePreferenceIfNeeded;
- (void)geoDaemonDisconnectNotificationHandler:(id)arg1;
- (void)_sendMapsSuggestionsSignalsUsingBaseMode:(_Bool)arg1 secondsSinceBackgrounding:(double)arg2 routePlanningPresented:(_Bool)arg3;
- (void)_locationManagerAuthorizationChanged:(id)arg1;
- (void)_loadMapsForWindowScene:(id)arg1;
- (id)searchPinsManager;
- (id)appSessionController;
- (void)windowScene:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)scene:(id)arg1 openURLContexts:(id)arg2;
- (void)setMapsActivity:(id)arg1 assumedSourceFidelity:(unsigned long long)arg2 source:(long long)arg3;
@property(retain, nonatomic) MapsActivity *mapsActivity;
- (id)mapsActivityWithFidelity:(unsigned long long)arg1;
- (void)userActivityWillSave:(id)arg1;
- (void)setNeedsUserActivityUpdate;
- (void)archiveMapsActivity;
- (void)scene:(id)arg1 didFailToContinueUserActivityWithType:(id)arg2 error:(id)arg3;
- (void)scene:(id)arg1 continueUserActivity:(id)arg2;
- (void)scene:(id)arg1 willContinueUserActivityWithType:(id)arg2;
- (id)stateRestorationActivityForScene:(id)arg1;
- (void)sceneDidEnterBackground:(id)arg1;
- (void)sceneWillEnterForeground:(id)arg1;
- (void)sceneWillResignActive:(id)arg1;
- (void)sceneDidBecomeActive:(id)arg1;
- (void)sceneDidDisconnect:(id)arg1;
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

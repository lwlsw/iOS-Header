//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVKit/AVPictureInPictureViewControllerDelegate-Protocol.h>
#import <AVKit/PGPictureInPictureProxyDelegate-Protocol.h>

@class AVObservationController, AVPictureInPictureViewController, AVPlayerController, AVPlayerLayer, AVSecondScreenConnection, NSString, PGPictureInPictureProxy, __AVPlayerLayerView;
@protocol AVPictureInPictureControllerDelegate, OS_dispatch_source;

@interface AVPictureInPictureController : NSObject <AVPictureInPictureViewControllerDelegate, PGPictureInPictureProxyDelegate>
{
    AVObservationController *_keyValueObservationController;
    _Bool _isRedirectingVideoForPIP;
    AVPlayerLayer *_playerLayer;
    __AVPlayerLayerView *_playerLayerView;
    AVPlayerController *_playerController;
    AVSecondScreenConnection *_secondScreenConnection;
    PGPictureInPictureProxy *_pictureInPictureProxy;
    AVPictureInPictureViewController *_pictureInPictureViewController;
    NSObject<OS_dispatch_source> *_fullScreenCheckTimer;
    _Bool _isPlaying;
    _Bool _isFullScreen;
    struct CGRect _viewFrameForInteractiveTransitionAnimationWhenEnteringBackground;
    id <AVPictureInPictureControllerDelegate> _delegate;
    struct {
        _Bool pictureInPictureControllerWillStartPictureInPicture;
        _Bool pictureInPictureControllerDidStartPictureInPicture;
        _Bool pictureInPictureController_failedToStartPictureInPictureWithError;
        _Bool pictureInPictureControllerWillStopPictureInPicture;
        _Bool pictureInPictureControllerDidStopPictureInPicture;
        _Bool pictureInPictureController_restoreUserInterfaceForPictureInPictureStopWithCompletionHandler;
    } _delegateRespondsTo;
    _Bool _allowsPictureInPicturePlayback;
    _Bool _allowsPictureInPictureFromInlineWhenEnteringBackground;
}

+ (id)keyPathsForValuesAffectingPictureInPictureWasStartedWhenEnteringBackground;
+ (id)keyPathsForValuesAffectingPictureInPictureSuspended;
+ (id)keyPathsForValuesAffectingPictureInPictureActive;
+ (id)keyPathsForValuesAffectingPictureInPicturePossible;
+ (id)pictureInPictureButtonStopImageCompatibleWithTraitCollection:(id)arg1;
+ (id)pictureInPictureButtonStartImageCompatibleWithTraitCollection:(id)arg1;
+ (_Bool)isPictureInPictureSupported;
@property(nonatomic) _Bool allowsPictureInPictureFromInlineWhenEnteringBackground; // @synthesize allowsPictureInPictureFromInlineWhenEnteringBackground=_allowsPictureInPictureFromInlineWhenEnteringBackground;
@property(nonatomic) _Bool allowsPictureInPicturePlayback; // @synthesize allowsPictureInPicturePlayback=_allowsPictureInPicturePlayback;
@property(readonly, nonatomic) __AVPlayerLayerView *playerLayerView; // @synthesize playerLayerView=_playerLayerView;
- (void).cxx_destruct;
- (long long)pictureInPictureProxyInterfaceOrientationForTransitionAnimation:(id)arg1;
- (void)pictureInPictureProxyPictureInPictureInterruptionEnded:(id)arg1;
- (void)pictureInPictureProxyPictureInPictureInterruptionBegan:(id)arg1;
- (void)pictureInPictureProxy:(id)arg1 didStopPictureInPictureWithAnimationType:(long long)arg2 reason:(long long)arg3;
- (void)pictureInPictureProxy:(id)arg1 willStopPictureInPictureWithAnimationType:(long long)arg2 reason:(long long)arg3;
- (void)pictureInPictureProxy:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)pictureInPictureProxy:(id)arg1 failedToStartPictureInPictureWithAnimationType:(long long)arg2 error:(id)arg3;
- (void)pictureInPictureProxy:(id)arg1 didStartPictureInPictureWithAnimationType:(long long)arg2;
- (void)pictureInPictureProxy:(id)arg1 willStartPictureInPictureWithAnimationType:(long long)arg2;
- (struct CGRect)pictureInPictureProxyViewFrameForTransitionAnimation:(id)arg1;
- (void)pictureInPictureViewControllerViewWillDisappear:(id)arg1;
- (void)pictureInPictureViewControllerViewDidAppear:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_stopRedirectingLayerForPictureInPicture;
- (void)_startRedirectingLayerForPictureInPicture;
- (void)_updatePlaybackProgress;
- (void)_updatePictureInPictureShouldStartWhenEnteringBackground;
- (void)_checkIsFullScreenAndUpdatePictureInPictureShouldStartWhenEnteringBackground;
- (struct CGRect)_playerLayerVideoRectInScreen;
- (id)_window;
- (void)playerLayerLayoutDidChange;
- (void)stopPictureInPictureEvenWhenInBackground;
- (void)stopPictureInPicture;
- (void)startPictureInPicture;
@property(readonly, nonatomic) _Bool pictureInPictureWasStartedWhenEnteringBackground;
@property(retain, nonatomic) AVPlayerController *playerController;
@property(readonly, nonatomic, getter=isPictureInPictureSuspended) _Bool pictureInPictureSuspended;
@property(readonly, nonatomic, getter=isPictureInPictureActive) _Bool pictureInPictureActive;
@property(readonly, nonatomic, getter=isPictureInPicturePossible) _Bool pictureInPicturePossible;
@property(nonatomic) __weak id <AVPictureInPictureControllerDelegate> delegate;
@property(readonly, nonatomic) AVPlayerLayer *playerLayer;
- (void)dealloc;
- (id)init;
- (id)initWithPlayerLayerView:(id)arg1;
- (id)initWithPlayerLayer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

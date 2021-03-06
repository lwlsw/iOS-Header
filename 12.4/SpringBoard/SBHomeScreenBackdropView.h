//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBHomeScreenBackdropViewBase.h"

@class MTMaterialView, UIImage, UIImageView, UIViewFloatAnimatableProperty;

@interface SBHomeScreenBackdropView : SBHomeScreenBackdropViewBase
{
    MTMaterialView *_materialView;
    UIImage *_blurredContentSnapshotImage;
    UIImageView *_blurredContentSnapshotImageView;
    unsigned long long _materialViewAnimationCount;
    _Bool _waitingForBackdropViewToRender;
    UIViewFloatAnimatableProperty *_backdropFloatAnimatableProperty;
}

- (void).cxx_destruct;
- (void)_updateBackdropViewIfNeededInvalidatingSnapshot:(_Bool)arg1;
- (void)_invalidateBackdropSnapshot;
- (void)_updateBackdropViewIfNeeded;
- (void)_resetHomeScreenBlurredContentSnapshotImage;
- (id)homeScreenBlurredContentSnapshotImage;
- (_Bool)isOpaque;
- (void)setBlurProgress:(double)arg1 behaviorMode:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)endRequiringLiveBackdropViewForReason:(id)arg1;
- (void)endRequiringBackdropViewForReason:(id)arg1;
- (void)beginRequiringLiveBackdropViewForReason:(id)arg1;
- (void)beginRequiringBackdropViewForReason:(id)arg1;
- (void)_configureBackdropAnimatableProperty;
- (void)_setupBackdropView;
- (id)initWithFrame:(struct CGRect)arg1;

@end


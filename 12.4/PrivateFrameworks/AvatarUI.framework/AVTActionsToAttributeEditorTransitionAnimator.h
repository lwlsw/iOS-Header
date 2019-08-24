//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/UIViewControllerAnimatedTransitioning-Protocol.h>

@class AVTUIEnvironment, NSString;
@protocol AVTViewLayoutInfo;

@interface AVTActionsToAttributeEditorTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
    AVTUIEnvironment *_environment;
    id <AVTViewLayoutInfo> _avtViewLayoutInfo;
}

+ (struct UIEdgeInsets)adjustedSafeAreaInsetsForView:(id)arg1;
@property(readonly, nonatomic) id <AVTViewLayoutInfo> avtViewLayoutInfo; // @synthesize avtViewLayoutInfo=_avtViewLayoutInfo;
@property(readonly, nonatomic) AVTUIEnvironment *environment; // @synthesize environment=_environment;
- (void).cxx_destruct;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)initWithAVTViewLayoutInfo:(id)arg1 environment:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

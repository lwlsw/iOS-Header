//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <UIKitCore/CAAnimationDelegate-Protocol.h>

@class NSString, UIImageView, UIStatusBarLockItemView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarLockItemPadlockView : UIView <CAAnimationDelegate>
{
    UIImageView *_bodyView;
    UIImageView *_shackleView;
    CDUnknownBlockType _completionBlock;
    UIStatusBarLockItemView *_owner;
}

@property(nonatomic) __weak UIStatusBarLockItemView *owner; // @synthesize owner=_owner;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) UIImageView *shackleView; // @synthesize shackleView=_shackleView;
@property(retain, nonatomic) UIImageView *bodyView; // @synthesize bodyView=_bodyView;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)jiggleCompletionBlock:(CDUnknownBlockType)arg1;
- (void)animateUnlockCompletionBlock:(CDUnknownBlockType)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)reset;
- (id)initWithFrame:(struct CGRect)arg1 owner:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


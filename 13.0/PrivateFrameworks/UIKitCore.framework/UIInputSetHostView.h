//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

__attribute__((visibility("hidden")))
@interface UIInputSetHostView : UIView
{
}

+ (_Bool)_notifyOnExplicitLayout;
+ (_Bool)_shouldHitTestInputViewFirst;
+ (_Bool)requiresConstraintBasedLayout;
- (void)layoutIfNeeded;
- (unsigned long long)_clipCornersOfView:(id)arg1;
- (void)_didChangeKeyplaneWithContext:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (int)textEffectsVisibilityLevel;

@end

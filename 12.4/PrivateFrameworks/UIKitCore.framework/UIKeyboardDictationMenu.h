//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIKeyboardMenuView.h>

__attribute__((visibility("hidden")))
@interface UIKeyboardDictationMenu : UIKeyboardMenuView
{
}

+ (id)activeInstance;
+ (id)sharedInstance;
- (_Bool)usesDimmingView;
- (void)hide;
- (void)fadeWithDelay:(double)arg1;
- (void)fade;
- (void)cleanupForFadeOrHide;
- (void)willShow;
- (void)performShowAnimation;
- (_Bool)centerPopUpOverKey;
- (_Bool)usesTable;
- (struct CGSize)preferredSize;
- (id)initWithFrame:(struct CGRect)arg1;

@end


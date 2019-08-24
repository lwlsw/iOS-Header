//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuickLook/QLItemViewController.h>

@class NSArray, NSString, QLDetailItemViewControllerState, QLFileIconImageView, UIButton, UIStackView, UIView;

__attribute__((visibility("hidden")))
@interface QLDetailItemViewController : QLItemViewController
{
    QLFileIconImageView *_filePreviewImageView;
    UIStackView *_informationStackView;
    UIButton *_actionIconButton;
    UIButton *_actionButton;
    _Bool _isSettingStateAnimated;
    UIView *_currentActionButtonView;
    NSString *_previewTitle;
    QLDetailItemViewControllerState *_state;
    NSArray *_information;
}

@property(retain, nonatomic) NSArray *information; // @synthesize information=_information;
@property(retain, nonatomic) QLDetailItemViewControllerState *state; // @synthesize state=_state;
- (void).cxx_destruct;
@property(nonatomic) struct CGRect fileThumbnailFrame;
- (void)_setActionButtonView:(id)arg1 animated:(_Bool)arg2 actionButtonLabel:(id)arg3 informationVisible:(_Bool)arg4;
- (void)performAction;
- (_Bool)canPinchToDismiss;
- (_Bool)canSwipeToDismiss;
- (_Bool)canEnterFullScreen;
- (void)setAppearance:(id)arg1 animated:(_Bool)arg2;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_updateInformation;
- (void)setState:(id)arg1 animated:(_Bool)arg2;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

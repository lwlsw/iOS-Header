//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <SafariServices/UIDragInteractionDelegate_Private-Protocol.h>
#import <SafariServices/UIDropInteractionDelegate_Private-Protocol.h>
#import <SafariServices/UIGestureRecognizerDelegate-Protocol.h>
#import <SafariServices/_SFBarCommon-Protocol.h>
#import <SafariServices/_SFFluidProgressViewDelegate-Protocol.h>
#import <SafariServices/_SFNavigationBarURLButtonDelegate-Protocol.h>
#import <SafariServices/_UIBasicAnimationFactory-Protocol.h>
#import <SafariServices/_UIClickInteractionDelegate-Protocol.h>

@class NSArray, NSAttributedString, NSString, NSTimer, SFDismissButton, SFNavigationBarAccessoryButtonArrangement, SFNavigationBarMetrics, SFNavigationBarToggleButton, SFToolbarContainer, UIBlurEffect, UIButton, UIImageView, UILabel, UITextField, UIVisualEffectView, _SFBarTheme, _SFDimmingButton, _SFFluidProgressView, _SFNavigationBarItem, _SFNavigationBarLabelsContainer, _SFNavigationBarTheme, _SFNavigationBarURLButton, _SFToolbar, _UIClickInteraction;
@protocol _SFNavigationBarDelegate, _SFPopoverSourceInfo;

@interface _SFNavigationBar : UIView <UIGestureRecognizerDelegate, _SFFluidProgressViewDelegate, _SFNavigationBarURLButtonDelegate, _UIBasicAnimationFactory, UIDragInteractionDelegate_Private, UIDropInteractionDelegate_Private, _UIClickInteractionDelegate, _SFBarCommon>
{
    UIButton *_compressedBarButton;
    UIView *_controlsContainer;
    _SFNavigationBarLabelsContainer *_labelsContainer;
    UIView *_labelScalingContainer;
    UILabel *_URLLabel;
    UILabel *_expandedURLLabel;
    UILabel *_privateBrowsingLabel;
    UIVisualEffectView *_URLLabelEffectView;
    UIVisualEffectView *_lockEffectView;
    UIVisualEffectView *_squishedLockEffectView;
    UILabel *_readerAvailabilityLabel;
    UILabel *_notSecureAnnotationLabel;
    double _URLWidth;
    double _URLHeight;
    double _expandedURLWidth;
    double _expandedURLHeight;
    double _offsetOfURLInExpandedURL;
    UIView *_URLContainer;
    UIView *_URLContainerClipView;
    UIImageView *_URLFadeOut;
    UIView *_fakeTextFieldSelectionView;
    double _fakeSelectionStartOffset;
    double _fakeSelectionEndOffset;
    UIButton *_fakeClearButton;
    _Bool _usesLiftedAppearance;
    _SFToolbar *_leadingToolbar;
    _SFToolbar *_trailingToolbar;
    SFToolbarContainer *_leadingToolbarContainer;
    SFToolbarContainer *_trailingToolbarContainer;
    struct CGSize _cachedNotSecureAnnotationLabelFittingSize;
    UIView *_notSecureAnnotationContainer;
    _Bool _shouldAnimateURLMovement;
    SFNavigationBarMetrics *_barMetrics;
    UIImageView *_searchIndicator;
    UIImageView *_lockView;
    UIImageView *_squishedSearchIndicator;
    UIImageView *_squishedLockView;
    UIView *_squishedURLAccessoryItemsContainer;
    NSArray *_URLAccessoryItems;
    _SFNavigationBarURLButton *_URLOutline;
    _SFFluidProgressView *_progressView;
    UIVisualEffectView *_backdrop;
    UIView *_separator;
    _Bool _lockViewNeedsUpdate;
    NSAttributedString *_attributedTextWhenExpanded;
    SFNavigationBarAccessoryButtonArrangement *_accessoryButtonArrangement;
    SFNavigationBarToggleButton *_formatToggleButton;
    _SFDimmingButton *_stopButton;
    _SFDimmingButton *_reloadButton;
    _UIClickInteraction *_formatClickInteraction;
    UIButton *_mediaCaptureMuteButton;
    long long _visibleTrailingButtonType;
    _Bool _formatToggleButtonTapTogglesReader;
    UIButton *_cancelButton;
    double _cancelButtonIntrinsicWidth;
    NSTimer *_readerAvailabilityLabelHideTimer;
    CDUnknownBlockType _readerAvailabilityAnimationBlock;
    SFDismissButton *_dismissButton;
    unsigned long long _inputMode;
    _Bool _usesNarrowLayout;
    _Bool _unifiedFieldShowsProgressView;
    _Bool _controlsHidden;
    _Bool _expanded;
    _Bool _backdropGroupDisabled;
    _Bool _suppressesBlur;
    _SFNavigationBarItem *_item;
    _SFBarTheme *_theme;
    _SFNavigationBarTheme *_effectiveTheme;
    UITextField *_textField;
    NSString *_backdropGroupName;
    id <_SFNavigationBarDelegate> _delegate;
    double _contentUnderStatusBarHeight;
    double _maximumHeight;
    double _minimumBackdropHeight;
    UIView *_inputAccessoryView;
    UIBlurEffect *_backdropEffect;
}

+ (double)separatorHeight;
+ (double)estimatedMinimumHeightForStatusBarHeight:(double)arg1;
+ (double)estimatedDefaultHeightForStatusBarHeight:(double)arg1;
+ (long long)_metricsCategory;
+ (void)initialize;
@property(readonly, nonatomic) UIBlurEffect *backdropEffect; // @synthesize backdropEffect=_backdropEffect;
@property(retain, nonatomic) UIView *inputAccessoryView; // @synthesize inputAccessoryView=_inputAccessoryView;
@property(nonatomic) double minimumBackdropHeight; // @synthesize minimumBackdropHeight=_minimumBackdropHeight;
@property(nonatomic) double maximumHeight; // @synthesize maximumHeight=_maximumHeight;
@property(nonatomic) _Bool suppressesBlur; // @synthesize suppressesBlur=_suppressesBlur;
@property(nonatomic) double contentUnderStatusBarHeight; // @synthesize contentUnderStatusBarHeight=_contentUnderStatusBarHeight;
@property(nonatomic) __weak id <_SFNavigationBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *backdropGroupName; // @synthesize backdropGroupName=_backdropGroupName;
@property(nonatomic, getter=isBackdropGroupDisabled) _Bool backdropGroupDisabled; // @synthesize backdropGroupDisabled=_backdropGroupDisabled;
@property(readonly, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(nonatomic, getter=isExpanded) _Bool expanded; // @synthesize expanded=_expanded;
@property(nonatomic, getter=areControlsHidden) _Bool controlsHidden; // @synthesize controlsHidden=_controlsHidden;
@property(readonly, nonatomic) _SFNavigationBarTheme *effectiveTheme; // @synthesize effectiveTheme=_effectiveTheme;
@property(retain, nonatomic) _SFBarTheme *theme; // @synthesize theme=_theme;
@property(nonatomic) _Bool unifiedFieldShowsProgressView; // @synthesize unifiedFieldShowsProgressView=_unifiedFieldShowsProgressView;
@property(nonatomic) _Bool usesNarrowLayout; // @synthesize usesNarrowLayout=_usesNarrowLayout;
@property(retain, nonatomic) _SFNavigationBarItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (_Bool)containsBarItem:(long long)arg1;
- (id)_toolbarForBarItem:(long long)arg1;
- (id)popoverSourceInfoForBarItem:(long long)arg1;
- (void)animateLinkImage:(struct CGImage *)arg1 fromRect:(struct CGRect)arg2 inView:(id)arg3 toBarItem:(long long)arg4 afterImageDisappearsBlock:(CDUnknownBlockType)arg5 afterDestinationLayerBouncesBlock:(CDUnknownBlockType)arg6;
- (void)animateSafariIconLinkFromPoint:(struct CGPoint)arg1 inView:(id)arg2;
@property(readonly, copy, nonatomic) NSArray *popoverPassthroughViews;
@property(readonly, nonatomic) id <_SFPopoverSourceInfo> URLOutlinePopoverSourceInfo;
@property(readonly, nonatomic) id <_SFPopoverSourceInfo> reloadButtonPopoverSourceInfo;
@property(readonly, nonatomic) id <_SFPopoverSourceInfo> formatMenuButtonPopoverSourceInfo;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (_Bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (long long)_dropInteraction:(id)arg1 dataOwnerForSession:(id)arg2;
- (id)_dragInteraction:(id)arg1 viewToSnapshotItem:(id)arg2;
- (long long)_dragInteraction:(id)arg1 dataOwnerForSession:(id)arg2;
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;
- (void)dragInteraction:(id)arg1 willAnimateLiftWithAnimator:(id)arg2 session:(id)arg3;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (void)setTextFieldPlaceHolderColor:(id)arg1;
- (double)placeholderHorizontalInset;
- (id)newTextField;
- (_Bool)canBecomeFirstResponder;
- (id)_timingFunctionForAnimation;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (_Bool)navigationBarURLButton:(id)arg1 shouldAllowLongPressAtPoint:(struct CGPoint)arg2;
- (_Bool)navigationBarURLButtonShouldPaste:(id)arg1;
- (_Bool)navigationBarURLButtonShouldCopy:(id)arg1;
- (void)navigationBarURLButtonDidReceivePasteCommand:(id)arg1;
- (void)navigationBarURLButtonDidReceiveCopyCommand:(id)arg1;
- (_Bool)navigationBarURLButton:(id)arg1 shouldShowMenuForGestureWithRecognizer:(id)arg2;
- (id)textForNavigationBarURLButton:(id)arg1;
- (void)_updatePlaceholderText;
- (id)_placeholderText;
- (void)_configureNavigationBarTrailingButtonTintedImages;
- (void)_updateControlTints;
- (id)_tintForWarningImage;
- (id)_lockImageTintColorForSquishTransformFactor:(double)arg1;
- (double)_backgroundAlphaFactorForSquishTransformFactor:(double)arg1;
- (id)_EVCertLockAndTextColor:(double)arg1;
- (id)_notSecureWarningColor;
- (id)_notSecureGrayColor;
- (id)_notSecureAnnotationColor;
- (void)_updateSeparatorAlpha;
- (void)_updateBackdropGroupName;
- (void)_updateNotSecureWarningsVisibility;
- (void)_updateShowsSearchIndicator;
- (id)_searchIndicatorColorForSquishTransformFactor:(double)arg1;
- (void)_updateSearchIndicator;
- (void)_updateTextMetrics;
- (void)_updateTextColor;
- (void)_adjustLabelRectForLeadingButtonWithDelay:(double)arg1;
- (void)_updateMediaCaptureMuteButton;
- (id)_mediaCaptureMuteButtonColor;
- (void)_updateReaderButtonSelected;
- (void)_updateReaderButtonAndAvailabilityTextVisibility;
- (void)_updateReaderButtonVisibilityAnimated:(_Bool)arg1 showAvailabilityText:(_Bool)arg2 adjustURLLabels:(_Bool)arg3;
- (void)_hideReaderAvailabilityLabelAnimated:(_Bool)arg1;
- (void)_hideReaderAvailabilityLabelNow;
- (void)_hideReaderAvailabilityLabelSoon;
- (void)_cancelDelayedReaderAvailabilityAnimation;
- (void)_updateLockIconHasEVCertificateTint;
- (void)_updateShowsLockIcon;
- (void)_updateLockViewIfNeeded;
- (void)_updateActiveURLLabelAccessory;
@property(readonly, nonatomic) struct CGRect URLOutlineFrameInNavigationBarSpace;
- (void)setExpanded:(_Bool)arg1 textFieldSelectionRange:(struct _NSRange)arg2;
- (void)_updateToolbarAndCancelButtonAlpha;
- (void)_updateFakeViews;
- (id)_attributedStringNotSecureAnnotation;
- (void)_updateText;
- (id)_expandedURLLabelParagraphStyle;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)_hitTestCandidateViews;
- (void)clearEphemeralUI;
- (id)_viewForAccessoryButtonType:(long long)arg1;
- (double)_widthForAccessoryButtonType:(long long)arg1;
- (void)layoutSubviews;
- (double)_textFieldTopMargin;
- (void)_updateTextFieldFrame;
- (double)_minimumXForLabelOfWidth:(double)arg1 centeredInOutlineOfWidth:(double)arg2 leftAlignedToMinimumX:(double)arg3 maximumX:(double)arg4;
- (void)_updateBackdropFrame;
- (id)_viewToInsertProgressBarIn;
- (void)fluidProgressViewDidShowProgress:(id)arg1;
- (void)fluidProgressViewWillShowProgress:(id)arg1;
- (void)tintColorDidChange;
- (void)_updateProgressView;
- (id)_navigationBarTrailingButtonWithType:(long long)arg1;
- (void)_updateNavigationBarTrailingButtonType;
- (void)_updateAccessoryButtonsAlpha;
- (void)_updateAccessoryButtonsVisibility;
- (void)_updateAccessoryButtonsArrangement;
- (void)_setUpFormatToggleButtonIfNeeded;
- (void)_transitionFromView:(id)arg1 toView:(id)arg2 animated:(_Bool)arg3;
@property(readonly, nonatomic, getter=_controlsAlpha) double controlsAlpha;
- (double)_squishTransformFactor;
- (void)_dismissButtonTapped:(id)arg1;
- (void)_cancelButtonTapped:(id)arg1;
- (void)_mediaCaptureMuteButtonTapped:(id)arg1;
- (void)_formatToggleButtonTapped:(id)arg1;
- (void)_URLTapped:(id)arg1;
- (void)_compressedBarTapped;
- (void)_stopButtonPressed;
- (void)clickInteractionDidClickDown:(id)arg1;
- (void)clickInteractionDidClickUp:(id)arg1;
- (_Bool)clickInteractionShouldBegin:(id)arg1;
- (void)_reloadButtonPressed;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 inputMode:(unsigned long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_barMetricsDidChange;
- (void)_updateURLOutlineCornerRadius;
- (void)_updateProgressViewCornerRadius;
- (id)_URLLabelFont;
- (void)_updateFonts;
@property(nonatomic) _Bool hasToolbar;
- (double)_editingScaleFactor;
- (id)_editingLabelFont;
- (id)_fadeOutImageWithSize:(struct CGSize)arg1 opaquePoint:(struct CGPoint)arg2 transparentPoint:(struct CGPoint)arg3 leftCapWidth:(double)arg4 topCapWidth:(double)arg5;
- (id)_dimmingButtonWithAction:(SEL)arg1;
- (id)_newNavigationButtonWithImage:(id)arg1 insets:(struct UIEdgeInsets)arg2 action:(SEL)arg3;
- (double)_customButtonHorizontalPadding;
@property(readonly, nonatomic) double visualHeight;
@property(readonly, nonatomic) double minimumHeight;
@property(readonly, nonatomic) double defaultHeight;
- (void)_didUpdateEffectiveTheme;
- (void)_updateEffectiveTheme;
- (_Bool)_shouldUpdateBackdropStyleForTransitionFromItem:(id)arg1 toItem:(id)arg2;
@property(readonly, nonatomic) double dismissButtonPadding;
@property(readonly, nonatomic) struct CGSize dismissButtonSize;
- (void)setDismissButtonHidden:(_Bool)arg1;
- (void)setDismissButtonStyle:(long long)arg1 animated:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

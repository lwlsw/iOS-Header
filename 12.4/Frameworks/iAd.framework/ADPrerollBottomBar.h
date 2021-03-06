//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class ADPrerollButton, ADVolumeSlider, NSTimer, UIImage, UILabel;
@protocol ADPrerollBottomBarDelegate;

@interface ADPrerollBottomBar : UIView
{
    id <ADPrerollBottomBarDelegate> _delegate;
    _Bool _layoutForExpandedSize;
    _Bool _isFullscreen;
    _Bool _skipButtonCountingDown;
    ADPrerollButton *_actionButton;
    UILabel *_skipLabel;
    UILabel *_shortSkipLabel;
    ADPrerollButton *_skipButton;
    double _skipDuration;
    double _lastViewingStartTime;
    double _accumulatedViewingTime;
    NSTimer *_skipAccumulationTimer;
    UIImage *_playImage;
    UIImage *_pauseImage;
    ADPrerollButton *_playPauseButton;
    ADVolumeSlider *_volumeSlider;
}

@property(retain, nonatomic) ADVolumeSlider *volumeSlider; // @synthesize volumeSlider=_volumeSlider;
@property(retain, nonatomic) ADPrerollButton *playPauseButton; // @synthesize playPauseButton=_playPauseButton;
@property(retain, nonatomic) UIImage *pauseImage; // @synthesize pauseImage=_pauseImage;
@property(retain, nonatomic) UIImage *playImage; // @synthesize playImage=_playImage;
@property(retain, nonatomic) NSTimer *skipAccumulationTimer; // @synthesize skipAccumulationTimer=_skipAccumulationTimer;
@property(nonatomic) double accumulatedViewingTime; // @synthesize accumulatedViewingTime=_accumulatedViewingTime;
@property(nonatomic) double lastViewingStartTime; // @synthesize lastViewingStartTime=_lastViewingStartTime;
@property(nonatomic) double skipDuration; // @synthesize skipDuration=_skipDuration;
@property(nonatomic) _Bool skipButtonCountingDown; // @synthesize skipButtonCountingDown=_skipButtonCountingDown;
@property(retain, nonatomic) ADPrerollButton *skipButton; // @synthesize skipButton=_skipButton;
@property(retain, nonatomic) UILabel *shortSkipLabel; // @synthesize shortSkipLabel=_shortSkipLabel;
@property(retain, nonatomic) UILabel *skipLabel; // @synthesize skipLabel=_skipLabel;
@property(retain, nonatomic) ADPrerollButton *actionButton; // @synthesize actionButton=_actionButton;
@property(nonatomic) _Bool isFullscreen; // @synthesize isFullscreen=_isFullscreen;
@property(nonatomic) _Bool layoutForExpandedSize; // @synthesize layoutForExpandedSize=_layoutForExpandedSize;
- (void)_playButtonTapped:(id)arg1;
- (void)_pauseButtonTapped:(id)arg1;
- (void)_skipButtonTapped:(id)arg1;
- (void)_actionButtonTapped:(id)arg1;
- (void)_updateSkipLabel;
- (void)_accumulateViewingTime;
- (void)_pauseCountdown;
- (void)_resumeCountdown;
- (void)beginCountdownWithDuration:(double)arg1;
- (void)displayAsPaused:(_Bool)arg1;
- (void)layoutSubviews;
- (void)showActionButton:(_Bool)arg1;
@property(nonatomic) __weak id <ADPrerollBottomBarDelegate> delegate;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end


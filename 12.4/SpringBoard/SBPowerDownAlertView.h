//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBAlertView.h"

@class _SBInternalPowerDownView;
@protocol SBPowerDownAlertViewDelegate;

@interface SBPowerDownAlertView : SBAlertView
{
    _SBInternalPowerDownView *_internalView;
}

- (void).cxx_destruct;
- (void)dismiss;
- (void)layoutForInterfaceOrientation:(long long)arg1;
- (void)hideAnimated:(_Bool)arg1;
- (void)showAnimated:(_Bool)arg1;
@property(nonatomic) __weak id <SBPowerDownAlertViewDelegate> delegate;
- (id)initWithFrame:(struct CGRect)arg1;

@end

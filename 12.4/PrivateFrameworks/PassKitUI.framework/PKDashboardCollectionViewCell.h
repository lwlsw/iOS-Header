//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIView;

@interface PKDashboardCollectionViewCell : UICollectionViewCell
{
    UIView *_separatorView;
    _Bool _showsBottomSeparator;
    unsigned long long _maskType;
    struct CGRect _previousMaskBounds;
    unsigned long long _previousMaskType;
    _Bool _customHorizontalInset;
    double _horizontalInset;
    _Bool _wantsCustomAppearance;
    _Bool _wantsDefaultHighlightBehavior;
}

+ (double)defaultHorizontalInset;
@property(nonatomic) _Bool showsBottomSeparator; // @synthesize showsBottomSeparator=_showsBottomSeparator;
@property(nonatomic) _Bool wantsDefaultHighlightBehavior; // @synthesize wantsDefaultHighlightBehavior=_wantsDefaultHighlightBehavior;
@property(nonatomic) _Bool wantsCustomAppearance; // @synthesize wantsCustomAppearance=_wantsCustomAppearance;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1;
- (void)setBottomSeparatorVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateMask;
@property(nonatomic) unsigned long long maskType;
@property(nonatomic) double horizontalInset;
- (void)prepareForReuse;
- (void)layoutSubviews;

@end

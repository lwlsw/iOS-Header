//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSTableCell.h>

@class NSArray, NSLayoutConstraint, NSMutableArray, NSString, PSCapacityBarLegendView, PSCapacityBarView, UIColor, UIFont, UILabel, UIStackView;

@interface PSCapacityBarCell : PSTableCell
{
    double _tableWidth;
    NSMutableArray *_normalConstraints;
    NSMutableArray *_largeConstraints;
    NSMutableArray *_legendConstraints;
    NSMutableArray *_commonConstraints;
    NSLayoutConstraint *_barHeightConstraint;
    UILabel *_titleLabel;
    UILabel *_sizeLabel;
    UILabel *_loadingLabel;
    PSCapacityBarView *_barView;
    UIStackView *_legendView;
    NSArray *_legends;
    PSCapacityBarLegendView *_otherLegend;
    UIFont *_legendFont;
    UIFont *_bigFont;
    UIColor *_legendTextColor;
    _Bool _hideLegend;
    _Bool _showOtherLegend;
    _Bool _forceLoading;
    _Bool _sizesAreMem;
    NSString *_sizeFormat;
}

+ (id)specifierWithTitle:(id)arg1 useStandardFontSizeForSizeLabel:(_Bool)arg2;
+ (id)specifierWithTitle:(id)arg1;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (id)usageString:(id)arg1;
- (void)createLegends:(id)arg1;
- (void)updateConstraints;
- (void)addHorizontalLegends;
- (void)addVerticalLegends;
- (void)createCommonConstraints;
- (void)createLargeConstraints;
- (void)createNormalConstraints;
- (void)initializeViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

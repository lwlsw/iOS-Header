//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UILabel.h>

@class UIColor;
@protocol FRSectionViewCellVendor;

@interface FRSectionViewCell : UILabel
{
    unsigned long long _state;
    UIColor *_unselectedTextColor;
    UIColor *_pressedTextColor;
    UIColor *_selectedTextColor;
    id <FRSectionViewCellVendor> _vendor;
}

@property(nonatomic) __weak id <FRSectionViewCellVendor> vendor; // @synthesize vendor=_vendor;
@property(retain, nonatomic) UIColor *selectedTextColor; // @synthesize selectedTextColor=_selectedTextColor;
@property(retain, nonatomic) UIColor *pressedTextColor; // @synthesize pressedTextColor=_pressedTextColor;
@property(retain, nonatomic) UIColor *unselectedTextColor; // @synthesize unselectedTextColor=_unselectedTextColor;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (struct CGRect)accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (void)updateTextColor;
- (id)initWithFrame:(struct CGRect)arg1;

@end

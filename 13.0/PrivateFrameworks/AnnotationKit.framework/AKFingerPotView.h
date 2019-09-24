//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIImage, UIImageView;

@interface AKFingerPotView : UIButton
{
    UIImageView *_selectedOutline;
    UIImageView *_highlight;
}

@property(retain, nonatomic) UIImageView *highlight; // @synthesize highlight=_highlight;
@property(retain, nonatomic) UIImageView *selectedOutline; // @synthesize selectedOutline=_selectedOutline;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
@property(retain, nonatomic) UIImage *menuImage;
- (id)initWithFrame:(struct CGRect)arg1;

@end

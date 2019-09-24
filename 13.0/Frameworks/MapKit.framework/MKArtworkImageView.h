//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class UIColor;
@protocol MKArtworkImageSource;

@interface MKArtworkImageView : UIImageView
{
    UIImageView *_cachedBadgeView;
    id <MKArtworkImageSource> _imageSource;
    UIColor *_primaryTintColor;
    UIColor *_secondaryTintColor;
}

@property(retain, nonatomic) UIColor *secondaryTintColor; // @synthesize secondaryTintColor=_secondaryTintColor;
@property(retain, nonatomic) UIColor *primaryTintColor; // @synthesize primaryTintColor=_primaryTintColor;
@property(retain, nonatomic) id <MKArtworkImageSource> imageSource; // @synthesize imageSource=_imageSource;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
@property(readonly, nonatomic) UIImageView *badgeView;
- (void)_updateImageView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

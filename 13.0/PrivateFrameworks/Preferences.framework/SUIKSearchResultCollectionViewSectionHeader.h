//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class UIImageView;

@interface SUIKSearchResultCollectionViewSectionHeader : UICollectionReusableView
{
    UIImageView *_categoryImageView;
}

+ (id)reuseIdentifier;
@property(retain, nonatomic) UIImageView *categoryImageView; // @synthesize categoryImageView=_categoryImageView;
- (void).cxx_destruct;
- (void)setCategoryImage:(id)arg1;
- (void)prepareForReuse;
- (void)_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

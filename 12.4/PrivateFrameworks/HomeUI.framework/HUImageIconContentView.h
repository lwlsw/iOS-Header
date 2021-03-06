//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUIconContentView.h>

@class UIImageView;

@interface HUImageIconContentView : HUIconContentView
{
    UIImageView *_imageView;
    long long _originalImageRenderingMode;
}

@property(nonatomic) long long originalImageRenderingMode; // @synthesize originalImageRenderingMode=_originalImageRenderingMode;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (long long)renderingModeForSubview:(id)arg1 suggestedRenderingMode:(long long)arg2;
- (void)_updateIconImage;
- (id)imageForImageIconDescriptor:(id)arg1;
- (void)setIconSize:(unsigned long long)arg1;
- (void)updateWithIconDescriptor:(id)arg1 displayStyle:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


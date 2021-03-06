//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class CAShapeLayer;

@interface WFCameraShutterButton : UIControl
{
    CAShapeLayer *_outlineLayer;
    CAShapeLayer *_buttonLayer;
}

@property(nonatomic) __weak CAShapeLayer *buttonLayer; // @synthesize buttonLayer=_buttonLayer;
@property(nonatomic) __weak CAShapeLayer *outlineLayer; // @synthesize outlineLayer=_outlineLayer;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (void)setHighlighted:(_Bool)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class UIColor;

@interface ICTintedLayer : CALayer
{
    struct UIColor *_tintColor;
    id _originalContents;
}

@property(retain, nonatomic) id originalContents; // @synthesize originalContents=_originalContents;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
- (void).cxx_destruct;
- (void)updateContents;
- (void)setContents:(id)arg1;

@end

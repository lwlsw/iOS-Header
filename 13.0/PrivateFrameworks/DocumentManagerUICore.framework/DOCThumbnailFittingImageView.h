//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DocumentManagerUICore/DOCBorderedFittingImageView.h>

@class FPItem, NSURL;

@interface DOCThumbnailFittingImageView : DOCBorderedFittingImageView
{
    FPItem *_item;
    NSURL *_url;
    long long _generatorGeneration;
}

@property(nonatomic) long long generatorGeneration; // @synthesize generatorGeneration=_generatorGeneration;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) FPItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateThumbnailForURL:(id)arg1;
- (void)updateThumbnailForItem:(id)arg1;
- (void)updateThumbnail;
- (id)initWithCoder:(id)arg1;
- (void)_commonInitWithSize:(struct CGSize)arg1;
- (id)initWithSize:(struct CGSize)arg1 url:(id)arg2;
- (id)initWithSize:(struct CGSize)arg1 item:(id)arg2;

@end

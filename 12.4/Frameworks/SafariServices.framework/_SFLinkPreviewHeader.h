//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <SafariServices/_SFFluidProgressViewDelegate-Protocol.h>

@class NSString, UILabel, _SFFluidProgressView;

@interface _SFLinkPreviewHeader : UIView <_SFFluidProgressViewDelegate>
{
    UILabel *_domainLabel;
    UIView *_hairline;
    _Bool _isMinimumPreviewUI;
    NSString *_domain;
    _SFFluidProgressView *_progressView;
}

@property(retain, nonatomic) _SFFluidProgressView *progressView; // @synthesize progressView=_progressView;
@property(copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (void).cxx_destruct;
- (void)fluidProgressViewDidShowProgress:(id)arg1;
- (void)fluidProgressViewWillShowProgress:(id)arg1;
- (void)layoutSubviews;
- (void)_initializeLayoutContraints;
- (double)defaultHeight;
- (id)initWithMinimumPreviewUI:(_Bool)arg1;

@end

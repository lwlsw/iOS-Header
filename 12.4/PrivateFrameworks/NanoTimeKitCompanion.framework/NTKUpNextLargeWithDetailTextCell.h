//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKUpNextBaseCell.h>

@class NTKColoringLabel, NTKUpNextImageView, UILayoutGuide;

@interface NTKUpNextLargeWithDetailTextCell : NTKUpNextBaseCell
{
    UILayoutGuide *_contentLayoutGuide;
    NTKUpNextImageView *_bodyImage;
    NTKColoringLabel *_headerLabel;
    NTKColoringLabel *_bodyLabel;
    NTKColoringLabel *_detail1Label;
    NTKColoringLabel *_detail2Label;
}

- (void).cxx_destruct;
- (void)setPaused:(_Bool)arg1;
- (void)configureWithContent:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

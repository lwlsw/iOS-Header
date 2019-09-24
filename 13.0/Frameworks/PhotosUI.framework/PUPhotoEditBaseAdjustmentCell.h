//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, PUPhotoEditAdjustmentControl;

__attribute__((visibility("hidden")))
@interface PUPhotoEditBaseAdjustmentCell : UICollectionViewCell
{
    NSString *_imageName;
    _Bool _enabled;
    _Bool _isUserModifying;
    PUPhotoEditAdjustmentControl *_containerButton;
}

@property(retain, nonatomic) PUPhotoEditAdjustmentControl *containerButton; // @synthesize containerButton=_containerButton;
@property(nonatomic) _Bool isUserModifying; // @synthesize isUserModifying=_isUserModifying;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
- (void).cxx_destruct;
- (void)resetToDefault;
- (void)setSelected:(_Bool)arg1;
@property(nonatomic) double maxValue;
@property(nonatomic) double minValue;
@property(nonatomic) double identityValue;
@property(nonatomic) double defaultValue;
@property(nonatomic) double value;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)_setupContainerButton;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

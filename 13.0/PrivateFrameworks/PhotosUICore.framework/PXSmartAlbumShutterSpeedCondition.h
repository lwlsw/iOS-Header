//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSmartAlbumEXIFCondition.h>

@class NSArray, PXLabeledValue;

@interface PXSmartAlbumShutterSpeedCondition : PXSmartAlbumEXIFCondition
{
    NSArray *_shutterSpeedValues;
}

+ (id)formatter;
+ (id)defaultSingleQueryForEditingContext:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) PXLabeledValue *secondShutterSpeedValue;
@property(retain, nonatomic) PXLabeledValue *shutterSpeedValue;
@property(readonly, nonatomic) NSArray *shutterSpeedValues;

@end

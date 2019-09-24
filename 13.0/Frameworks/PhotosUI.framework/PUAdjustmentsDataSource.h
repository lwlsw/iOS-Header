//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/PUAdjustmentsViewDataSource-Protocol.h>

@class NSMutableArray, NSString, PICompositionController, PUAutoAdjustmentController, PUPhotoEditValuesCalculator;
@protocol PUAdjustmentsDataSourceDelegate;

__attribute__((visibility("hidden")))
@interface PUAdjustmentsDataSource : NSObject <PUAdjustmentsViewDataSource>
{
    NSMutableArray *_adjustmentInfoSections;
    id <PUAdjustmentsDataSourceDelegate> _delegate;
    PICompositionController *_compositionController;
    PUAutoAdjustmentController *_autoEnhanceController;
    PUPhotoEditValuesCalculator *_valuesCalculator;
    unsigned long long _assetType;
}

@property(nonatomic) unsigned long long assetType; // @synthesize assetType=_assetType;
@property(retain, nonatomic) PUPhotoEditValuesCalculator *valuesCalculator; // @synthesize valuesCalculator=_valuesCalculator;
@property(retain, nonatomic) PUAutoAdjustmentController *autoEnhanceController; // @synthesize autoEnhanceController=_autoEnhanceController;
@property(retain, nonatomic) PICompositionController *compositionController; // @synthesize compositionController=_compositionController;
@property(nonatomic) __weak id <PUAdjustmentsDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *adjustmentInfoSections; // @synthesize adjustmentInfoSections=_adjustmentInfoSections;
- (void).cxx_destruct;
- (void)compositionControllerDidChange;
- (void)_resetEnabledStateForAutoEnhancedInfos;
- (void)resetInfoAtIndexPath:(id)arg1;
- (void)modifyValue:(double)arg1 atIndexPath:(id)arg2;
- (void)_modifyAdjustmentForInfo:(id)arg1;
- (void)setAdjustmentEnabled:(_Bool)arg1 atIndexPath:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)canModifyAdjustmentAtIndexPath:(id)arg1;
- (id)infoForItemAtIndexPath:(id)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (void)_updateAdjustmentInfos;
- (void)_enableNonAutoAjustments:(_Bool)arg1;
- (id)_vignetteAdjustmentInfos;
- (id)_detailAdjustmentInfos;
- (id)_colorAdjustmentInfos;
- (id)_lightAdjustmentInfos;
- (id)_autoEnhanceAdjustmentInfo;
- (void)_createAdjustmentInfos;
- (id)_newAdjustmentInfoWithAdjustmentKey:(id)arg1 settingKey:(id)arg2 attributeKey:(id)arg3;
- (id)_newAdjustmentInfoWithIdentifier:(id)arg1 adjustmentKey:(id)arg2 settingKey:(id)arg3 attributeKey:(id)arg4;
- (void)_setDefaultsForInfo:(id)arg1;
- (id)renderer;
- (void)setupWithCompositionController:(id)arg1 valuesCalculator:(id)arg2 autoAdjustmentController:(id)arg3 assetType:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

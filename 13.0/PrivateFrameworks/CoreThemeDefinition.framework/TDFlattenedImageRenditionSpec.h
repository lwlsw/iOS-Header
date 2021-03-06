//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreThemeDefinition/TDSimpleArtworkRenditionSpec.h>

@class NSOrderedSet, TDRadiosityImageRenditionSpec;

@interface TDFlattenedImageRenditionSpec : TDSimpleArtworkRenditionSpec
{
}

- (_Bool)updatePackingPropertiesWithDocument:(id)arg1;
- (void)addLayerReferencesObject:(id)arg1;
- (id)createCSIRepresentationWithCompression:(_Bool)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;
- (void)drawFlattenedImageIntoContext:(struct CGContext *)arg1 document:(id)arg2;

// Remaining properties
@property(retain, nonatomic) NSOrderedSet *layerReferences; // @dynamic layerReferences;
@property(retain, nonatomic) TDRadiosityImageRenditionSpec *radiosityImage; // @dynamic radiosityImage;

@end


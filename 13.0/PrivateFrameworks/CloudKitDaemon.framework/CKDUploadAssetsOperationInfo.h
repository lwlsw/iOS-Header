//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKDatabaseOperationInfo.h>

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface CKDUploadAssetsOperationInfo : CKDatabaseOperationInfo
{
    _Bool _temporary;
    NSArray *_assetsToUpload;
    NSDictionary *_assetUUIDToExpectedProperties;
    NSDictionary *_packageUUIDToExpectedProperties;
}

@property(nonatomic) _Bool temporary; // @synthesize temporary=_temporary;
@property(retain, nonatomic) NSDictionary *packageUUIDToExpectedProperties; // @synthesize packageUUIDToExpectedProperties=_packageUUIDToExpectedProperties;
@property(retain, nonatomic) NSDictionary *assetUUIDToExpectedProperties; // @synthesize assetUUIDToExpectedProperties=_assetUUIDToExpectedProperties;
@property(retain, nonatomic) NSArray *assetsToUpload; // @synthesize assetsToUpload=_assetsToUpload;
- (void).cxx_destruct;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString;
@protocol NSCoding;

@protocol SSScreenshotAssetManagerPersistable
@property(readonly, nonatomic) unsigned long long saveLocation;
@property(readonly, nonatomic) id <NSCoding> modificationInfo;
@property(readonly, copy, nonatomic) NSString *identifier;
- (void)requestImageWithBlock:(void (^)(UIImage *))arg1;
@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoImaging/PIExportMetadataBuilder.h>

@class NSArray;

@interface PIExportVideoMetadataBuilder : PIExportMetadataBuilder
{
}

@property(readonly, copy, nonatomic) NSArray *metadataItems;
- (id)keywordsItem;
- (id)videoDateFormatter;
- (id)creationDateItem;
- (id)locationItem;
- (id)captionItem;
- (id)titleItem;
- (id)commonItemForKey:(id)arg1 string:(id)arg2;

@end

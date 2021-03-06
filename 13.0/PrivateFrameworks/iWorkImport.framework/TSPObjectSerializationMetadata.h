//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

@class NSArray, TSPDataMetadataMap;

__attribute__((visibility("hidden")))
@interface TSPObjectSerializationMetadata : TSPObject
{
    struct ObjectSerializationMetadata _message;
    TSPDataMetadataMap *_identifierToDataMetadataMap;
    NSArray *_dataReferences;
}

@property(copy, nonatomic) NSArray *dataReferences; // @synthesize dataReferences=_dataReferences;
- (id).cxx_construct;
- (void).cxx_destruct;
- (long long)tsp_identifier;
- (struct ObjectSerializationMetadata *)message;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)dataMetadataForDataIdentifier:(long long)arg1;
- (void)setDataMetadata:(id)arg1 forDataIdentifier:(long long)arg2;
- (id)initWithContext:(id)arg1;

@end


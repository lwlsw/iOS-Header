//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDOfflinePolygonQuadNodesParameters : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_158f0f88 _readerMark;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_existingDatas;
    NSMutableArray *_layers;
    NSMutableArray *_regions;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_existingDatas:1;
        unsigned int read_layers:1;
        unsigned int read_regions:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_existingDatas:1;
        unsigned int wrote_layers:1;
        unsigned int wrote_regions:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)existingDataType;
+ (Class)regionType;
+ (Class)layerType;
- (void).cxx_destruct;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)existingDataAtIndex:(unsigned long long)arg1;
- (unsigned long long)existingDatasCount;
- (void)_addNoFlagsExistingData:(id)arg1;
- (void)addExistingData:(id)arg1;
- (void)clearExistingDatas;
@property(retain, nonatomic) NSMutableArray *existingDatas;
- (void)_readExistingDatas;
- (id)regionAtIndex:(unsigned long long)arg1;
- (unsigned long long)regionsCount;
- (void)_addNoFlagsRegion:(id)arg1;
- (void)addRegion:(id)arg1;
- (void)clearRegions;
@property(retain, nonatomic) NSMutableArray *regions;
- (void)_readRegions;
- (id)layerAtIndex:(unsigned long long)arg1;
- (unsigned long long)layersCount;
- (void)_addNoFlagsLayer:(id)arg1;
- (void)addLayer:(id)arg1;
- (void)clearLayers;
@property(retain, nonatomic) NSMutableArray *layers;
- (void)_readLayers;

@end

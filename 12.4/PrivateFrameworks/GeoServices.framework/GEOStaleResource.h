//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOResource, PBUnknownFields;

@interface GEOStaleResource : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    double _originalTimestamp;
    GEOResource *_desiredResource;
    GEOResource *_fallbackResource;
    struct {
        unsigned int originalTimestamp:1;
    } _has;
}

@property(nonatomic) double originalTimestamp; // @synthesize originalTimestamp=_originalTimestamp;
@property(retain, nonatomic) GEOResource *fallbackResource; // @synthesize fallbackResource=_fallbackResource;
@property(retain, nonatomic) GEOResource *desiredResource; // @synthesize desiredResource=_desiredResource;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasOriginalTimestamp;
@property(readonly, nonatomic) _Bool hasFallbackResource;
@property(readonly, nonatomic) _Bool hasDesiredResource;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

@interface GEOStyleAttribute : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned int _key;
    unsigned int _value;
    struct {
        unsigned int key:1;
        unsigned int value:1;
    } _has;
}

@property(nonatomic) unsigned int value; // @synthesize value=_value;
@property(nonatomic) unsigned int key; // @synthesize key=_key;
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
@property(nonatomic) _Bool hasValue;
@property(nonatomic) _Bool hasKey;

@end


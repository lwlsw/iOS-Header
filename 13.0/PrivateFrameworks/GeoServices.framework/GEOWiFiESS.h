//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBDataReader;

@interface GEOWiFiESS : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_158f0f88 _readerMark;
    CDStruct_95bda58d _attributes;
    CDStruct_95bda58d _authTraits;
    NSMutableArray *_bss;
    NSString *_identifier;
    NSString *_name;
    NSMutableArray *_qualities;
    long long _uniqueIdentifier;
    struct {
        unsigned int has_uniqueIdentifier:1;
        unsigned int read_attributes:1;
        unsigned int read_authTraits:1;
        unsigned int read_bss:1;
        unsigned int read_identifier:1;
        unsigned int read_name:1;
        unsigned int read_qualities:1;
        unsigned int wrote_attributes:1;
        unsigned int wrote_authTraits:1;
        unsigned int wrote_bss:1;
        unsigned int wrote_identifier:1;
        unsigned int wrote_name:1;
        unsigned int wrote_qualities:1;
        unsigned int wrote_uniqueIdentifier:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)qualitiesType;
+ (Class)bssType;
- (void).cxx_destruct;
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
@property(nonatomic) _Bool hasUniqueIdentifier;
@property(nonatomic) long long uniqueIdentifier;
- (int)StringAsAttributes:(id)arg1;
- (id)attributesAsString:(int)arg1;
- (void)setAttributes:(int *)arg1 count:(unsigned long long)arg2;
- (int)attributesAtIndex:(unsigned long long)arg1;
- (void)_addNoFlagsAttributes:(int)arg1;
- (void)addAttributes:(int)arg1;
- (void)clearAttributes;
@property(readonly, nonatomic) int *attributes;
@property(readonly, nonatomic) unsigned long long attributesCount;
- (void)_readAttributes;
- (id)qualitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)qualitiesCount;
- (void)_addNoFlagsQualities:(id)arg1;
- (void)addQualities:(id)arg1;
- (void)clearQualities;
@property(retain, nonatomic) NSMutableArray *qualities;
- (void)_readQualities;
- (int)StringAsAuthTraits:(id)arg1;
- (id)authTraitsAsString:(int)arg1;
- (void)setAuthTraits:(int *)arg1 count:(unsigned long long)arg2;
- (int)authTraitsAtIndex:(unsigned long long)arg1;
- (void)_addNoFlagsAuthTraits:(int)arg1;
- (void)addAuthTraits:(int)arg1;
- (void)clearAuthTraits;
@property(readonly, nonatomic) int *authTraits;
@property(readonly, nonatomic) unsigned long long authTraitsCount;
- (void)_readAuthTraits;
@property(retain, nonatomic) NSString *name;
@property(readonly, nonatomic) _Bool hasName;
- (void)_readName;
- (id)bssAtIndex:(unsigned long long)arg1;
- (unsigned long long)bssCount;
- (void)_addNoFlagsBss:(id)arg1;
- (void)addBss:(id)arg1;
- (void)clearBss;
@property(retain, nonatomic) NSMutableArray *bss;
- (void)_readBss;
@property(retain, nonatomic) NSString *identifier;
@property(readonly, nonatomic) _Bool hasIdentifier;
- (void)_readIdentifier;
- (void)dealloc;

@end

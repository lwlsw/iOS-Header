//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOTargetLayout : PBCodable <NSCopying>
{
    int _layoutInfo;
    int _layoutStyle;
    int _uiTarget;
    struct {
        unsigned int has_layoutInfo:1;
        unsigned int has_layoutStyle:1;
        unsigned int has_uiTarget:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
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
- (int)StringAsLayoutStyle:(id)arg1;
- (id)layoutStyleAsString:(int)arg1;
@property(nonatomic) _Bool hasLayoutStyle;
@property(nonatomic) int layoutStyle;
- (int)StringAsLayoutInfo:(id)arg1;
- (id)layoutInfoAsString:(int)arg1;
@property(nonatomic) _Bool hasLayoutInfo;
@property(nonatomic) int layoutInfo;
- (int)StringAsUiTarget:(id)arg1;
- (id)uiTargetAsString:(int)arg1;
@property(nonatomic) _Bool hasUiTarget;
@property(nonatomic) int uiTarget;

@end

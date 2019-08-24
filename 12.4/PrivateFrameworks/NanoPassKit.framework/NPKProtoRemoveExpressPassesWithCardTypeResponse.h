//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NPKProtoRemoveExpressPassesWithCardTypeResponse : PBCodable <NSCopying>
{
    NSMutableArray *_actualExpressPassInformations;
    _Bool _pending;
    _Bool _success;
    CDStruct_5ee4970e _has;
}

+ (Class)actualExpressPassInformationType;
@property(retain, nonatomic) NSMutableArray *actualExpressPassInformations; // @synthesize actualExpressPassInformations=_actualExpressPassInformations;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(nonatomic) _Bool pending; // @synthesize pending=_pending;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)actualExpressPassInformationAtIndex:(unsigned long long)arg1;
- (unsigned long long)actualExpressPassInformationsCount;
- (void)addActualExpressPassInformation:(id)arg1;
- (void)clearActualExpressPassInformations;
@property(nonatomic) _Bool hasSuccess;
@property(nonatomic) _Bool hasPending;

@end

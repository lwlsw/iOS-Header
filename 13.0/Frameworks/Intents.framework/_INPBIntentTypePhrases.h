//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBIntentTypePhrases-Protocol.h>

@class NSArray, NSString, _INPBIntentType;

@interface _INPBIntentTypePhrases : PBCodable <_INPBIntentTypePhrases, NSSecureCoding, NSCopying>
{
    struct _has;
    _Bool __encodeLegacyGloryData;
    _INPBIntentType *_intentType;
    NSArray *_intentVocabularyExamples;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(copy, nonatomic) NSArray *intentVocabularyExamples; // @synthesize intentVocabularyExamples=_intentVocabularyExamples;
@property(retain, nonatomic) _INPBIntentType *intentType; // @synthesize intentType=_intentType;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)intentVocabularyExamplesAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long intentVocabularyExamplesCount;
- (void)addIntentVocabularyExamples:(id)arg1;
- (void)clearIntentVocabularyExamples;
@property(readonly, nonatomic) _Bool hasIntentType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end


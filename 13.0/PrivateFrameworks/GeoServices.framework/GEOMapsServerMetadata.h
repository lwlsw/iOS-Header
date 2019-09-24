//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSData, NSMutableArray, PBDataReader;

@interface GEOMapsServerMetadata : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_158f0f88 _readerMark;
    NSMutableArray *_mapsSearchResults;
    NSMutableArray *_suggestionEntryMetadataDisplayeds;
    NSData *_suggestionEntryMetadataTappedOn;
    struct {
        unsigned int read_mapsSearchResults:1;
        unsigned int read_suggestionEntryMetadataDisplayeds:1;
        unsigned int read_suggestionEntryMetadataTappedOn:1;
        unsigned int wrote_mapsSearchResults:1;
        unsigned int wrote_suggestionEntryMetadataDisplayeds:1;
        unsigned int wrote_suggestionEntryMetadataTappedOn:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)mapsSearchResultType;
+ (Class)suggestionEntryMetadataDisplayedType;
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
- (id)mapsSearchResultAtIndex:(unsigned long long)arg1;
- (unsigned long long)mapsSearchResultsCount;
- (void)_addNoFlagsMapsSearchResult:(id)arg1;
- (void)addMapsSearchResult:(id)arg1;
- (void)clearMapsSearchResults;
@property(retain, nonatomic) NSMutableArray *mapsSearchResults;
- (void)_readMapsSearchResults;
- (id)suggestionEntryMetadataDisplayedAtIndex:(unsigned long long)arg1;
- (unsigned long long)suggestionEntryMetadataDisplayedsCount;
- (void)_addNoFlagsSuggestionEntryMetadataDisplayed:(id)arg1;
- (void)addSuggestionEntryMetadataDisplayed:(id)arg1;
- (void)clearSuggestionEntryMetadataDisplayeds;
@property(retain, nonatomic) NSMutableArray *suggestionEntryMetadataDisplayeds;
- (void)_readSuggestionEntryMetadataDisplayeds;
@property(retain, nonatomic) NSData *suggestionEntryMetadataTappedOn;
@property(readonly, nonatomic) _Bool hasSuggestionEntryMetadataTappedOn;
- (void)_readSuggestionEntryMetadataTappedOn;

@end

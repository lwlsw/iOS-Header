//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBFormattedText-Protocol.h>

@class NSData, NSString, _SFPBImage, _SFPBText;

@interface _SFPBFormattedText : PBCodable <_SFPBFormattedText, NSSecureCoding>
{
    _Bool _isEmphasized;
    _Bool _isBold;
    int _textColor;
    _SFPBText *_text;
    _SFPBImage *_glyph;
}

@property(nonatomic) int textColor; // @synthesize textColor=_textColor;
@property(nonatomic) _Bool isBold; // @synthesize isBold=_isBold;
@property(nonatomic) _Bool isEmphasized; // @synthesize isEmphasized=_isEmphasized;
@property(retain, nonatomic) _SFPBImage *glyph; // @synthesize glyph=_glyph;
@property(retain, nonatomic) _SFPBText *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithFacade:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end


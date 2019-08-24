//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKRecord, NSNumber, NSString;

@interface FCTagSettingsEntry : NSObject
{
    _Bool _webAccessOptIn;
    NSString *_identifier;
    NSString *_tagID;
    NSNumber *_fontMultiplier;
    NSString *_accessToken;
}

@property(readonly, nonatomic) _Bool webAccessOptIn; // @synthesize webAccessOptIn=_webAccessOptIn;
@property(readonly, copy, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
@property(readonly, copy, nonatomic) NSNumber *fontMultiplier; // @synthesize fontMultiplier=_fontMultiplier;
@property(readonly, copy, nonatomic) NSString *tagID; // @synthesize tagID=_tagID;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) CKRecord *asCKRecord;
- (id)initWithEntryID:(id)arg1 tagID:(id)arg2 fontMultiplier:(id)arg3 accessToken:(id)arg4 webAccessOptIn:(_Bool)arg5;
- (id)dictionaryRepresentation;
- (id)initWithEntryID:(id)arg1 dictionaryRepresentation:(id)arg2;

@end

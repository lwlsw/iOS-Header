//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ADVector, DESRecordStore, NSDictionary, NSMutableArray, NSString, NSUUID;

@interface ADDESRecordHandler : NSObject
{
    _Bool _shouldMakeRecord;
    _Bool _writingInProgress;
    _Bool _hasBeenTapped;
    _Bool _hasBeenImpressed;
    NSUUID *_recordIdentifier;
    NSString *_requestID;
    DESRecordStore *_recordStore;
    NSMutableArray *_postWriteOperations;
    NSString *_adamID;
    ADVector *_appVector;
    double _pTTR;
    NSString *_obfuscationID;
    NSDictionary *_usageVectors;
}

@property(retain, nonatomic) NSDictionary *usageVectors; // @synthesize usageVectors=_usageVectors;
@property(retain, nonatomic) NSString *obfuscationID; // @synthesize obfuscationID=_obfuscationID;
@property(nonatomic) double pTTR; // @synthesize pTTR=_pTTR;
@property(retain, nonatomic) ADVector *appVector; // @synthesize appVector=_appVector;
@property(retain, nonatomic) NSString *adamID; // @synthesize adamID=_adamID;
@property(nonatomic) _Bool hasBeenImpressed; // @synthesize hasBeenImpressed=_hasBeenImpressed;
@property(nonatomic) _Bool hasBeenTapped; // @synthesize hasBeenTapped=_hasBeenTapped;
@property _Bool writingInProgress; // @synthesize writingInProgress=_writingInProgress;
@property(retain, nonatomic) NSMutableArray *postWriteOperations; // @synthesize postWriteOperations=_postWriteOperations;
@property(nonatomic) _Bool shouldMakeRecord; // @synthesize shouldMakeRecord=_shouldMakeRecord;
@property(retain, nonatomic) DESRecordStore *recordStore; // @synthesize recordStore=_recordStore;
@property(retain, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
@property(retain, nonatomic) NSUUID *recordIdentifier; // @synthesize recordIdentifier=_recordIdentifier;
- (void).cxx_destruct;
- (void)writeDESRecord;
- (void)performAfterWrite:(CDUnknownBlockType)arg1;
- (id)recordData;
- (void)addImpressionRequiringSave:(_Bool)arg1;
- (void)addTapRequringSave:(_Bool)arg1;
- (void)addImpression;
- (void)addTap;
- (void)updateAdData:(id)arg1;
- (id)initWithRequestID:(id)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AFDictationDelegate-Protocol.h"

@class AFDictationConnection, CarDictationResult, NSError, NSString, NSTimer;

__attribute__((visibility("hidden")))
@interface CarDictationController : NSObject <AFDictationDelegate>
{
    long long _state;
    AFDictationConnection *_dictationConnection;
    unsigned long long _requestedType;
    NSString *_languageCode;
    CarDictationResult *_result;
    NSError *_error;
    CDUnknownBlockType _handler;
    NSTimer *_processingTimer;
}

@property(retain, nonatomic) NSTimer *processingTimer; // @synthesize processingTimer=_processingTimer;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) CarDictationResult *result; // @synthesize result=_result;
@property(retain, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(nonatomic) unsigned long long requestedType; // @synthesize requestedType=_requestedType;
@property(retain, nonatomic) AFDictationConnection *dictationConnection; // @synthesize dictationConnection=_dictationConnection;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)_failWithError:(id)arg1;
- (void)dictationConnection:(id)arg1 speechRecognitionDidFail:(id)arg2;
- (void)dictationConnection:(id)arg1 speechRecordingDidFail:(id)arg2;
- (void)dictationConnectionSpeechRecordingDidCancel:(id)arg1;
- (void)dictationConnection:(id)arg1 didRecognizeTranscriptionObjects:(id)arg2 languageModel:(id)arg3;
- (void)dictationConnection:(id)arg1 didRecognizeTokens:(id)arg2 languageModel:(id)arg3;
- (void)dictationConnectionSpeechRecognitionDidSucceed:(id)arg1;
- (void)dictationConnectionSpeechRecordingDidEnd:(id)arg1;
- (void)dictationConnectionSpeechRecordingDidBegin:(id)arg1;
- (void)dictationConnectionSpeechRecordingWillBegin:(id)arg1;
- (void)_finishIfPossible;
- (void)_processingTimeLimitReached;
- (void)_reset;
- (void)_transitionToState:(long long)arg1;
- (_Bool)isSiriEnabled;
- (_Bool)_isNetworkAvailable;
- (void)_stopListening;
- (void)_startListeningWithTranscriptionMode:(long long)arg1;
@property(readonly, nonatomic) float powerLevel;
- (_Bool)isDictationEnabled;
- (_Bool)isDictationAvailable;
- (void)preheat;
- (void)_clearDictationConnection;
- (void)_fireHandler:(CDUnknownBlockType)arg1 withState:(long long)arg2 result:(id)arg3 error:(id)arg4;
- (void)cancelRequest;
- (void)stopRequest;
- (void)requestInputOfType:(unsigned long long)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

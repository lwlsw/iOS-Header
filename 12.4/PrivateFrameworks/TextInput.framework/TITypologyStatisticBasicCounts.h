//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInput/TITypologyStatisticCurrentAutocorrections.h>

@class NSMutableArray, NSMutableString;

@interface TITypologyStatisticBasicCounts : TITypologyStatisticCurrentAutocorrections
{
    _Bool _backspacedIntoAutocorrection;
    long long _touchCount;
    long long _characterCount;
    long long _predictedCharacterCount;
    long long _backspaceCount;
    long long _autocorrectionCount;
    long long _rejectedCandidateCount;
    long long _backspaceIntoAutocorrectionCount;
    long long _predictiveSelectionCount;
    long long _falseBackspaceCount;
    long long _falseBackspaceIntoAutocorrectionCount;
    NSMutableString *_recentText;
    NSMutableArray *_recentAutocorrectionLocations;
    NSMutableString *_recentTextBeforeBackspace;
    NSMutableString *_recentTextAfterBackspace;
}

@property(nonatomic) _Bool backspacedIntoAutocorrection; // @synthesize backspacedIntoAutocorrection=_backspacedIntoAutocorrection;
@property(readonly, nonatomic) NSMutableString *recentTextAfterBackspace; // @synthesize recentTextAfterBackspace=_recentTextAfterBackspace;
@property(readonly, nonatomic) NSMutableString *recentTextBeforeBackspace; // @synthesize recentTextBeforeBackspace=_recentTextBeforeBackspace;
@property(readonly, nonatomic) NSMutableArray *recentAutocorrectionLocations; // @synthesize recentAutocorrectionLocations=_recentAutocorrectionLocations;
@property(readonly, nonatomic) NSMutableString *recentText; // @synthesize recentText=_recentText;
@property(readonly, nonatomic) long long falseBackspaceIntoAutocorrectionCount; // @synthesize falseBackspaceIntoAutocorrectionCount=_falseBackspaceIntoAutocorrectionCount;
@property(readonly, nonatomic) long long falseBackspaceCount; // @synthesize falseBackspaceCount=_falseBackspaceCount;
@property(readonly, nonatomic) long long predictiveSelectionCount; // @synthesize predictiveSelectionCount=_predictiveSelectionCount;
@property(readonly, nonatomic) long long backspaceIntoAutocorrectionCount; // @synthesize backspaceIntoAutocorrectionCount=_backspaceIntoAutocorrectionCount;
@property(readonly, nonatomic) long long rejectedCandidateCount; // @synthesize rejectedCandidateCount=_rejectedCandidateCount;
@property(readonly, nonatomic) long long autocorrectionCount; // @synthesize autocorrectionCount=_autocorrectionCount;
@property(readonly, nonatomic) long long backspaceCount; // @synthesize backspaceCount=_backspaceCount;
@property(readonly, nonatomic) long long predictedCharacterCount; // @synthesize predictedCharacterCount=_predictedCharacterCount;
@property(readonly, nonatomic) long long characterCount; // @synthesize characterCount=_characterCount;
@property(readonly, nonatomic) long long touchCount; // @synthesize touchCount=_touchCount;
- (void).cxx_destruct;
- (void)visitRecordCandidateRejected:(id)arg1;
- (void)visitRecordTextAccepted:(id)arg1;
- (void)visitRecordSkipHitTest:(id)arg1;
- (void)visitRecordHitTest:(id)arg1;
- (void)visitRecordKeyboardInput:(id)arg1;
- (void)visitRecordSync:(id)arg1;
- (void)updateTextWithAcceptedCandidate:(id)arg1;
- (void)handleTouch:(id)arg1;
- (id)aggregateReport;
- (id)structuredReport;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreCDPInternal/CDPDRecoveryFlowController.h>

@class NSArray;
@protocol CDPDBackupRecoveryErrorProvider, CDPDBackupRecoveryResultsParser;

@interface CDPDBackupInfoRecoveryFlowController : CDPDRecoveryFlowController
{
    id <CDPDBackupRecoveryResultsParser> _resultParser;
    id <CDPDBackupRecoveryErrorProvider> _errorProvider;
    NSArray *_recoveryRecords;
}

@property(retain, nonatomic) NSArray *recoveryRecords; // @synthesize recoveryRecords=_recoveryRecords;
@property(retain, nonatomic) id <CDPDBackupRecoveryErrorProvider> errorProvider; // @synthesize errorProvider=_errorProvider;
@property(retain, nonatomic) id <CDPDBackupRecoveryResultsParser> resultParser; // @synthesize resultParser=_resultParser;
- (void).cxx_destruct;
- (void)_updateRecordRecoveryStatusForRecordDictionary:(id)arg1;
- (void)secretValidator:(id)arg1 didFailRecoveryWithErrors:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)secretValidator:(id)arg1 shouldContinueValidationAfterError:(id)arg2;
- (id)_recoveryListFromDevices:(id)arg1;
- (void)retrieveInflatedDevices:(CDUnknownBlockType)arg1;
- (void)beginRecoveryWithCompletion:(CDUnknownBlockType)arg1;

@end

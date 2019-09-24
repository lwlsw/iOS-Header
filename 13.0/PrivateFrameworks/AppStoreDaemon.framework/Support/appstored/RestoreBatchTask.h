//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "Task.h"

@class ACAccount, NSArray;

@interface RestoreBatchTask : Task
{
    ACAccount *_account;
    NSArray *_restoreInstalls;
    _Bool _skipLatestVersionCheck;
    _Bool _userInitiated;
    NSArray *_hardFailures;
    NSArray *_softFailures;
    NSArray *_successfulItems;
}

+ (_Bool)isErrorBadTokenError:(id)arg1;
@property(readonly) NSArray *successfulItems; // @synthesize successfulItems=_successfulItems;
@property(readonly) NSArray *softFailures; // @synthesize softFailures=_softFailures;
@property(readonly) NSArray *hardFailures; // @synthesize hardFailures=_hardFailures;
@property(getter=isUserInitiated) _Bool userInitiated; // @synthesize userInitiated=_userInitiated;
@property _Bool skipLatestVersionCheck; // @synthesize skipLatestVersionCheck=_skipLatestVersionCheck;
@property(copy) ACAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)_processBatchFailureItems:(id)arg1 error:(id)arg2 context:(id)arg3;
- (id)_processContentRestoreResponse:(id)arg1 context:(id)arg2;
- (void)main;
- (_Bool)isErrorSoftFail:(id)arg1;
- (id)initWithRestoreAppInstalls:(id)arg1;

@end

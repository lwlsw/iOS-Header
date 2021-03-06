//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "RAPReportViewControllerProtocol-Protocol.h"

@class NSString, RAPReport, UIBarButtonItem;
@protocol RAPReportViewControllerProtocol;

__attribute__((visibility("hidden")))
@interface RAPReportViewControllerDelegate : NSObject <RAPReportViewControllerProtocol>
{
    RAPReport *_report;
    CDUnknownBlockType _completion;
    UIBarButtonItem *_sendButtonItem;
    id <RAPReportViewControllerProtocol> _delegate;
}

@property(nonatomic) __weak id <RAPReportViewControllerProtocol> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) RAPReport *report; // @synthesize report=_report;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_send;
@property(readonly, nonatomic) UIBarButtonItem *sendButtonItem; // @synthesize sendButtonItem=_sendButtonItem;
- (void)invokeCompletionWithOutcome:(long long)arg1;
- (id)initWithReport:(id)arg1 completion:(CDUnknownBlockType)arg2 delegate:(id)arg3;
- (id)initWithReport:(id)arg1 question:(id)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


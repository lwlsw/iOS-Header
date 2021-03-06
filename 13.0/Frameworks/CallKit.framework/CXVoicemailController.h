//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CXVoicemailObserver;
@protocol OS_dispatch_queue;

@interface CXVoicemailController : NSObject
{
    CXVoicemailObserver *_voicemailObserver;
    NSObject<OS_dispatch_queue> *_completionQueue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // @synthesize completionQueue=_completionQueue;
@property(readonly, nonatomic) CXVoicemailObserver *voicemailObserver; // @synthesize voicemailObserver=_voicemailObserver;
- (void).cxx_destruct;
- (void)_requestTransaction:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestTransactionWithAction:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestTransactionWithActions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestTransaction:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithQueue:(id)arg1;
- (id)init;

@end


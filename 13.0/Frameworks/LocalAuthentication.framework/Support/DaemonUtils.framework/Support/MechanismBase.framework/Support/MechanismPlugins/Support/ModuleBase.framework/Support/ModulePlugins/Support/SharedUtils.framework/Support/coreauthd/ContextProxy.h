//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "LAContextXPC-Protocol.h"
#import "LAOriginatorProt-Protocol.h"

@class Context, NSString;
@protocol LAContextCallbackXPC;

@interface ContextProxy : NSObject <LAContextXPC, LAOriginatorProt>
{
    CDUnknownBlockType _invalidationBlock;
    CDUnknownBlockType _checkEntitlementBlock;
    _Bool _cApiOrigin;
    int _processId;
    unsigned int _userId;
    int _auditSessionId;
    id <LAContextCallbackXPC> _callback;
    unsigned long long _originatorId;
    Context *_managedContext;
    CDStruct_4c969caf _auditToken;
}

@property(readonly, nonatomic) Context *managedContext; // @synthesize managedContext=_managedContext;
@property(readonly, nonatomic) unsigned long long originatorId; // @synthesize originatorId=_originatorId;
@property(readonly, nonatomic) id <LAContextCallbackXPC> callback; // @synthesize callback=_callback;
@property(readonly, nonatomic) CDStruct_4c969caf auditToken; // @synthesize auditToken=_auditToken;
@property(readonly, nonatomic) int auditSessionId; // @synthesize auditSessionId=_auditSessionId;
@property(readonly, nonatomic) unsigned int userId; // @synthesize userId=_userId;
@property(readonly, nonatomic) int processId; // @synthesize processId=_processId;
@property(readonly, nonatomic) _Bool cApiOrigin; // @synthesize cApiOrigin=_cApiOrigin;
- (void).cxx_destruct;
- (void)invalidateWithError:(id)arg1;
- (_Bool)checkEntitlement:(id)arg1;
- (void)evaluateACL:(id)arg1 cfOperation:(void *)arg2 options:(id)arg3 uiDelegate:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)evaluateACL:(id)arg1 operation:(id)arg2 options:(id)arg3 uiDelegate:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)evaluatePolicy:(long long)arg1 options:(id)arg2 uiDelegate:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)tokenForTransferToUnknownProcess:(CDUnknownBlockType)arg1;
- (void)allowTransferToProcess:(int)arg1 receiverAuditTokenData:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)authMethodWithReply:(CDUnknownBlockType)arg1;
- (void)externalizedContextWithReply:(CDUnknownBlockType)arg1;
- (void)setServerPropertyForOption:(long long)arg1 value:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)serverPropertyForOption:(long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)invalidateWithReply:(CDUnknownBlockType)arg1;
- (void)setCredential:(id)arg1 type:(long long)arg2 reply:(CDUnknownBlockType)arg3;
- (void)isCredentialSet:(long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setCredential:(id)arg1 forProcessedEvent:(long long)arg2 credentialType:(long long)arg3 reply:(CDUnknownBlockType)arg4;
- (void)setShowingCoachingHint:(_Bool)arg1 event:(long long)arg2 reply:(CDUnknownBlockType)arg3;
- (void)resetProcessedEvent:(long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)retryProcessedEvent:(long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)failProcessedEvent:(long long)arg1 failureError:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)evaluateACL:(id)arg1 operation:(id)arg2 options:(id)arg3 uiDelegate:(id)arg4 originator:(id)arg5 reply:(CDUnknownBlockType)arg6;
- (void)evaluatePolicy:(long long)arg1 options:(id)arg2 uiDelegate:(id)arg3 originator:(id)arg4 reply:(CDUnknownBlockType)arg5;
@property(readonly, copy) NSString *description;
- (void)interruptWithReply:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1 processId:(int)arg2 userId:(unsigned int)arg3 auditSessionId:(int)arg4 auditToken:(CDStruct_4c969caf)arg5 cApiOrigin:(_Bool)arg6 checkEntitlementBlock:(CDUnknownBlockType)arg7 invalidationBlock:(CDUnknownBlockType)arg8 callback:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


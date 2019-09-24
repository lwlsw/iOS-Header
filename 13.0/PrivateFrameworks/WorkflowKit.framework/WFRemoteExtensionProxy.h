//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/INCExtensionProxy-Protocol.h>

@class INCExtensionConnection, SARemoteDevice;

@interface WFRemoteExtensionProxy : NSObject <INCExtensionProxy>
{
    INCExtensionConnection *_connection;
    SARemoteDevice *_remoteDevice;
}

@property(readonly, copy, nonatomic) SARemoteDevice *remoteDevice; // @synthesize remoteDevice=_remoteDevice;
@property(readonly, nonatomic) INCExtensionConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)resolveIntentSlotKeyPaths:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)resolveIntentSlotKeyPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleIntentWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)confirmIntentWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)handleIntentRemotelyWithRemoteOperation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithConnection:(id)arg1 andDevice:(id)arg2;

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType backgroundAppHandler;

@end

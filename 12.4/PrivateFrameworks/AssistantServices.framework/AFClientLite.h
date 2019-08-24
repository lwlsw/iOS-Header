//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFClientLiteClientCommandHandling-Protocol.h>

@protocol OS_dispatch_queue;

@interface AFClientLite : NSObject <AFClientLiteClientCommandHandling>
{
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _commandHandler;
}

- (void).cxx_destruct;
- (oneway void)handleCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleCommand:(id)arg1 commandHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handleOneWayCommand:(id)arg1 commandHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handleCommand:(id)arg1 afterCurrentRequest:(_Bool)arg2 commandHandler:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_handleCommand:(id)arg1 afterCurrentRequest:(_Bool)arg2 isOneWay:(_Bool)arg3 commandHandler:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (id)init;

@end

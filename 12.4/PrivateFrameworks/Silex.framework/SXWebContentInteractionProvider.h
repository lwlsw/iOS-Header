//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXWebContentInteractionProvider-Protocol.h>
#import <Silex/SXWebContentMessageHandler-Protocol.h>

@class NSMutableArray, NSString;
@protocol SXWebContentInteraction, SXWebContentInteractionFactory, SXWebContentLogger;

@interface SXWebContentInteractionProvider : NSObject <SXWebContentMessageHandler, SXWebContentInteractionProvider>
{
    id <SXWebContentInteraction> _interaction;
    id <SXWebContentInteractionFactory> _interactionFactory;
    id <SXWebContentLogger> _logger;
    NSMutableArray *_blocks;
}

@property(readonly, nonatomic) NSMutableArray *blocks; // @synthesize blocks=_blocks;
@property(readonly, nonatomic) id <SXWebContentLogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SXWebContentInteractionFactory> interactionFactory; // @synthesize interactionFactory=_interactionFactory;
@property(readonly, nonatomic) id <SXWebContentInteraction> interaction; // @synthesize interaction=_interaction;
- (void).cxx_destruct;
- (void)didReceiveMessage:(id)arg1 securityOrigin:(id)arg2;
- (void)onChange:(CDUnknownBlockType)arg1;
- (id)initWithMessageHandlerManager:(id)arg1 documentStateProvider:(id)arg2 interactionFactory:(id)arg3 logger:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

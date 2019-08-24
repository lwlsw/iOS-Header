//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface _PLPhotoAnalysisXPCConnection : NSObject
{
    NSXPCConnection *_xpcConnection;
    _Bool _graphIsReady;
    _Bool _wantsGraphLoaded;
    _Bool _graphLoadWasSent;
}

+ (id)sharedConnection;
- (void).cxx_destruct;
- (void)dealloc;
- (id)xpcConnection;
- (id)_xpcConnection_locked;
- (void)unloadGraphWithContext:(id)arg1;
- (void)loadGraphWithContext:(id)arg1;
- (void)_setupXPCConnection;
- (_Bool)graphLoadWasSent;
- (_Bool)wantsGraphLoaded;
- (_Bool)graphIsReady;

@end

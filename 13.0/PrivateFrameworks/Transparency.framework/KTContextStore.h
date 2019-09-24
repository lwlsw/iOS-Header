//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class KTLogClient, KTPublicKeyStore, NSMutableDictionary, TransparencyManagedDataStore;

@interface KTContextStore : NSObject
{
    NSMutableDictionary *_contexts;
    TransparencyManagedDataStore *_dataStore;
    KTPublicKeyStore *_keyStore;
    KTLogClient *_configClient;
}

@property(retain) KTLogClient *configClient; // @synthesize configClient=_configClient;
@property(retain) KTPublicKeyStore *keyStore; // @synthesize keyStore=_keyStore;
@property(readonly, retain) TransparencyManagedDataStore *dataStore; // @synthesize dataStore=_dataStore;
@property(retain) NSMutableDictionary *contexts; // @synthesize contexts=_contexts;
- (void).cxx_destruct;
- (_Bool)runDutyCycleForActivity:(id)arg1 logClient:(id)arg2 resumptionWorkloop:(id)arg3;
- (void)runDutyCycleConfigurationStepForActivity:(id)arg1 logClient:(id)arg2 resumptionWorkloop:(id)arg3;
- (void)runDutyCycleProcessingStepForActivity:(id)arg1 context:(id)arg2 logClient:(id)arg3;
- (_Bool)logSharedMetrics;
- (void)clearApplicationState:(id)arg1 logClient:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)updateRequest:(id)arg1 serverDatas:(id)arg2 syncedDatas:(id)arg3 queryResponse:(id)arg4 error:(id *)arg5;
- (void)validateEnrollment:(id)arg1 application:(id)arg2 logClient:(id)arg3 transparentData:(id *)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)validateSelf:(id)arg1 application:(id)arg2 logClient:(id)arg3 transparentData:(id *)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)validatePeer:(id)arg1 application:(id)arg2 logClient:(id)arg3 transparentData:(id *)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)contextForApplication:(id)arg1 logClient:(id)arg2 fetchState:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)createKeyStoreForApplication:(id)arg1 dataStore:(id)arg2 logClient:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)configureWithClient:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)configure:(CDUnknownBlockType)arg1;
- (void)forcedConfigure:(_Bool)arg1 logClient:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithDataStore:(id)arg1 keyStore:(id)arg2 configClient:(id)arg3;

@end

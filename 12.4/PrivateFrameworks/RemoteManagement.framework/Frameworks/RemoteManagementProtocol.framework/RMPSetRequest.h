//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RemoteManagementProtocol/RMPRemoteManagementRequest.h>

#import <RemoteManagementProtocol/RMPRegisteredTypeProtocol-Protocol.h>

@class NSArray, NSString;

@interface RMPSetRequest : RMPRemoteManagementRequest <RMPRegisteredTypeProtocol>
{
    NSString *_syncToken;
    NSArray *_declarations;
}

+ (id)requestWithUUID:(id)arg1 withSyncToken:(id)arg2 withDeclarations:(id)arg3;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) NSArray *declarations; // @synthesize declarations=_declarations;
@property(copy, nonatomic) NSString *syncToken; // @synthesize syncToken=_syncToken;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serialize;
- (_Bool)loadRequestFromDictionary:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

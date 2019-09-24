//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AuthenticationServices/NSObject-Protocol.h>

@class ASPasswordCredentialIdentity, NSArray;

@protocol _ASCredentialProviderExtensionContextProtocol <NSObject>
- (void)prepareInterfaceForExtensionConfiguration;
- (void)prepareInterfaceToProvideCredentialForIdentity:(ASPasswordCredentialIdentity *)arg1;
- (void)provideCredentialWithoutUserInteractionForIdentity:(ASPasswordCredentialIdentity *)arg1;
- (void)prepareCredentialListForServiceIdentifiers:(NSArray *)arg1;
@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TouchRemote/TRDeviceSetupLegacyAction.h>

@class NSString, TRDeviceSetupLegacySetupActionAuthInfo;

@interface TRDeviceSetupLegacySetupAction : TRDeviceSetupLegacyAction
{
}

@property(readonly, nonatomic) _Bool rememberPassword;
@property(readonly, nonatomic) NSString *homeSharingGroupID;
@property(readonly, nonatomic) NSString *homeSharingAppleID;
@property(readonly, nonatomic) NSString *countryCode;
@property(readonly, nonatomic) NSString *language;
@property(readonly, nonatomic) _Bool diagnosticsEnabled;
@property(readonly, nonatomic) NSString *networkPassword;
@property(readonly, nonatomic) NSString *networkSSID;
@property(readonly, nonatomic) TRDeviceSetupLegacySetupActionAuthInfo *authInfo;
- (id)initWithAuthInfo:(id)arg1 networkSSID:(id)arg2 networkPassword:(id)arg3 diagnosticsEnabled:(_Bool)arg4 language:(id)arg5 countryCode:(id)arg6 homeSharingAppleID:(id)arg7 homeSharingGroupID:(id)arg8 rememberPassword:(_Bool)arg9;

@end

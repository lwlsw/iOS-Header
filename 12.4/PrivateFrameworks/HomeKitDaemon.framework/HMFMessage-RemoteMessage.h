//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFMessage.h>

@class HAPPairingIdentity, HMDDevice, NSString;

@interface HMFMessage (RemoteMessage)
@property(readonly, nonatomic) unsigned long long remoteRestriction;
@property(readonly, nonatomic) HAPPairingIdentity *remoteUserPairingIdentity;
@property(readonly, nonatomic) HMDDevice *remoteSourceDevice;
@property(readonly, nonatomic) NSString *remoteSourceID;
@property(readonly, nonatomic, getter=isSecureRemote) _Bool secureRemote;
@property(readonly, nonatomic, getter=isRemote) _Bool remote;
- (id)hmd_safeUserInfo;
@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface NetworkUtils : NSObject
{
}

+ (id)newEncryptionInfoWithMasterKeyIndex:(id)arg1;
+ (id)securityKeyMaterialWithMasterKeyIndex:(id)arg1;
+ (id)newRTPSocketDictionary:(_Bool)arg1 rtpSourcePort:(short)arg2;
+ (int)socketWithIPAddress:(id)arg1 srcPort:(short)arg2 shouldConnect:(_Bool)arg3 error:(id *)arg4;
+ (int)connectedSocketWithIPAddress:(id)arg1 srcPort:(short)arg2 error:(id *)arg3;
+ (int)socketWithIPAddress:(id)arg1 srcPort:(short)arg2 error:(id *)arg3;

@end

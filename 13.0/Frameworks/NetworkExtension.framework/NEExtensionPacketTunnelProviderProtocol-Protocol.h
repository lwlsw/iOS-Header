//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkExtension/NEExtensionTunnelProviderProtocol-Protocol.h>

@class NSFileHandle;

@protocol NEExtensionPacketTunnelProviderProtocol <NEExtensionTunnelProviderProtocol>
- (void)fetchVirtualInterfaceTypeWithCompletionHandler:(void (^)(long long))arg1;
- (void)setVirtualInterfaceSocket:(NSFileHandle *)arg1;
@end

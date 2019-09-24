//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary;

@protocol LARemoteUI <NSObject>

@optional
- (void)transitionToController:(long long)arg1 internalInfo:(NSDictionary *)arg2 completionHandler:(void (^)(void))arg3;
- (void)dismissRemoteUIWithCompletionHandler:(void (^)(void))arg1;
- (void)mechanismEvent:(long long)arg1 value:(id)arg2 reply:(void (^)(void))arg3;
- (void)mechanismEvent:(long long)arg1 reply:(void (^)(void))arg2;
@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FLReachabilityObserver : NSObject
{
    CDUnknownBlockType _completionHandler;
}

+ (_Bool)isNetworkReachable;
+ (_Bool)isAirplaneModeActiveWithoutWifi;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_reachabilityChanged:(id)arg1;
- (void)disableAirplaneModeAndWaitForNetworkWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

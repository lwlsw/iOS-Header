//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSString;

@interface HMDAccessoryReachabilityTuple : HMFObject
{
    _Bool _previouslySentReachability;
    _Bool _currentReachability;
    NSString *_accessoryUUID;
}

+ (id)tupleWithAccessoryUUID:(id)arg1 reachable:(_Bool)arg2;
@property(nonatomic) _Bool currentReachability; // @synthesize currentReachability=_currentReachability;
@property(nonatomic) _Bool previouslySentReachability; // @synthesize previouslySentReachability=_previouslySentReachability;
@property(retain, nonatomic) NSString *accessoryUUID; // @synthesize accessoryUUID=_accessoryUUID;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, NSUUID;

@interface SKPaymentDiscount : NSObject
{
    id _internal;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSNumber *timestamp;
@property(readonly, copy, nonatomic) NSString *signature;
@property(readonly, copy, nonatomic) NSUUID *nonce;
@property(readonly, copy, nonatomic) NSString *keyIdentifier;
@property(readonly, copy, nonatomic) NSString *identifier;
- (id)initWithIdentifier:(id)arg1 keyIdentifier:(id)arg2 nonce:(id)arg3 signature:(id)arg4 timestamp:(id)arg5;

@end


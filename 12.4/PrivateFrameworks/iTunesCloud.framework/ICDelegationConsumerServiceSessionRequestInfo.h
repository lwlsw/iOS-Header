//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ICDelegationConsumerServiceSessionRequestInfo : NSObject
{
    unsigned long long _accountID;
    unsigned long long _fairPlaySessionID;
}

@property(readonly, nonatomic) unsigned long long fairPlaySessionID; // @synthesize fairPlaySessionID=_fairPlaySessionID;
@property(readonly, nonatomic) unsigned long long accountID; // @synthesize accountID=_accountID;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAccountID:(unsigned long long)arg1 fairPlaySessionID:(unsigned long long)arg2;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKActivityEvent.h>

@class PKPaymentTransaction;

@interface PKActivityEventTransaction : PKActivityEvent
{
    PKPaymentTransaction *_transaction;
}

@property(readonly, nonatomic) PKPaymentTransaction *transaction; // @synthesize transaction=_transaction;
- (void).cxx_destruct;
- (id)eventType;
- (_Bool)isEqualToActivityEvent:(id)arg1;
- (unsigned long long)hash;
- (id)initWithTransaction:(id)arg1 unread:(_Bool)arg2;

@end

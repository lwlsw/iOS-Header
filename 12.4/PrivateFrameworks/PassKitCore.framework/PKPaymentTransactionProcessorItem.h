//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PKPaymentApplication, PKPaymentTransaction;

@interface PKPaymentTransactionProcessorItem : NSObject
{
    _Bool _foundOptimalLocation;
    PKPaymentTransaction *_paymentTransaction;
    PKPaymentApplication *_paymentApplication;
    NSString *_passUniqueIdentifier;
}

@property(nonatomic) _Bool foundOptimalLocation; // @synthesize foundOptimalLocation=_foundOptimalLocation;
@property(retain, nonatomic) NSString *passUniqueIdentifier; // @synthesize passUniqueIdentifier=_passUniqueIdentifier;
@property(retain, nonatomic) PKPaymentApplication *paymentApplication; // @synthesize paymentApplication=_paymentApplication;
@property(retain, nonatomic) PKPaymentTransaction *paymentTransaction; // @synthesize paymentTransaction=_paymentTransaction;
- (void).cxx_destruct;

@end


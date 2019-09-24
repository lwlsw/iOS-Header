//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKAccountFeatureDescriptor.h>

@class NSString;

@interface PKCreditAccountFeatureDescriptor : PKAccountFeatureDescriptor
{
    unsigned long long _paymentFundingSourceTypes;
    unsigned long long _paymentPresets;
    unsigned long long _paymentFrequencies;
    NSString *_paymentTermsIdentifier;
    NSString *_fundingSourceTermsIdentifier;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *fundingSourceTermsIdentifier; // @synthesize fundingSourceTermsIdentifier=_fundingSourceTermsIdentifier;
@property(copy, nonatomic) NSString *paymentTermsIdentifier; // @synthesize paymentTermsIdentifier=_paymentTermsIdentifier;
@property(nonatomic) unsigned long long paymentFrequencies; // @synthesize paymentFrequencies=_paymentFrequencies;
@property(nonatomic) unsigned long long paymentPresets; // @synthesize paymentPresets=_paymentPresets;
@property(nonatomic) unsigned long long paymentFundingSourceTypes; // @synthesize paymentFundingSourceTypes=_paymentFundingSourceTypes;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToCreditAccountFeatureDescriptor:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

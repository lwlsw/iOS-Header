//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class CTPlanIdentifier, CTPlanTransferAttributes;

@interface CTInstalledPlan : NSObject <NSSecureCoding>
{
    _Bool _isSelected;
    CTPlanIdentifier *_planID;
    CTPlanTransferAttributes *_transferAttributes;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) CTPlanTransferAttributes *transferAttributes; // @synthesize transferAttributes=_transferAttributes;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) CTPlanIdentifier *planID; // @synthesize planID=_planID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)phoneNumber;
- (id)carrierName;
- (id)iccid;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)init;

@end

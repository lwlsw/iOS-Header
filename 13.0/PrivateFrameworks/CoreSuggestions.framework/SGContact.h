//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestions/NSCopying-Protocol.h>
#import <CoreSuggestions/NSSecureCoding-Protocol.h>

@class NSArray, NSString, SGDateComponents, SGName, SGRecordId;

@interface SGContact : NSObject <NSCopying, NSSecureCoding>
{
    int _updatedFields;
    SGRecordId *_recordId;
    SGName *_name;
    NSArray *_emailAddresses;
    NSArray *_phones;
    NSArray *_postalAddresses;
    NSArray *_instantMessageAddresses;
    NSArray *_socialProfiles;
    SGDateComponents *_birthday;
    NSString *_photoPath;
    unsigned long long _significance;
    unsigned long long _significanceOrigin;
}

+ (id)contactWithId:(id)arg1 name:(id)arg2 emailAddresses:(id)arg3 phones:(id)arg4 postalAddresses:(id)arg5;
+ (id)contactWithId:(id)arg1 name:(id)arg2 emailAddresses:(id)arg3 phones:(id)arg4 postalAddresses:(id)arg5 instantMessageAddresses:(id)arg6 socialProfiles:(id)arg7 birthday:(id)arg8 photoPath:(id)arg9;
+ (id)contactWithId:(id)arg1 name:(id)arg2 emailAddresses:(id)arg3 phones:(id)arg4 postalAddresses:(id)arg5 instantMessageAddresses:(id)arg6 socialProfiles:(id)arg7;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) int updatedFields; // @synthesize updatedFields=_updatedFields;
@property(nonatomic) unsigned long long significanceOrigin; // @synthesize significanceOrigin=_significanceOrigin;
@property(nonatomic) unsigned long long significance; // @synthesize significance=_significance;
@property(readonly, copy, nonatomic) NSString *photoPath; // @synthesize photoPath=_photoPath;
@property(copy, nonatomic) SGDateComponents *birthday; // @synthesize birthday=_birthday;
@property(copy, nonatomic) NSArray *socialProfiles; // @synthesize socialProfiles=_socialProfiles;
@property(copy, nonatomic) NSArray *instantMessageAddresses; // @synthesize instantMessageAddresses=_instantMessageAddresses;
@property(copy, nonatomic) NSArray *postalAddresses; // @synthesize postalAddresses=_postalAddresses;
@property(copy, nonatomic) NSArray *phones; // @synthesize phones=_phones;
@property(copy, nonatomic) NSArray *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
@property(copy, nonatomic) SGName *name; // @synthesize name=_name;
@property(readonly, nonatomic) SGRecordId *recordId; // @synthesize recordId=_recordId;
- (void).cxx_destruct;
- (_Bool)hasNonTrivialInfo;
- (id)cnContact;
- (id)detailForRecordId:(id)arg1;
- (_Bool)containsDetailSuggestions;
- (_Bool)containsSuggestions;
- (id)description;
- (unsigned long long)richness;
- (id)addresses;
- (unsigned long long)hash;
- (_Bool)isEqualToContact:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithId:(id)arg1 name:(id)arg2 emailAddresses:(id)arg3 phones:(id)arg4 postalAddresses:(id)arg5 instantMessageAddresses:(id)arg6 socialProfiles:(id)arg7 birthday:(id)arg8 photoPath:(id)arg9;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

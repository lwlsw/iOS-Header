//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/NSCopying-Protocol.h>
#import <CloudPhotoLibrary/NSSecureCoding-Protocol.h>

@class NSDate;

@interface CPLExpungeableResourceState : NSObject <NSSecureCoding, NSCopying>
{
    unsigned long long _resourceType;
    unsigned long long _expungedState;
    NSDate *_expungedDate;
}

+ (id)normalizedExpungeableResourceStatesFromExpungeableResourceStates:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSDate *expungedDate; // @synthesize expungedDate=_expungedDate;
@property(nonatomic) unsigned long long expungedState; // @synthesize expungedState=_expungedState;
@property(nonatomic) unsigned long long resourceType; // @synthesize resourceType=_resourceType;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

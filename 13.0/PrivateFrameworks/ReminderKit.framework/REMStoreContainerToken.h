//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ReminderKit/NSSecureCoding-Protocol.h>

@class NSUUID;

@interface REMStoreContainerToken : NSObject <NSSecureCoding>
{
    NSUUID *_identifier;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)initWithIdentifier:(id)arg1;

@end


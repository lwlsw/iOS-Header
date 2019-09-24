//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSSet, STCoreDevice, STCoreUser;

@interface STUsage : NSManagedObject
{
}

+ (id)fetchRequestMatchingUser:(id)arg1 device:(id)arg2;

// Remaining properties
@property(retain, nonatomic) NSSet *blocks; // @dynamic blocks;
@property(retain, nonatomic) STCoreDevice *device; // @dynamic device;
@property(retain, nonatomic) NSDate *lastEventDate; // @dynamic lastEventDate;
@property(retain, nonatomic) NSDate *lastUpdatedDate; // @dynamic lastUpdatedDate;
@property(retain, nonatomic) STCoreUser *user; // @dynamic user;

@end

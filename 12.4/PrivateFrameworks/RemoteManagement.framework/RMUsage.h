//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSSet, RMCoreDevice, RMCoreUser;

@interface RMUsage : NSManagedObject
{
}


// Remaining properties
@property(retain, nonatomic) NSSet *blocks; // @dynamic blocks;
@property(retain, nonatomic) RMCoreDevice *device; // @dynamic device;
@property(retain, nonatomic) NSDate *lastEventDate; // @dynamic lastEventDate;
@property(retain, nonatomic) NSDate *lastUpdatedDate; // @dynamic lastUpdatedDate;
@property(retain, nonatomic) RMCoreUser *user; // @dynamic user;
@end

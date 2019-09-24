//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSSet, NSString, STUsageBlock;

@interface STUsageCategory : NSManagedObject
{
}

+ (id)appDetailItemsForUsageCategories:(id)arg1;
+ (id)categoryDetailItemsForUsageCategories:(id)arg1;

// Remaining properties
@property(retain, nonatomic) STUsageBlock *block; // @dynamic block;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(retain, nonatomic) NSSet *timedItems; // @dynamic timedItems;
@property(nonatomic) long long totalTimeInSeconds; // @dynamic totalTimeInSeconds;

@end

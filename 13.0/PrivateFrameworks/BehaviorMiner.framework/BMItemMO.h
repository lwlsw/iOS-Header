//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSSet, NSString;

@interface BMItemMO : NSManagedObject
{
}

+ (id)fetchRequest;

// Remaining properties
@property(retain, nonatomic) NSSet *antecedentOfRules; // @dynamic antecedentOfRules;
@property(retain, nonatomic) NSSet *consequentOfRules; // @dynamic consequentOfRules;
@property(copy, nonatomic) NSString *normalizedValue; // @dynamic normalizedValue;
@property(copy, nonatomic) NSString *typeIdentifier; // @dynamic typeIdentifier;
@property(copy, nonatomic) NSString *uniformIdentifier; // @dynamic uniformIdentifier;

@end

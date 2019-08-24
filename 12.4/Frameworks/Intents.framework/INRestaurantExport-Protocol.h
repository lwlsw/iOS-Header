//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class CLLocation, NSString;

@protocol INRestaurantExport <NSObject, JSExport>
@property(copy, nonatomic) NSString *restaurantIdentifier;
@property(copy, nonatomic) NSString *vendorIdentifier;
@property(copy, nonatomic) NSString *name;
@property(copy, nonatomic) CLLocation *location;
- (id)init;
@end

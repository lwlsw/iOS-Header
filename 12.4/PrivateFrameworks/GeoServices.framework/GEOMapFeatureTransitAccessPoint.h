//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GEOMapFeatureTransitAccessPoint : NSObject
{
    CDStruct_5eab3029 *_feature;
    CDStruct_2c43369c _coordinate;
}

@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate; // @synthesize coordinate=_coordinate;
@property(readonly, nonatomic) double radiusMeters;
@property(readonly, nonatomic) _Bool isExit;
@property(readonly, nonatomic) _Bool isEntrance;
- (void)dealloc;
- (id)initWithFeature:(CDStruct_5eab3029 *)arg1;
@property(readonly, nonatomic) CDStruct_5eab3029 *feature;

@end

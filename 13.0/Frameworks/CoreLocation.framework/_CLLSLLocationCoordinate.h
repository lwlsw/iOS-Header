//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreLocation/NSCopying-Protocol.h>
#import <CoreLocation/NSSecureCoding-Protocol.h>

@interface _CLLSLLocationCoordinate : NSObject <NSCopying, NSSecureCoding>
{
    double _latitude;
    double _longitude;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D)arg1;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2;

@end


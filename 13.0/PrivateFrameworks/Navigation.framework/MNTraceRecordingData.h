//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/NSSecureCoding-Protocol.h>

@class GEODirectionsRequest, GEODirectionsResponse, MNLocationDetails, NSArray, NSError;

@interface MNTraceRecordingData : NSObject <NSSecureCoding>
{
    MNLocationDetails *_initialUserLocationDetails;
    NSArray *_waypoints;
    GEODirectionsRequest *_initialDirectionsRequest;
    GEODirectionsResponse *_initialDirectionsResponse;
    NSError *_initialDirectionsRequestError;
    double _initialDirectionsRequestTimestamp;
    double _initialDirectionsResponseTimestamp;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) double initialDirectionsResponseTimestamp; // @synthesize initialDirectionsResponseTimestamp=_initialDirectionsResponseTimestamp;
@property(nonatomic) double initialDirectionsRequestTimestamp; // @synthesize initialDirectionsRequestTimestamp=_initialDirectionsRequestTimestamp;
@property(retain, nonatomic) NSError *initialDirectionsRequestError; // @synthesize initialDirectionsRequestError=_initialDirectionsRequestError;
@property(retain, nonatomic) GEODirectionsResponse *initialDirectionsResponse; // @synthesize initialDirectionsResponse=_initialDirectionsResponse;
@property(retain, nonatomic) GEODirectionsRequest *initialDirectionsRequest; // @synthesize initialDirectionsRequest=_initialDirectionsRequest;
@property(retain, nonatomic) NSArray *waypoints; // @synthesize waypoints=_waypoints;
@property(retain, nonatomic) MNLocationDetails *initialUserLocationDetails; // @synthesize initialUserLocationDetails=_initialUserLocationDetails;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

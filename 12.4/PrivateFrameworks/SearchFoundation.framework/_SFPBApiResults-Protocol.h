//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, _SFPBFlight;

@protocol _SFPBApiResults <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(copy, nonatomic) NSArray *flights;
@property(nonatomic) int resultType;
@property(nonatomic) int status;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_SFPBFlight *)flightsAtIndex:(unsigned long long)arg1;
- (unsigned long long)flightsCount;
- (void)addFlights:(_SFPBFlight *)arg1;
- (void)clearFlights;
@end

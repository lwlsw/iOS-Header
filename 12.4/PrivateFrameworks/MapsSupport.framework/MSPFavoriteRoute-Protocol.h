//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSupport/MSPFavorite-Protocol.h>

@class GEOComposedWaypoint;

@protocol MSPFavoriteRoute <MSPFavorite>
- (int)transportType;
- (GEOComposedWaypoint *)endWaypoint;
- (GEOComposedWaypoint *)startWaypoint;
@end

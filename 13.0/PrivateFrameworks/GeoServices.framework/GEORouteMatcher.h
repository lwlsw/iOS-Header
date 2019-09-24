//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOComposedRoute, GEORouteRoadMatcher;

@interface GEORouteMatcher : NSObject
{
    GEOComposedRoute *_route;
    _Bool _useStrictInitialOnRouteCriteria;
    GEORouteRoadMatcher *_routeRoadMatcher;
    _Bool _shouldSnapRouteMatchToRoute;
}

@property(nonatomic) _Bool shouldSnapRouteMatchToRoute; // @synthesize shouldSnapRouteMatchToRoute=_shouldSnapRouteMatchToRoute;
@property(nonatomic) _Bool useStrictInitialOnRouteCriteria; // @synthesize useStrictInitialOnRouteCriteria=_useStrictInitialOnRouteCriteria;
- (void).cxx_destruct;
- (_Bool)_supportsSnapping;
- (_Bool)_shouldConsiderCourseForLocation:(id)arg1;
- (double)_scoreModifierForStep:(id)arg1 previousStep:(id)arg2;
- (void)_finishRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3;
- (void)_considerCandidateMatch:(id)arg1;
- (id)_candidateForSegment:(id)arg1 location:(id)arg2 previousRouteMatch:(id)arg3;
- (id)_stepForPointIndex:(unsigned int)arg1 previousStep:(id)arg2;
- (id)_startStepForPreviousRouteMatch:(id)arg1;
- (void)_startRouteMatch;
- (void)_snapRouteMatchToRoad:(id)arg1;
- (void)_forEachSegmentNearLocation:(id)arg1 previousRouteMatch:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (double)distanceToRouteFrom:(CDStruct_c3b9c2ee)arg1 startDistance:(double)arg2 endDistance:(double)arg3;
- (double)distanceToRouteFrom:(CDStruct_c3b9c2ee)arg1;
- (id)matchToClosestPointOnRouteWithLocation:(id)arg1;
- (id)matchToRouteWithLocation:(id)arg1 previousRouteMatch:(id)arg2;
- (id)matchToRouteWithLocation:(id)arg1;
- (void)dealloc;
- (id)initWithRoute:(id)arg1;

@end

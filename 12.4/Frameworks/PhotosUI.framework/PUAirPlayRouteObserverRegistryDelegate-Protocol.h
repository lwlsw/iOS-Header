//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class PUAirPlayRouteObserverRegistry;
@protocol PHAirPlayControllerRouteObserver;

@protocol PUAirPlayRouteObserverRegistryDelegate <NSObject>
- (void)airPlayRouteObserverRegistryRouteAvailabilityChanged:(PUAirPlayRouteObserverRegistry *)arg1 forRouteObserver:(id <PHAirPlayControllerRouteObserver>)arg2;
@end

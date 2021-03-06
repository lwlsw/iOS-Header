//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AuxiliaryTask-Protocol.h"
#import "NavigationSessionObserver-Protocol.h"

@class MKMapService, NSString, NavigationSession;

__attribute__((visibility("hidden")))
@interface NavigationIntentCapturer : NSObject <NavigationSessionObserver, AuxiliaryTask>
{
    MKMapService *_mapService;
    NavigationSession *_navigationSession;
}

@property(retain, nonatomic) NavigationSession *navigationSession; // @synthesize navigationSession=_navigationSession;
@property(readonly, nonatomic) MKMapService *mapService; // @synthesize mapService=_mapService;
- (void).cxx_destruct;
- (void)navigationSession:(id)arg1 didChangeCurrentTransportType:(long long)arg2;
- (void)navigationSession:(id)arg1 didUpdateRouteCollection:(id)arg2;
- (void)mapsSession:(id)arg1 didChangeState:(unsigned long long)arg2;
- (void)platformController:(id)arg1 didChangeCurrentSessionFromSession:(id)arg2 toSession:(id)arg3;
- (void)platformController:(id)arg1 willChangeCurrentSessionFromSession:(id)arg2 toSession:(id)arg3;
- (void)captureUserAction:(int)arg1;
- (void)captureStartNavigationIntent;
- (id)initWithMapService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


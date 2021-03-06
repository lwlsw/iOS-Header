//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class MKMuninGestureController, VKLabelMarker;

@protocol MKMuninGestureControllerDelegate <NSObject>
- (void)muninGestureControllerDidPan:(MKMuninGestureController *)arg1;
- (void)muninGestureController:(MKMuninGestureController *)arg1 didZoomWithDirection:(long long)arg2 type:(long long)arg3;
- (void)muninGestureController:(MKMuninGestureController *)arg1 didTapAtPoint:(struct CGPoint)arg2 areaAvailable:(_Bool)arg3;
- (void)muninGestureController:(MKMuninGestureController *)arg1 didTapLabelMarker:(VKLabelMarker *)arg2;
- (void)muninGestureControllerDidStopUserInteraction:(MKMuninGestureController *)arg1;
- (void)muninGestureControllerDidStartUserInteraction:(MKMuninGestureController *)arg1;
@end


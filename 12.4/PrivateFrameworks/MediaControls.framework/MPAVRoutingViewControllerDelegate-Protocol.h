//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaControls/NSObject-Protocol.h>

@class MPAVRoute, MPAVRoutingViewController;

@protocol MPAVRoutingViewControllerDelegate <NSObject>

@optional
- (void)routingViewControllerDidShowAirPlayDebugScreen:(MPAVRoutingViewController *)arg1;
- (void)routingViewControllerDidUpdateContents:(MPAVRoutingViewController *)arg1;
- (void)routingViewController:(MPAVRoutingViewController *)arg1 didPickRoute:(MPAVRoute *)arg2;
@end

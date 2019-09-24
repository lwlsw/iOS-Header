//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import <GameCenterUI/GKBubbleFlowableViewController-Protocol.h>

@class GKRemoteUIController, NSString;

@interface GKRemoteUINavigationController : UINavigationController <GKBubbleFlowableViewController>
{
    GKRemoteUIController *_remoteUIController;
}

@property(readonly, nonatomic) GKRemoteUIController *remoteUIController; // @synthesize remoteUIController=_remoteUIController;
- (void).cxx_destruct;
- (_Bool)_gkCanBeRemovedFromParentWhenCovered;
- (_Bool)_gkUsesBubbleFlowModalPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (void)loadView;
- (id)initWithRemoteUIController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

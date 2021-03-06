//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class PUModalTransition, PUNavigationTransition;

@interface UIViewController (CustomTransitions)
- (void)pu_dismissViewControllerAnimated:(_Bool)arg1 interactive:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)pu_presentViewController:(id)arg1 transition:(id)arg2 animated:(_Bool)arg3 interactive:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
@property(readonly, nonatomic) PUNavigationTransition *pu_currentInteractiveNavigationTransition;
@property(readonly, nonatomic) PUModalTransition *pu_currentInteractiveModalTransition;
- (void)pu_restoreNavigationTransition;
- (void)pu_removeNavigationTransition;
@property(retain, nonatomic, setter=pu_setNavigationTransition:) PUNavigationTransition *pu_navigationTransition;
@property(retain, nonatomic, setter=pu_setModalTransition:) PUModalTransition *pu_modalTransition;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <IntentsUI/_INUIRemoteViewControllerServing-Protocol.h>

@class INInteraction, NSString;
@protocol INUIHostedViewControlling;

__attribute__((visibility("hidden")))
@interface _INUIServiceViewController : UIViewController <_INUIRemoteViewControllerServing>
{
    UIViewController<INUIHostedViewControlling> *_hostedViewController;
    INInteraction *_currentInteraction;
    unsigned long long _currentContext;
}

+ (_Bool)_isSecureForRemoteViewService;
+ (id)_remoteViewControllerInterface;
+ (id)_exportedInterface;
- (void).cxx_destruct;
- (struct CGSize)_constrainedSizeForDesiredSize:(struct CGSize)arg1;
- (void)queryRepresentedPropertiesWithCompletion:(CDUnknownBlockType)arg1;
- (void)desiresInteractivity:(CDUnknownBlockType)arg1;
- (void)viewWasCancelled;
- (void)configureForParameters:(id)arg1 ofInteraction:(id)arg2 interactiveBehavior:(unsigned long long)arg3 context:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (id)_errorHandlingRemoteViewControllerProxy;
- (void)viewWillLayoutSubviews;
- (void)addChildViewController:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCPaidAccessCheckerType-Protocol.h>

@class FCPurchaseController;
@protocol FCBundleSubscriptionManagerType, FCBundleSubscriptionProviderType, FCCoreConfigurationManager, FCPurchaseProviderType;

@interface FCPaidAccessChecker : NSObject <FCPaidAccessCheckerType>
{
    FCPurchaseController *_purchaseController;
    id <FCBundleSubscriptionManagerType> _bundleSubscriptionManager;
    id <FCCoreConfigurationManager> _configurationManager;
}

@property(readonly, nonatomic) id <FCCoreConfigurationManager> configurationManager; // @synthesize configurationManager=_configurationManager;
@property(readonly, nonatomic) id <FCBundleSubscriptionManagerType> bundleSubscriptionManager; // @synthesize bundleSubscriptionManager=_bundleSubscriptionManager;
@property(readonly, nonatomic) FCPurchaseController *purchaseController; // @synthesize purchaseController=_purchaseController;
- (void).cxx_destruct;
- (_Bool)_canGetBundleSubscriptionToChannel:(id)arg1;
- (_Bool)_canGetALaCarteSubscriptionToChannel:(id)arg1;
@property(readonly, nonatomic) id <FCBundleSubscriptionProviderType> bundleSubscriptionProvider;
@property(readonly, nonatomic) id <FCPurchaseProviderType> purchaseProvider;
- (void)prepareForUseWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)isPreparedForUse;
- (_Bool)canGetBundleSubscriptionToChannel:(id)arg1;
- (_Bool)canGetSubscriptionToChannel:(id)arg1;
- (_Bool)canGetAccessToItemPaid:(_Bool)arg1 bundlePaid:(_Bool)arg2 channel:(id)arg3;
- (id)initWithPurchaseController:(id)arg1 bundleSubscriptionManager:(id)arg2 configurationManager:(id)arg3;

@end

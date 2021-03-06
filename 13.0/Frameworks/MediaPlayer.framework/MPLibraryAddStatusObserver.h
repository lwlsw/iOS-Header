//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ICUserIdentity, MPCloudController, MPCloudServiceStatusController, MPModelObject;

@interface MPLibraryAddStatusObserver : NSObject
{
    _Bool _needsStatusUpdate;
    MPCloudController *_cloudController;
    MPCloudServiceStatusController *_cloudServiceStatusController;
    struct MPLibraryAddStatusObserverConfiguration _configuration;
    unsigned long long _currentStatus;
    CDUnknownBlockType _statusBlock;
    MPModelObject *_identifyingModelObject;
    ICUserIdentity *_userIdentity;
}

@property(readonly, nonatomic) ICUserIdentity *userIdentity; // @synthesize userIdentity=_userIdentity;
@property(readonly, nonatomic) MPModelObject *identifyingModelObject; // @synthesize identifyingModelObject=_identifyingModelObject;
@property(readonly, nonatomic) struct MPLibraryAddStatusObserverConfiguration configuration; // @synthesize configuration=_configuration;
@property(copy, nonatomic) CDUnknownBlockType statusBlock; // @synthesize statusBlock=_statusBlock;
@property(readonly, nonatomic) unsigned long long currentStatus; // @synthesize currentStatus=_currentStatus;
- (void).cxx_destruct;
- (void)_updateCurrentStatus;
- (unsigned long long)_calculateCurrentStatus;
- (void)_updateInProgressDidChangeNotification:(id)arg1;
- (void)_transientStateDidChangeNotification:(id)arg1;
- (void)_subscriptionStatusDidChangeNotification:(id)arg1;
- (void)_cloudLibraryEnabledDidChangeNotification:(id)arg1;
- (void)_allowsExplicitContentDidChangeNotification:(id)arg1;
- (void)setConfiguration:(struct MPLibraryAddStatusObserverConfiguration)arg1 identifyingModelObject:(id)arg2;
- (void)configureWithModelObject:(id)arg1;
- (void)dealloc;
- (id)initWithUserIdentity:(id)arg1;
- (id)init;

@end


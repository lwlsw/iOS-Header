//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSInvalidatable-Protocol.h>

@class NSString, SBDeviceOrientationUpdateManager;

@interface SBDeviceOrientationUpdateDeferralAssertion : NSObject <BSInvalidatable>
{
    _Bool _invalidated;
    NSString *_reason;
    SBDeviceOrientationUpdateManager *_hackyBackReference;
}

@property(readonly, nonatomic, getter=isInvalidated) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(nonatomic, setter=_setHackyBackReference:) __weak SBDeviceOrientationUpdateManager *hackyBackReference; // @synthesize hackyBackReference=_hackyBackReference;
@property(readonly, copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)invalidate;
- (void)dealloc;
- (id)initWithReason:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

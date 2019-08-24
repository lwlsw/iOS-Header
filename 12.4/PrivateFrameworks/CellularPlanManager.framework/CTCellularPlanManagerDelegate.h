//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CellularPlanManager/CTCellularPlanClientDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CTCellularPlanManagerDelegate : NSObject <CTCellularPlanClientDelegate>
{
}

- (void)remoteProvisioningDidBecomeAvailable;
- (void)carrierInfoDidUpdate;
- (void)localPlanInfoDidUpdate:(id)arg1;
- (void)planInfoDidUpdate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

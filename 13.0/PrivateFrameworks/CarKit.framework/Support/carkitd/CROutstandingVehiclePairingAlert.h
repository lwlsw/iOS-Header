//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CRVehicleAccessoryAlert.h"

@interface CROutstandingVehiclePairingAlert : CRVehicleAccessoryAlert
{
    _Bool _shouldEnableBluetooth;
    unsigned long long _declineType;
}

@property(nonatomic) unsigned long long declineType; // @synthesize declineType=_declineType;
@property(nonatomic) _Bool shouldEnableBluetooth; // @synthesize shouldEnableBluetooth=_shouldEnableBluetooth;
- (id)alertDeclinedAnalyticsKey;
- (id)alertAcceptedAnalyticsKey;
- (id)alertDeclineButtonTitle;
- (id)alertAcceptButtonTitle;
- (id)alertMessage;
- (id)alertTitle;

@end

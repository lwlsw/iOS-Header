//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EAAccessory, NSArray, NSData, NSNumber, NSString;

@interface CRVehicleAccessory : NSObject
{
    _Bool _supportsUSBCarPlay;
    _Bool _supportsWirelessCarPlay;
    _Bool _supportsWiredBluetoothPairing;
    _Bool _supportsEnhancedIntegration;
    NSString *_vehicleName;
    NSString *_vehicleModelName;
    NSData *_certificateSerialNumber;
    NSArray *_accessoryProtocols;
    NSString *_bluetoothAddress;
    NSString *_PPID;
    NSNumber *_connectionID;
    EAAccessory *_accessory;
}

@property(nonatomic) __weak EAAccessory *accessory; // @synthesize accessory=_accessory;
@property(retain, nonatomic) NSNumber *connectionID; // @synthesize connectionID=_connectionID;
@property(retain, nonatomic) NSString *PPID; // @synthesize PPID=_PPID;
@property(nonatomic) _Bool supportsEnhancedIntegration; // @synthesize supportsEnhancedIntegration=_supportsEnhancedIntegration;
@property(nonatomic) _Bool supportsWiredBluetoothPairing; // @synthesize supportsWiredBluetoothPairing=_supportsWiredBluetoothPairing;
@property(nonatomic) _Bool supportsWirelessCarPlay; // @synthesize supportsWirelessCarPlay=_supportsWirelessCarPlay;
@property(nonatomic) _Bool supportsUSBCarPlay; // @synthesize supportsUSBCarPlay=_supportsUSBCarPlay;
@property(retain, nonatomic) NSString *bluetoothAddress; // @synthesize bluetoothAddress=_bluetoothAddress;
@property(retain, nonatomic) NSArray *accessoryProtocols; // @synthesize accessoryProtocols=_accessoryProtocols;
@property(retain, nonatomic) NSData *certificateSerialNumber; // @synthesize certificateSerialNumber=_certificateSerialNumber;
@property(retain, nonatomic) NSString *vehicleModelName; // @synthesize vehicleModelName=_vehicleModelName;
@property(retain, nonatomic) NSString *vehicleName; // @synthesize vehicleName=_vehicleName;
- (void).cxx_destruct;
- (void)sendDeviceTransportIdentifiers;
- (void)requestWiFiCredentials;
- (void)beginWiredBluetoothPairing:(CDUnknownBlockType)arg1;
- (_Bool)_updateName;
- (id)vehicleAccessoryInfoKeys;
- (id)analyticsDescription;
- (id)radarDescription;
- (id)description;
- (id)displayName;
- (_Bool)isBluetoothConnected;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CarKit/NSSecureCoding-Protocol.h>

@class NSData, NSDate, NSSet, NSString, NSUUID;

@interface CRVehicle : NSObject <NSSecureCoding>
{
    _Bool _supportsEnhancedIntegration;
    NSUUID *_identifier;
    NSString *_vehicleName;
    NSSet *_accessoryProtocols;
    unsigned long long _enhancedIntegrationStatus;
    NSData *_certificateSerialNumber;
    unsigned long long _pairingStatus;
    NSString *_bluetoothAddress;
    NSString *_carplayWiFiUUID;
    NSDate *_lastConnectedDate;
    NSString *_vehicleModelName;
    NSString *_PPID;
    NSString *_internalNotes;
    long long _albumArtUserPreference;
}

+ (id)vehicleForVehicleAccessory:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long albumArtUserPreference; // @synthesize albumArtUserPreference=_albumArtUserPreference;
@property(retain, nonatomic) NSString *internalNotes; // @synthesize internalNotes=_internalNotes;
@property(retain, nonatomic) NSString *PPID; // @synthesize PPID=_PPID;
@property(retain, nonatomic) NSString *vehicleModelName; // @synthesize vehicleModelName=_vehicleModelName;
@property(retain, nonatomic) NSDate *lastConnectedDate; // @synthesize lastConnectedDate=_lastConnectedDate;
@property(retain, nonatomic) NSString *carplayWiFiUUID; // @synthesize carplayWiFiUUID=_carplayWiFiUUID;
@property(retain, nonatomic) NSString *bluetoothAddress; // @synthesize bluetoothAddress=_bluetoothAddress;
@property(nonatomic) unsigned long long pairingStatus; // @synthesize pairingStatus=_pairingStatus;
@property(retain, nonatomic) NSData *certificateSerialNumber; // @synthesize certificateSerialNumber=_certificateSerialNumber;
@property(nonatomic) unsigned long long enhancedIntegrationStatus; // @synthesize enhancedIntegrationStatus=_enhancedIntegrationStatus;
@property(nonatomic) _Bool supportsEnhancedIntegration; // @synthesize supportsEnhancedIntegration=_supportsEnhancedIntegration;
@property(retain, nonatomic) NSSet *accessoryProtocols; // @synthesize accessoryProtocols=_accessoryProtocols;
@property(retain, nonatomic) NSString *vehicleName; // @synthesize vehicleName=_vehicleName;
@property(retain, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)displayName;
- (void)mergeAttributesFromVehicle:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)_enhancedIntegrationDebugDescription;
@property(readonly, nonatomic) _Bool isEnhancedIntegrationEnabled;
- (id)_pairingDebugDescription;
@property(readonly, nonatomic) _Bool isPaired;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 certificateSerial:(id)arg2;
- (id)init;

@end

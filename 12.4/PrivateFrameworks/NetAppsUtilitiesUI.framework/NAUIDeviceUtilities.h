//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NAUIDeviceUtilities : NSObject
{
}

+ (double)mainScreenScale;
+ (_Bool)hasOrbCapability;
+ (id)uniqueDeviceIdentifier;
+ (id)operatingSystemName;
+ (id)localizedProductName;
+ (int)deviceClass;
+ (id)productClass;
+ (id)productHardwareModelName;
+ (id)productHardwareModel;
+ (id)productType;
+ (id)productBuildVersion;
+ (id)productVersion;
+ (_Bool)naui_isUsingLandscapeOrientation;
+ (_Bool)naui_shouldUseLargeiPadLayoutForSize:(struct CGSize)arg1;
+ (_Bool)naui_shouldUseLargeiPadLayout;
+ (_Bool)naui_isPad;
- (id)init;

@end


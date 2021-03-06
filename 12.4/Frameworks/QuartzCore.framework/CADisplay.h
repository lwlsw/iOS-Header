//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayAttributes, CADisplayMode, CADisplayPreferences, NSArray, NSString;

@interface CADisplay : NSObject
{
    void *_impl;
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)TVOutDisplay;
+ (id)mainDisplay;
+ (id)displays;
- (id)allowedHDRModes;
- (id)preferredHDRModes;
- (id)supportedHDRModes;
- (id)preferredModeWithCriteria:(id)arg1;
@property(copy, nonatomic) CADisplayPreferences *preferences;
@property(readonly, nonatomic) int linkQuality;
@property(readonly, nonatomic) CADisplayAttributes *externalDisplayAttributes;
- (id)description;
@property(readonly, nonatomic) _Bool supportsExtendedColors;
@property(readonly, nonatomic) unsigned int odLUTVersion;
@property(readonly, nonatomic) NSString *currentOrientation;
@property(readonly, nonatomic) NSString *nativeOrientation;
@property(readonly, nonatomic, getter=isCloningSupported) _Bool cloningSupported;
@property(readonly, nonatomic, getter=isCloned) _Bool cloned;
@property(copy, nonatomic) NSString *overscanAdjustment;
@property(readonly, nonatomic) struct CGSize overscanAmounts;
@property(readonly, nonatomic) double overscanAmount;
@property(readonly, nonatomic, getter=isOverscanned) _Bool overscanned;
@property(readonly, nonatomic) long long minimumFrameDuration;
@property(readonly, nonatomic) double heartbeatRate;
@property(readonly, nonatomic) double refreshRate;
@property(readonly, nonatomic, getter=isExternal) _Bool external;
@property(readonly, nonatomic, getter=isSupported) _Bool supported;
@property(readonly, nonatomic) int processId;
@property(readonly, nonatomic) long long tag;
@property(readonly, nonatomic) struct CGRect safeBounds;
@property(readonly, nonatomic) struct CGRect frame;
@property(readonly, nonatomic) struct CGRect bounds;
@property _Bool allowsVirtualModes;
@property(copy, nonatomic) NSString *colorMode;
@property(readonly, nonatomic) CADisplayMode *preferredMode;
@property(retain, nonatomic) CADisplayMode *currentMode;
@property(readonly, nonatomic) NSArray *availableModes;
@property(readonly, nonatomic) NSString *productName;
@property(readonly, nonatomic) NSString *containerId;
@property(readonly, nonatomic) NSString *uniqueId;
@property(readonly, nonatomic) unsigned int connectionSeed;
@property(readonly, nonatomic) unsigned int seed;
@property(readonly, nonatomic) unsigned int displayId;
@property(readonly, nonatomic) NSString *deviceName;
@property(readonly, nonatomic) NSString *name;
- (_Bool)setDisplayProperties:(id)arg1;
- (id)immutableCopy;
- (void)update;
- (void)_invalidate;
- (void)dealloc;
- (id)_initWithDisplay:(struct Display *)arg1;

@end


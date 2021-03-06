//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol HFCharacteristicValueSource;

@interface HFDemoModeAccessoryManager : NSObject
{
    id <HFCharacteristicValueSource> _valueSource;
    NSArray *_demoAccessories;
}

+ (id)imageIconDescriptorFromDictionary:(id)arg1;
+ (_Bool)isPressDemoModeEnabled;
+ (id)demoModeDirectoryURL;
+ (id)profileURLForDemoModeAccessoryName:(id)arg1;
+ (id)accessoryWithContentsOfDictionary:(id)arg1 forHome:(id)arg2;
+ (id)configurationProfileFromAccessoryType:(id)arg1;
+ (_Bool)isInternalAccessoryType:(id)arg1;
+ (_Bool)isValidExternalType:(id)arg1;
+ (id)accessoryProfileName:(id)arg1;
+ (id)sharedManager;
@property(retain, nonatomic) NSArray *demoAccessories; // @synthesize demoAccessories=_demoAccessories;
@property(readonly, nonatomic) id <HFCharacteristicValueSource> valueSource; // @synthesize valueSource=_valueSource;
- (void).cxx_destruct;
- (void)dispatchUpdateMessageForAccessory:(id)arg1;
- (void)saveAccessories;
- (id)accessories;
- (id)initWithNullValueSource:(id)arg1;

@end


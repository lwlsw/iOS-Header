//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CNPhotoPickerVariantsManager : NSObject
{
    NSArray *_avatarBackgrounds;
}

+ (id)generateGradientColorsByColor;
+ (id)compositeColorForTopColor:(id)arg1 bottomColor:(id)arg2;
+ (id)nonAlphaColorForBackgroundColor:(id)arg1;
+ (id)gradientStartColor:(id)arg1;
+ (id)colorGradientBackground:(id)arg1;
+ (id)colorVariantWithColorNamed:(id)arg1;
+ (id)colorFromRGBString:(id)arg1;
+ (id)colorFromRGBArray:(id)arg1;
+ (id)avatarBackgroundsFromDictionary:(id)arg1;
@property(retain, nonatomic) NSArray *avatarBackgrounds; // @synthesize avatarBackgrounds=_avatarBackgrounds;
- (void).cxx_destruct;
- (id)avatarPoseConfigurationsForAvatarRecord:(id)arg1;
- (id)init;

@end

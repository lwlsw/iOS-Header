//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WeatherFoundation/WFWeatherConditions.h>

@class NSDate, NSString, UIColor;

@interface WFWeatherConditions (NWMLocalizedWind)
+ (int)_preferredWindSpeedUnitForLocale:(id)arg1;
+ (id)_localizedStringForWindspeed:(double)arg1 withUnit:(int)arg2 forLocale:(id)arg3;
+ (id)_localizedArrayForWindspeed:(double)arg1 withUnit:(int)arg2 forLocale:(id)arg3;
+ (id)nwm_localizedWindpeedUnit;
+ (id)_nwc_prefixForFamily:(long long)arg1;
+ (id)nwc_noDataImageForComplicationFamily:(long long)arg1;
+ (id)_nwm_shortSuffixedKey:(id)arg1;
+ (id)nwm_localizedNoDataRounded;
+ (id)nwm_localizedNoData;
+ (id)nwm_localizedDescriptionShortForConditionCode:(unsigned long long)arg1 timeOfDay:(unsigned long long)arg2;
+ (id)nwm_localizedDescriptionKeyForConditionCode:(unsigned long long)arg1 timeOfDay:(unsigned long long)arg2;
+ (id)nwm_localizedDescriptionForConditionCode:(unsigned long long)arg1 timeOfDay:(unsigned long long)arg2;
+ (id)nwc_ultravioletIndexCategoryColorUnknown;
+ (id)nwc_ultravioletIndexCategoryColorSpectrum;
- (double)_speedByConverting:(double)arg1 toUnit:(int)arg2;
- (id)_localizedWindDirectionAbbreviation:(_Bool)arg1;
- (unsigned long long)_indexOfWindDirectionKeyForWindDirectionInDegrees:(double)arg1 keys:(id)arg2;
- (id)nwm_windDirectionKey;
@property(readonly, nonatomic) NSString *nwm_localizedWindspeedWithoutUnit;
@property(readonly, nonatomic) NSString *nwm_localizedWindspeedWithUnit;
@property(readonly, nonatomic) NSString *nwm_localizedWindDirection;
@property(readonly, nonatomic) NSString *nwm_localizedWindDirectionAbbreviationCompact;
@property(readonly, nonatomic) NSString *nwm_localizedWindDirectionAbbreviation;
- (unsigned long long)_nwc_code;
- (id)nwc_nighttimeConditionImageForComplicationFamily:(long long)arg1;
- (id)nwc_daytimeConditionImageForComplicationFamily:(long long)arg1;
- (id)nwc_conditionImageProviderForComplicationFamily:(long long)arg1;
- (id)nwc_conditionImageForComplicationFamily:(long long)arg1;
- (unsigned long long)nw_timeOfDay;
@property(readonly, nonatomic) NSString *nwm_localizedDescriptionShort;
@property(readonly, nonatomic) NSString *nwm_localizedDescriptionKey;
@property(readonly, nonatomic) NSString *nwm_localizedDescription;
@property(readonly, nonatomic) NSString *nwc_ultravioletIndexRiskDescription;
@property(readonly, nonatomic) UIColor *nwc_ultravioletIndexCategoryColor;
@property(readonly, nonatomic) unsigned long long nwc_ultravioletIndexCategory;
@property(readonly, nonatomic) NSDate *nwc_expirationDate;
@property(readonly, nonatomic) NSDate *nwc_date;
@property(readonly, nonatomic) unsigned long long nwm_ultravioletIndexCategory;
@property(readonly, nonatomic) NSString *nwm_localizedUltravioletIndexRiskDescription;
@end

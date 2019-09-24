//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSDate.h>

@interface NSDate (FRAdditions)
+ (id)randomDateBeforeNow;
+ (id)_fr_sharedShortDateDateFormatter;
+ (id)_fr_sharedShortTimeDateFormatter;
+ (id)_fr_sharedDayOfWeekDateFormatter;
+ (id)_fr_sharedGregorianCalendar;
- (id)fr_localDate;
- (id)fr_gregorianLongDisplayString;
- (id)fr_gregorianMediumDisplayString;
- (id)fr_gregorianShortDisplayString;
- (id)fr_gregorianLongDisplayStringPreferringToday;
- (id)fr_gregorianMediumDisplayStringPreferringToday;
- (id)fr_gregorianShortDisplayStringPreferringToday;
- (id)fr_partOfDay;
- (id)stringWithTopStoriesFormat;
- (id)stringWithFormat:(id)arg1;
@property(readonly, nonatomic) _Bool isYesterday;
@property(readonly, nonatomic) _Bool isToday;
@end

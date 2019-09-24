//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSCalendar, NSDate, NSTimeZone;

@interface CalRecurrenceGenerator : NSObject
{
    NSCalendar *_calendar;
    _Bool _allDay;
    _Bool _shouldPinMonthDays;
    int _interval;
    int _frequency;
    NSDate *_eventStartDate;
    NSDate *_eventEndDate;
    NSTimeZone *_eventTimeZone;
    NSDate *_endDate;
    NSArray *_daysOfTheWeek;
    NSArray *_daysOfTheMonth;
    NSArray *_daysOfTheYear;
    NSArray *_weeksOfTheYear;
    NSArray *_monthsOfTheYear;
    NSArray *_setPositions;
    unsigned long long _weekStart;
}

@property(nonatomic) _Bool shouldPinMonthDays; // @synthesize shouldPinMonthDays=_shouldPinMonthDays;
@property(nonatomic) unsigned long long weekStart; // @synthesize weekStart=_weekStart;
@property(nonatomic) int frequency; // @synthesize frequency=_frequency;
@property(nonatomic) int interval; // @synthesize interval=_interval;
@property(copy, nonatomic) NSArray *setPositions; // @synthesize setPositions=_setPositions;
@property(copy, nonatomic) NSArray *monthsOfTheYear; // @synthesize monthsOfTheYear=_monthsOfTheYear;
@property(copy, nonatomic) NSArray *weeksOfTheYear; // @synthesize weeksOfTheYear=_weeksOfTheYear;
@property(copy, nonatomic) NSArray *daysOfTheYear; // @synthesize daysOfTheYear=_daysOfTheYear;
@property(copy, nonatomic) NSArray *daysOfTheMonth; // @synthesize daysOfTheMonth=_daysOfTheMonth;
@property(copy, nonatomic) NSArray *daysOfTheWeek; // @synthesize daysOfTheWeek=_daysOfTheWeek;
@property(copy, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(nonatomic) _Bool allDay; // @synthesize allDay=_allDay;
@property(copy, nonatomic) NSTimeZone *eventTimeZone; // @synthesize eventTimeZone=_eventTimeZone;
@property(copy, nonatomic) NSDate *eventEndDate; // @synthesize eventEndDate=_eventEndDate;
@property(copy, nonatomic) NSDate *eventStartDate; // @synthesize eventStartDate=_eventStartDate;
- (void).cxx_destruct;
- (id)_copyYearlyOccurrencesWithInitialDate:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 count:(unsigned long long)arg4;
- (_Bool)_validateCalDate:(CDStruct_b0fa4487)arg1 pinned:(_Bool)arg2;
- (id)_copyMonthlyOccurrencesWithInitialDate:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 count:(unsigned long long)arg4;
- (id)_copyWeeklyOccurrencesWithInitialDate:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 count:(unsigned long long)arg4;
- (id)_copyDailyOccurrencesWithInitialDate:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 count:(unsigned long long)arg4;
- (id)copyOccurrenceDatesBetweenStartDate:(CDStruct_b0fa4487)arg1 endDate:(CDStruct_b0fa4487)arg2 timeZone:(id)arg3 limit:(long long)arg4;
- (double)_convertAbsoluteTime:(double)arg1 fromTimeZone:(id)arg2 toTimeZone:(id)arg3;
- (double)duration;
- (_Bool)_isSimpleYearlyRecurrence;
- (id)computeRecurrenceEndDate:(unsigned long long)arg1;
- (id)copyOccurrenceDatesWithInitialDate:(id)arg1 allDay:(_Bool)arg2 rangeStart:(id)arg3 rangeEnd:(id)arg4 timeZone:(id)arg5 limit:(long long)arg6;
- (id)copyOccurrenceDatesWithInitialDate:(id)arg1 rangeStart:(id)arg2 rangeEnd:(id)arg3 timeZone:(id)arg4;
- (id)init;

@end

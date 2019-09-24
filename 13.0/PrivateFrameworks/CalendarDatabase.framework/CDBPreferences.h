//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CalPreferences;

@interface CDBPreferences : NSObject
{
    CalPreferences *_preferences;
}

+ (id)shared;
- (void).cxx_destruct;
@property(readonly) _Bool has_LastConfirmedSplashScreenVersionViewed;
@property(nonatomic, getter=get_LastConfirmedSplashScreenVersionViewed, setter=set_LastConfirmedSplashScreenVersionViewed:) long long LastConfirmedSplashScreenVersionViewed;
@property(readonly) _Bool has_kCalRemindersPreferredDaysToSyncKey;
@property(nonatomic, getter=get_kCalRemindersPreferredDaysToSyncKey, setter=set_kCalRemindersPreferredDaysToSyncKey:) long long kCalRemindersPreferredDaysToSyncKey;
@property(readonly) _Bool has_kCalPreferredDaysToSyncKey;
@property(nonatomic, getter=get_kCalPreferredDaysToSyncKey, setter=set_kCalPreferredDaysToSyncKey:) long long kCalPreferredDaysToSyncKey;
@property(readonly) _Bool has_suggestedLocationsTestMode;
@property(nonatomic, getter=get_suggestedLocationsTestMode, setter=set_suggestedLocationsTestMode:) _Bool suggestedLocationsTestMode;
@property(readonly) _Bool has_sqlProfileLoggingEnabled;
@property(nonatomic, getter=get_sqlProfileLoggingEnabled, setter=set_sqlProfileLoggingEnabled:) _Bool sqlProfileLoggingEnabled;
@property(readonly) _Bool has_suggestEventLocations;
@property(nonatomic, getter=get_suggestEventLocations, setter=set_suggestEventLocations:) _Bool suggestEventLocations;
@property(readonly) _Bool has_enableTravelAdvisoriesForAutomaticBehavior;
@property(nonatomic, getter=get_enableTravelAdvisoriesForAutomaticBehavior, setter=set_enableTravelAdvisoriesForAutomaticBehavior:) _Bool enableTravelAdvisoriesForAutomaticBehavior;
- (void)migrateIfNeededWithOptions:(unsigned long long)arg1;
- (_Bool)needsMigration;
- (void)_setVersion:(unsigned long long)arg1;
- (unsigned long long)_version;
- (id)init;

@end

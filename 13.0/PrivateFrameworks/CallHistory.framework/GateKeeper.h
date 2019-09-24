//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CallHistory/CHLogger.h>

@interface GateKeeper : CHLogger
{
    _Bool _hasDeviceBeenUnlockedSinceBoot;
}

+ (id)instance;
@property _Bool hasDeviceBeenUnlockedSinceBoot; // @synthesize hasDeviceBeenUnlockedSinceBoot=_hasDeviceBeenUnlockedSinceBoot;
- (void)cacheUnlockSinceBootState;
- (void)setupMobileKeyBag;
- (void)reFetch;
- (id)init;

@end

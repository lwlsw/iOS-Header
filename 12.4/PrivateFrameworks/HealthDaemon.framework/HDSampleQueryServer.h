//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDBatchedQueryServer.h>

@class NSArray;

@interface HDSampleQueryServer : HDBatchedQueryServer
{
    _Bool _suspended;
    _Bool _includeTimeZones;
    unsigned long long _limit;
    NSArray *_sortDescriptors;
}

+ (_Bool)supportsAnchorBasedAuthorization;
+ (id)requiredEntitlements;
+ (Class)queryClass;
@property(readonly, nonatomic) _Bool includeTimeZones; // @synthesize includeTimeZones=_includeTimeZones;
@property(readonly, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property(readonly, nonatomic) unsigned long long limit; // @synthesize limit=_limit;
- (void).cxx_destruct;
- (void)_queue_start;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 profile:(id)arg4 delegate:(id)arg5;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthMenstrualCycles/NSSecureCoding-Protocol.h>

@class HKMCCycleSegment, NSNumber;

@interface HKMCCycle : NSObject <NSSecureCoding>
{
    HKMCCycleSegment *_menstruationSegment;
    HKMCCycleSegment *_fertileWindowSegment;
    NSNumber *_lastDayIndex;
}

+ (_Bool)supportsSecureCoding;
+ (id)_cycleWithMenstruationSegment:(id)arg1 fertileWindowSegment:(id)arg2 lastDayIndex:(id)arg3;
@property(readonly, nonatomic) NSNumber *lastDayIndex; // @synthesize lastDayIndex=_lastDayIndex;
@property(readonly, nonatomic) HKMCCycleSegment *fertileWindowSegment; // @synthesize fertileWindowSegment=_fertileWindowSegment;
@property(readonly, nonatomic) HKMCCycleSegment *menstruationSegment; // @synthesize menstruationSegment=_menstruationSegment;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)redactedDescription;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_initWithMenstruationSegment:(id)arg1 fertileWindowSegment:(id)arg2 lastDayIndex:(id)arg3;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSNumber;

@interface HKHistogramChartDataSourceBin : NSObject
{
    NSMutableArray *_backingValues;
}

- (void).cxx_destruct;
- (void)addValue:(id)arg1;
- (id)initWithValues:(id)arg1;
- (id)init;
@property(readonly, nonatomic) NSNumber *maximumValue;
@property(readonly, nonatomic) NSNumber *minimumValue;
@property(readonly, nonatomic) NSNumber *averageValue;
@property(readonly, nonatomic) NSNumber *sumValue;
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, copy, nonatomic) NSArray *sortedValues;
@property(readonly, copy, nonatomic) NSArray *values;

@end

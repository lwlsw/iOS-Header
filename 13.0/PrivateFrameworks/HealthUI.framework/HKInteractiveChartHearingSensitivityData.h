//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKGraphSeriesChartData-Protocol.h>

@class NSString;

@interface HKInteractiveChartHearingSensitivityData : NSObject <HKGraphSeriesChartData>
{
    _Bool _isLeftEar;
    _Bool _isAverage;
    double _sensitivityDbHL;
}

@property(nonatomic) _Bool isAverage; // @synthesize isAverage=_isAverage;
@property(nonatomic) _Bool isLeftEar; // @synthesize isLeftEar=_isLeftEar;
@property(nonatomic) double sensitivityDbHL; // @synthesize sensitivityDbHL=_sensitivityDbHL;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

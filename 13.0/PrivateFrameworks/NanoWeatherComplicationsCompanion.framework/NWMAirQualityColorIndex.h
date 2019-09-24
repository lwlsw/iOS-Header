//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoWeatherComplicationsCompanion/NWColorIndex.h>

#import <NanoWeatherComplicationsCompanion/NWColorIndexable-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NWMAirQualityColorIndex : NWColorIndex <NWColorIndexable>
{
}

+ (id)colorIndexWithIndex:(double)arg1 color:(id)arg2;
+ (id)colorForIndex:(unsigned long long)arg1;
+ (unsigned long long)lastIndex;
+ (id)allIndices;
- (id)initWithIndex:(double)arg1 color:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

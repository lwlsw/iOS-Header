//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFPowerStateControlItem.h>

@interface HFValveActiveStateControlItem : HFPowerStateControlItem
{
}

- (id)_iconDescriptorForServiceSubtype:(id)arg1 inUse:(_Bool)arg2 active:(_Bool)arg3 hasFaucetAsParentService:(_Bool)arg4;
- (id)_faucetValveSubtypeToInactiveIconIdentifierMap;
- (id)_faucetValveSubtypeToActiveIconIdentifierMap;
- (id)resultsForBatchReadResponse:(id)arg1;
- (id)writeValue:(id)arg1;
- (id)servicePredicateForCharacteristicType:(id)arg1 withUsage:(unsigned long long)arg2;
- (id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2;
- (id)initWithValueSource:(id)arg1 auxiliaryTargetValueTuples:(id)arg2 additionalCharacteristicOptions:(id)arg3 displayResults:(id)arg4;
- (id)initWithValueSource:(id)arg1 displayResults:(id)arg2;

@end

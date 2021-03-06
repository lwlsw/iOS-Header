//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, PGGraphAddressNode;

@interface PGLocationTitleOptions : NSObject
{
    _Bool _useCities;
    _Bool _useTripTitleForLongDuration;
    _Bool _insertLineBreak;
    NSSet *_momentNodes;
    PGGraphAddressNode *_keyAssetAddressNode;
    NSSet *_curationAddressNodes;
    unsigned long long _aoiDisplayType;
    unsigned long long _peopleDisplayType;
    unsigned long long _filterSignificantLocationsType;
}

+ (id)onlyPeopleLocationTitleOptions;
@property(nonatomic) _Bool insertLineBreak; // @synthesize insertLineBreak=_insertLineBreak;
@property(nonatomic) unsigned long long filterSignificantLocationsType; // @synthesize filterSignificantLocationsType=_filterSignificantLocationsType;
@property(nonatomic) _Bool useTripTitleForLongDuration; // @synthesize useTripTitleForLongDuration=_useTripTitleForLongDuration;
@property(nonatomic) unsigned long long peopleDisplayType; // @synthesize peopleDisplayType=_peopleDisplayType;
@property(nonatomic) _Bool useCities; // @synthesize useCities=_useCities;
@property(nonatomic) unsigned long long aoiDisplayType; // @synthesize aoiDisplayType=_aoiDisplayType;
@property(retain, nonatomic) NSSet *curationAddressNodes; // @synthesize curationAddressNodes=_curationAddressNodes;
@property(retain, nonatomic) PGGraphAddressNode *keyAssetAddressNode; // @synthesize keyAssetAddressNode=_keyAssetAddressNode;
@property(retain, nonatomic) NSSet *momentNodes; // @synthesize momentNodes=_momentNodes;
- (void).cxx_destruct;
- (id)init;

@end


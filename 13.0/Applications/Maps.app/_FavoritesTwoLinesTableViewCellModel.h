//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_BasicTwoLinesTableViewCellModel.h"

@class MSPQuery;

__attribute__((visibility("hidden")))
@interface _FavoritesTwoLinesTableViewCellModel : _BasicTwoLinesTableViewCellModel
{
    MSPQuery *_observedQuery;
}

@property(retain, nonatomic) MSPQuery *observedQuery; // @synthesize observedQuery=_observedQuery;
- (void).cxx_destruct;
- (id)_secondaryTitleForPlaceCount:(unsigned long long)arg1 transitLineCount:(unsigned long long)arg2;
- (id)_secondaryTitleTransitLineOnly:(unsigned long long)arg1;
- (id)_secondaryTitlePlacesOnly:(unsigned long long)arg1;
- (void)_updateSubtitleWithContents:(id)arg1;

@end


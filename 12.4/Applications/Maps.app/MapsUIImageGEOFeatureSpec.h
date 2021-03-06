//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MapsUIImageSpec.h"

@class GEOFeatureStyleAttributes;

__attribute__((visibility("hidden")))
@interface MapsUIImageGEOFeatureSpec : MapsUIImageSpec
{
    _Bool _markerFallback;
    _Bool _transparent;
    GEOFeatureStyleAttributes *_style;
    unsigned long long _size;
}

@property(nonatomic) _Bool transparent; // @synthesize transparent=_transparent;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(copy, nonatomic) GEOFeatureStyleAttributes *style; // @synthesize style=_style;
@property(nonatomic) _Bool markerFallback; // @synthesize markerFallback=_markerFallback;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)imageForScale:(double)arg1 isCarPlay:(_Bool)arg2;
- (_Bool)useSearchImageFallback;
- (id)init;

@end


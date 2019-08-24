//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MapsAction.h"

@class DirectionItem, GEOURLTimePoint, NSDictionary;

__attribute__((visibility("hidden")))
@interface DirectionAction : MapsAction
{
    _Bool _fromWatch;
    DirectionItem *_directionItem;
    GEOURLTimePoint *_timePoint;
}

@property(nonatomic) _Bool fromWatch; // @synthesize fromWatch=_fromWatch;
@property(retain, nonatomic) GEOURLTimePoint *timePoint; // @synthesize timePoint=_timePoint;
@property(retain, nonatomic) DirectionItem *directionItem; // @synthesize directionItem=_directionItem;
- (void).cxx_destruct;
- (_Bool)isCompatibleWithNavigation;
@property(readonly, nonatomic) NSDictionary *userInfo;
- (id)initWithDirectionItem:(id)arg1 timePoint:(id)arg2 fromWatch:(_Bool)arg3;

@end

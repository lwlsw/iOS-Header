//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CollectionEditSession.h"

@class MKMapItem;

__attribute__((visibility("hidden")))
@interface CollectionSaveSession : CollectionEditSession
{
}

- (void)applyToCollection:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)canRenameSelectedObjectInCollection:(id)arg1;
@property(readonly, nonatomic) MKMapItem *mapItem;
- (id)initWithMapItem:(id)arg1;

@end

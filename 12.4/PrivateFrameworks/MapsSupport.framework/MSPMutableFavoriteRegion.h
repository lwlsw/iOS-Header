//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSupport/MSPMutableFavorite.h>

#import <MapsSupport/MSPFavoriteRegion-Protocol.h>

@class GEOMapRegion, NSString, NSUUID;

@interface MSPMutableFavoriteRegion : MSPMutableFavorite <MSPFavoriteRegion>
{
}

+ (id)mutableObjectProtocol;
+ (Class)mutableObjectClass;
+ (id)immutableObjectProtocol;
+ (Class)immutableObjectClass;
@property(retain, nonatomic) GEOMapRegion *geoMapRegion;
@property(copy, nonatomic) NSString *title;
- (id)transferToImmutableIfValidWithError:(out id *)arg1;
- (id)initWithBookmarkStorage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSUUID *storageIdentifier;
@property(readonly) Class superclass;

@end

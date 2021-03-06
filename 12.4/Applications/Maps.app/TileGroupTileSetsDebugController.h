//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "AuxiliaryDebugViewController.h"

@class GEOResourceManifestDownload;
@protocol MapsDebugViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface TileGroupTileSetsDebugController : AuxiliaryDebugViewController
{
    id <MapsDebugViewControllerDelegate> _delegate;
    long long tileGroupIdentifier;
    GEOResourceManifestDownload *_resourceManifest;
}

+ (id)navigationDestinationTitle;
@property(retain, nonatomic) GEOResourceManifestDownload *resourceManifest; // @synthesize resourceManifest=_resourceManifest;
@property(nonatomic) long long tileGroupIdentifier; // @synthesize tileGroupIdentifier;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)_tileGroup;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;

@end


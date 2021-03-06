//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "AuxiliaryDebugViewController.h"

#import "GEOResourceManifestTileGroupObserver-Protocol.h"

@class GEOResourceManifestDownload, NSError, NSString;

__attribute__((visibility("hidden")))
@interface ActiveTileGroupDebugController : AuxiliaryDebugViewController <GEOResourceManifestTileGroupObserver>
{
    GEOResourceManifestDownload *_resourceManifest;
    NSError *_resourceManifestError;
    _Bool _canChangeTileGroup;
}

+ (id)navigationDestinationTitle;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)dealloc;
- (id)initWithResourceManifest:(id)arg1;
- (id)init;
- (void)activeTileGroupOverridesDidChange:(id)arg1;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


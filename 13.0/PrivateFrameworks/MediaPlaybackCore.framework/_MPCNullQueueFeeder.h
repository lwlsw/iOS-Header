//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPQueueFeeder.h>

#import <MediaPlaybackCore/MPCQueueControllerDataSource-Protocol.h>

@class NSString;

@interface _MPCNullQueueFeeder : MPQueueFeeder <MPCQueueControllerDataSource>
{
    NSString *_uniqueIdentifier;
}

- (id)uniqueIdentifier;
- (void).cxx_destruct;
- (_Bool)section:(id)arg1 supportsShuffleType:(long long)arg2;
- (void)reloadSection:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)itemForItem:(id)arg1 inSection:(id)arg2;
- (void)loadPlaybackContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)playbackInfoForItem:(id)arg1;
@property(readonly, nonatomic) _Bool containsLiveStream;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

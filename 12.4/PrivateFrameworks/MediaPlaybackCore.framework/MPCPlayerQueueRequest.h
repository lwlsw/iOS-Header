//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPModelRequest.h>

@class MPCPlayer;

@interface MPCPlayerQueueRequest : MPModelRequest
{
    MPCPlayer *_player;
}

@property(retain, nonatomic) MPCPlayer *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;
- (void)performWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVCustomVideoCompositorSession, AVVideoComposition, AVVideoOutputSettings, NSArray;

__attribute__((visibility("hidden")))
@interface AVAssetReaderVideoCompositionOutputInternal : NSObject
{
    NSArray *videoTracks;
    AVVideoOutputSettings *videoOutputSettings;
    AVVideoComposition *videoComposition;
    void *figVideoCompositor;
    AVCustomVideoCompositorSession *customVideoCompositorSession;
}

@end


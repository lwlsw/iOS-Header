//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/NSObject-Protocol.h>

@class PDImageRequest, PDMediaRequestContext, PHMediaRequest;

@protocol PHMediaRequestContextDelegate <NSObject>
- (void)mediaRequestContextDidFinish:(PDMediaRequestContext *)arg1;
- (void)mediaRequestContext:(PDMediaRequestContext *)arg1 isQueryingCacheForRequest:(PDImageRequest *)arg2 didWait:(_Bool *)arg3 didFindImage:(_Bool *)arg4 resultHandler:(void (^)(struct CGImage *, _Bool, NSError *))arg5;
- (void)mediaRequestContext:(PDMediaRequestContext *)arg1 spawnedNewRequest:(PHMediaRequest *)arg2;
@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHAssetExportRequest.h>

@class NSObject;
@protocol OS_dispatch_queue;

@interface PHCloudSharedAssetExportRequest : PHAssetExportRequest
{
    int _imageManagerImageRequestId;
    int _imageManagerVideoRequestId;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (id)exportRequestForAsset:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
- (void)_handleRequestResultHandlerForAsset:(id)arg1 networkAccessAllowed:(_Bool)arg2 progress:(id)arg3 processingUnitCount:(unsigned long long)arg4 options:(id)arg5 withFileUrls:(id)arg6 info:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (void)_requestLivePhotoURLsForAsset:(id)arg1 networkAccessAllowed:(_Bool)arg2 progressHandler:(CDUnknownBlockType)arg3 resultHandler:(CDUnknownBlockType)arg4;
- (int)_requestVideoURLForAsset:(id)arg1 networkAccessAllowed:(_Bool)arg2 progressHandler:(CDUnknownBlockType)arg3 resultHandler:(CDUnknownBlockType)arg4;
- (int)_requestImageURLForAsset:(id)arg1 networkAccessAllowed:(_Bool)arg2 progressHandler:(CDUnknownBlockType)arg3 resultHandler:(CDUnknownBlockType)arg4;
- (void)_requestFileURLsForAsset:(id)arg1 withOptions:(id)arg2 networkAccessAllowed:(_Bool)arg3 progressHandler:(CDUnknownBlockType)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (void)exportWithOptions:(id)arg1 networkAccessAllowed:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)exportWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)preflightExportWithOptions:(id)arg1 isDownloadingRequired:(_Bool *)arg2 isProcessingRequired:(_Bool *)arg3 fileURLs:(id *)arg4 info:(id *)arg5;
- (id)initWithAsset:(id)arg1 variants:(id)arg2;

@end

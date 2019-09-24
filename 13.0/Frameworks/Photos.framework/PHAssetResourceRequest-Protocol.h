//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/NSObject-Protocol.h>

@class NSDictionary, NSString, PHAssetResource, PHAssetResourceRequestOptions;
@protocol PHAssetResourceRequestDelegate;

@protocol PHAssetResourceRequest <NSObject>
@property(copy, nonatomic) NSString *taskIdentifier;
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled;
@property(readonly, copy, nonatomic) CDUnknownBlockType completionHandler;
@property(readonly, nonatomic) NSDictionary *info;
@property(readonly, nonatomic) __weak id <PHAssetResourceRequestDelegate> delegate;
@property(readonly, nonatomic) unsigned long long managerID;
@property(readonly, nonatomic) int requestID;
@property(readonly, nonatomic) PHAssetResourceRequestOptions *options;
@property(readonly, nonatomic) PHAssetResource *assetResource;
- (void)cancel;
- (void)startRequest;
@end

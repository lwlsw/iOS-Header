//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, TSUManagedTemporaryDirectory;
@protocol OS_dispatch_queue, TSADocumentCacheDirectoryDelegate;

__attribute__((visibility("hidden")))
@interface TSADocumentCacheDirectory : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    _Bool _isTemporary;
    TSUManagedTemporaryDirectory *_documentCacheTemporaryDirectory;
    NSURL *_cacheURL;
    id <TSADocumentCacheDirectoryDelegate> _delegate;
}

@property(readonly, nonatomic) __weak id <TSADocumentCacheDirectoryDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateDocumentCacheProperties;
- (void)removeAndInvalidateCache;
- (id)documentCacheURLWithDocumentProperties:(id)arg1 validate:(_Bool)arg2 create:(_Bool)arg3;
- (void)p_removeAndInvalidateCacheAtURL:(id)arg1;
- (_Bool)p_isValidCacheAtURL:(id)arg1 documentProperties:(id)arg2;
- (id)p_persistentCacheURL;
- (id)p_documentCacheIdentifier;
- (id)initWithIsTemporary:(_Bool)arg1 delegate:(id)arg2;
- (id)init;

@end

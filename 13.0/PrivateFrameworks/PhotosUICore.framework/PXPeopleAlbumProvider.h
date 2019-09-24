//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXPeopleSectionedDataSourceChangeObserver-Protocol.h>
#import <PhotosUICore/PXPhotoLibraryUIChangeObserver-Protocol.h>

@class NSMutableDictionary, NSString, PHPhotoLibrary, PXPeopleProgressManager, PXPeopleSectionedDataSource;
@protocol OS_dispatch_queue;

@interface PXPeopleAlbumProvider : NSObject <PXPeopleSectionedDataSourceChangeObserver, PXPhotoLibraryUIChangeObserver>
{
    _Bool _didInitiateReCacheRequest;
    _Bool _didInitiatePeopleCountFetchRequest;
    _Bool _didPrepareDataSource;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_dispatch_queue> *_cacheIsolationQueue;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    PHPhotoLibrary *_photoLibrary;
    _Atomic int _currentRequestId;
    PXPeopleSectionedDataSource *_peopleDataSource;
    PXPeopleProgressManager *_progressMgr;
    CDUnknownBlockType _requestCompletion;
    long long _cachedPeopleCount;
    NSMutableDictionary *_imageCache;
    struct CGSize _imageSize;
}

+ (id)sharedInstance;
@property(retain) NSMutableDictionary *imageCache; // @synthesize imageCache=_imageCache;
@property _Atomic int currentRequestId; // @synthesize currentRequestId=_currentRequestId;
@property(nonatomic) long long cachedPeopleCount; // @synthesize cachedPeopleCount=_cachedPeopleCount;
@property(copy, nonatomic) CDUnknownBlockType requestCompletion; // @synthesize requestCompletion=_requestCompletion;
@property(retain, nonatomic) PXPeopleProgressManager *progressMgr; // @synthesize progressMgr=_progressMgr;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(readonly, nonatomic) PXPeopleSectionedDataSource *peopleDataSource; // @synthesize peopleDataSource=_peopleDataSource;
- (void).cxx_destruct;
- (void)_appWillEnterForeground;
- (void)_invalidateCache;
- (void)imageCacheDidChanged:(id)arg1;
- (void)peopleSectionedDataSource:(id)arg1 didApplyIncrementalChanges:(id)arg2;
- (void)peopleSectionedDataSourceMembersChangedNonIncrementally:(id)arg1;
- (_Bool)_shouldShowInterstitialProgress;
- (void)_handleRequestResult:(id)arg1 forRequestID:(_Atomic int)arg2 person:(id)arg3 atIndex:(long long)arg4 error:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_asyncAddImagesToCacheWithPersons:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_reCacheImagesCompletion:(CDUnknownBlockType)arg1;
- (id)_visiblePersons;
@property(readonly, nonatomic) long long peopleCount;
- (void)_updateCachedCountIfNeeded;
@property(readonly, nonatomic) _Bool isCountAvailable;
- (id)peopleViewController;
- (void)requestAlbumImagesWithSize:(struct CGSize)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (void)_prepareIfNeeded;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

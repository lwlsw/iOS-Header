//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVTAvatarConfiguration, AVTAvatarRecord, AVTCoreModel, AVTMemoji, AVTPresetImageProvider, AVTPresetResourceLoader, NSMutableDictionary;
@protocol AVTUILogger;

@interface AVTAvatarAttributeEditorModelManager : NSObject
{
    AVTMemoji *_avatar;
    AVTAvatarRecord *_avatarRecord;
    AVTAvatarConfiguration *_avatarConfiguration;
    AVTCoreModel *_coreModel;
    AVTPresetImageProvider *_imageProvider;
    AVTPresetResourceLoader *_resourceLoader;
    NSMutableDictionary *_cancelationTokens;
    id <AVTUILogger> _logger;
}

@property(retain, nonatomic) id <AVTUILogger> logger; // @synthesize logger=_logger;
@property(retain, nonatomic) NSMutableDictionary *cancelationTokens; // @synthesize cancelationTokens=_cancelationTokens;
@property(readonly, nonatomic) AVTPresetResourceLoader *resourceLoader; // @synthesize resourceLoader=_resourceLoader;
@property(readonly, nonatomic) AVTPresetImageProvider *imageProvider; // @synthesize imageProvider=_imageProvider;
@property(readonly, nonatomic) AVTCoreModel *coreModel; // @synthesize coreModel=_coreModel;
@property(readonly, nonatomic) AVTAvatarConfiguration *avatarConfiguration; // @synthesize avatarConfiguration=_avatarConfiguration;
@property(readonly, copy, nonatomic) AVTAvatarRecord *avatarRecord; // @synthesize avatarRecord=_avatarRecord;
@property(readonly, nonatomic) AVTMemoji *avatar; // @synthesize avatar=_avatar;
- (void).cxx_destruct;
- (void)updateAvatarWithAvatarUpdater:(CDUnknownBlockType)arg1 animated:(_Bool)arg2;
- (void)updateAvatarBySelectingHeaderPickerItem:(id)arg1 animated:(_Bool)arg2;
- (void)updateAvatarBySelectingSectionItem:(id)arg1 animated:(_Bool)arg2;
- (void)preLoadCategory:(id)arg1;
- (void)cancelPreloadForSectionItemIndexPath:(id)arg1;
- (void)preloadSectionItem:(id)arg1 atIndexPath:(id)arg2;
- (id)buildInitialEditorState;
- (id)buildUIModelWithCurrentEditorDataSource:(id)arg1 forCategoryAtIndex:(unsigned long long)arg2;
- (void)dealloc;
- (void)cancelAllPreloading;
- (id)initWithAvatarRecord:(id)arg1 coreModel:(id)arg2 imageProvider:(id)arg3 resourceLoader:(id)arg4 environment:(id)arg5;

@end

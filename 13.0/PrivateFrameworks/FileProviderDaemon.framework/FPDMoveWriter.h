//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FileProviderDaemon/FPCancellable-Protocol.h>

@class FPDActionOperationQueue, FPDCoordinator, FPDMoveOperation, FPMoveInfo, NSError, NSMutableArray, NSMutableDictionary, NSObservation;
@protocol FPDMoveWriterExecutor, OS_dispatch_queue;

@interface FPDMoveWriter : NSObject <FPCancellable>
{
    FPMoveInfo *_info;
    FPDActionOperationQueue *_moveQueue;
    id <FPDMoveWriterExecutor> _providerWriter;
    FPDCoordinator *_preemptiveDownloadCoordinator;
    NSMutableArray *_sourceFoldersStack;
    NSMutableArray *_destinationFoldersStack;
    NSMutableDictionary *_errorsByRoot;
    NSMutableDictionary *_progressByRoot;
    id _waitedOnID;
    CDUnknownBlockType _waiterBlock;
    _Bool _cancelled;
    NSError *_error;
    NSObject<OS_dispatch_queue> *_asyncQueue;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _logSection;
    NSObservation *_importProgressObservation;
    FPDMoveOperation *_operation;
    CDUnknownBlockType _itemCopyProgressBlock;
    CDUnknownBlockType _itemCompletionBlock;
    CDUnknownBlockType _rootCreatedBlock;
    CDUnknownBlockType _rootCompletionBlock;
    CDUnknownBlockType _completionBlock;
    id <FPDMoveWriterExecutor> _diskWriter;
    FPDCoordinator *_coordinator;
}

+ (void)initialize;
+ (void)releaseDownloadSlot:(id)arg1;
+ (id)acquireDownloadSlotForItem:(id)arg1;
@property(retain, nonatomic) FPDCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) FPMoveInfo *info; // @synthesize info=_info;
@property(retain, nonatomic) id <FPDMoveWriterExecutor> diskWriter; // @synthesize diskWriter=_diskWriter;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) CDUnknownBlockType rootCompletionBlock; // @synthesize rootCompletionBlock=_rootCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType rootCreatedBlock; // @synthesize rootCreatedBlock=_rootCreatedBlock;
@property(copy, nonatomic) CDUnknownBlockType itemCompletionBlock; // @synthesize itemCompletionBlock=_itemCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType itemCopyProgressBlock; // @synthesize itemCopyProgressBlock=_itemCopyProgressBlock;
@property(readonly, nonatomic) __weak FPDMoveOperation *operation; // @synthesize operation=_operation;
- (void).cxx_destruct;
- (void)performCreateFolder:(id)arg1 inside:(id)arg2 as:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)performMoveOfFolder:(id)arg1 to:(id)arg2 as:(id)arg3 sourceMaterializeOption:(unsigned long long)arg4 targetMaterializeOption:(unsigned long long)arg5 atomically:(_Bool)arg6 useDiskWriter:(_Bool)arg7 completion:(CDUnknownBlockType)arg8;
- (void)performMoveOfItem:(id)arg1 to:(id)arg2 as:(id)arg3 sourceMaterializeOption:(unsigned long long)arg4 targetMaterializeOption:(unsigned long long)arg5 useDiskWriter:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;
- (void)performCopyOfItem:(id)arg1 to:(id)arg2 as:(id)arg3 sourceMaterializeOption:(unsigned long long)arg4 targetMaterializeOption:(unsigned long long)arg5 useDiskWriter:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;
- (void)performCopyOfItem:(id)arg1 to:(id)arg2 as:(id)arg3 sourceMaterializeOption:(unsigned long long)arg4 targetMaterializeOption:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;
- (id)defaultExecutor;
- (void)dumpStateTo:(id)arg1;
- (void)_removeRoot:(id)arg1;
- (void)startDownloadOfItem:(id)arg1 shouldMaterializeRecursively:(_Bool)arg2;
- (id)waitForResultOfSourceID:(id)arg1 root:(id)arg2 error:(id *)arg3;
- (void)_unblockWaiterForSourceID:(id)arg1 withResult:(id)arg2 error:(id)arg3;
- (void)setProgress:(id)arg1 forRoot:(id)arg2;
- (void)cancel;
- (void)cancelRoot:(id)arg1;
- (void)failWithError:(id)arg1;
- (void)_finishWithError:(id)arg1;
- (void)start;
- (void)_step;
- (void)handleAtom:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handlePostFolder:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleCreationForAtom:(id)arg1 result:(id)arg2;
- (void)_handleCompletionOfAtom:(id)arg1 source:(id)arg2 result:(id)arg3 error:(id)arg4;
- (void)_handleFolder:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performCopyOrMoveOfFolder:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performCopyOrMoveOfItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithOperation:(id)arg1 queue:(id)arg2;

@end


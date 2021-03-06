//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSDRep.h>

#import <iWorkImport/TSDContainerRep-Protocol.h>
#import <iWorkImport/TSWPStorageObserver-Protocol.h>

@class NSArray, NSObject, NSString, TSWPRep;
@protocol TSDContainerInfo;

__attribute__((visibility("hidden")))
@interface KNNoteRep : TSDRep <TSDContainerRep, TSWPStorageObserver>
{
    TSWPRep *_containedRep;
}

@property(readonly, nonatomic) TSWPRep *containedRep; // @synthesize containedRep=_containedRep;
- (void).cxx_destruct;
- (void)storage:(id)arg1 didChangeRange:(struct _NSRange)arg2 delta:(long long)arg3 broadcastKind:(unsigned long long)arg4;
- (void)willEndEditingContainedRep;
- (void)willBeginEditingContainedRep;
@property(readonly, nonatomic) NSObject<TSDContainerInfo> *containerInfo;
- (void)recursivelyPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)recursivelyPerformSelector:(SEL)arg1;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1 withObject:(id)arg2;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1;
- (_Bool)shouldShowCollaboratorCursorHighlight;
- (id)editingRep;
- (double)columnHeight;
@property(readonly, nonatomic) NSArray *childReps;
- (void)updateChildrenFromLayout;
- (void)addAdditionalChildLayersToArray:(id)arg1;
- (_Bool)canSelectChildRep:(id)arg1;
- (_Bool)canBeginEditingChildRepOnDoubleTap:(id)arg1;
- (void)selectChildRep:(id)arg1 extendingSelection:(_Bool)arg2;
- (void)dealloc;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


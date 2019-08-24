//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSSet;
@protocol FRScrollable;

@interface FRScrollQueueManager : NSObject
{
    _Bool _suspended;
    id <FRScrollable> _scrollable;
    NSMutableArray *_queue;
    NSSet *_visibleIndexPaths;
    NSSet *_eventualVisibleIndexPaths;
}

@property(retain, nonatomic) NSSet *eventualVisibleIndexPaths; // @synthesize eventualVisibleIndexPaths=_eventualVisibleIndexPaths;
@property(retain, nonatomic) NSSet *visibleIndexPaths; // @synthesize visibleIndexPaths=_visibleIndexPaths;
@property(retain, nonatomic) NSMutableArray *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <FRScrollable> scrollable; // @synthesize scrollable=_scrollable;
@property(nonatomic) _Bool suspended; // @synthesize suspended=_suspended;
- (void).cxx_destruct;
- (_Bool)canPerformWorkForFastScrolling;
- (_Bool)canPerformWork;
@property(readonly, nonatomic) _Bool isScrolling;
- (_Bool)shouldProcessInvisiblityForIndexPath:(id)arg1;
- (_Bool)shouldProcessVisiblityForIndexPath:(id)arg1;
- (void)registerForFastScrolling:(id)arg1 eventuallyVisibleIndexPaths:(id)arg2;
- (void)drainWithOptions:(long long)arg1;
- (void)deferForFastScrollAtIndexPath:(id)arg1 work:(CDUnknownBlockType)arg2;
- (void)deferWork:(CDUnknownBlockType)arg1;
- (id)debugDescription;
- (void)dealloc;
- (id)initWithScrollable:(id)arg1;

@end

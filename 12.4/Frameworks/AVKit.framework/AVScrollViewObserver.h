//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVKit/AVScrollViewObserverDelegate-Protocol.h>
#import <AVKit/_UIScrollViewScrollObserver-Protocol.h>

@class CADisplayLink, NSString, UIScrollView, UIView;
@protocol AVScrollViewObserverDelegate;

@interface AVScrollViewObserver : NSObject <AVScrollViewObserverDelegate, _UIScrollViewScrollObserver>
{
    UIScrollView *_observedScrollView;
    CADisplayLink *_displayLink;
    AVScrollViewObserver *_next;
    AVScrollViewObserver *_previous;
    id <AVScrollViewObserverDelegate> _delegate;
    UIView *_contentView;
}

+ (id)scrollViewObserverForContentView:(id)arg1 delegate:(id)arg2;
@property(readonly, nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <AVScrollViewObserverDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak AVScrollViewObserver *previous; // @synthesize previous=_previous;
@property(readonly, nonatomic) AVScrollViewObserver *next; // @synthesize next=_next;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) __weak UIScrollView *observedScrollView; // @synthesize observedScrollView=_observedScrollView;
- (void).cxx_destruct;
- (void)_displayLinkFired:(id)arg1;
- (void)_startOrPauseDisplayLinkIfNeeded;
- (void)scrollViewObserverValuesDidChange:(id)arg1;
- (void)_observeScrollViewDidScroll:(id)arg1;
- (void)invalidate;
- (void)validateHierarchyAndFindAdditionalScrollViews;
@property(readonly, nonatomic) double contentViewFractionVisible;
@property(readonly, nonatomic) _Bool isScrollViewScrolling;
@property(readonly, nonatomic) _Bool isObservedScrollViewAncestorOfContentView;
- (void)dealloc;
- (id)initWithView:(id)arg1 observedScrollView:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

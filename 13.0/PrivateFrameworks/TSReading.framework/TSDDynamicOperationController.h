//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet, TSDAutoscroll, TSDInteractiveCanvasController;

@interface TSDDynamicOperationController : NSObject
{
    TSDInteractiveCanvasController *mICC;
    _Bool mOperationIsDynamic;
    _Bool mResetGuides;
    _Bool mSupportsAlignmentGuides;
    _Bool mPossibleDynamicOperation;
    NSMutableSet *mReps;
    NSMutableSet *mAllTransformedReps;
    TSDAutoscroll *mAutoscroll;
}

@property(readonly, nonatomic) NSSet *allTransformedReps; // @synthesize allTransformedReps=mAllTransformedReps;
@property(readonly, nonatomic) NSSet *currentlyTransformingReps; // @synthesize currentlyTransformingReps=mReps;
- (void)p_resetGuidesForCleanup:(_Bool)arg1;
- (void)invalidateGuides;
- (void)handleTrackerManipulator:(id)arg1;
- (void)p_controllingTMDidResetInOperation:(id)arg1;
- (void)handleGestureRecognizer:(id)arg1;
- (void)stopTransformingReps:(id)arg1;
- (void)startTransformingReps:(id)arg1;
- (void)p_cleanupOperation;
- (void)cancelOperation;
- (_Bool)isOperationDynamic;
- (_Bool)isInPossibleDynamicOperation;
- (_Bool)isInOperation;
- (void)endOperation;
- (void)p_beginDynamicOperationForReps:(id)arg1;
- (void)beginOperation;
- (void)beginPossibleDynamicOperation;
- (void)dealloc;
- (id)initWithInteractiveCanvasController:(id)arg1;

@end

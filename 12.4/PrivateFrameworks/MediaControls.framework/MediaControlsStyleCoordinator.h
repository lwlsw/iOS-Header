//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface MediaControlsStyleCoordinator : NSObject
{
    NSMutableArray *_animations;
    NSMutableArray *_completions;
}

- (void).cxx_destruct;
- (void)performCompletions;
- (void)performAnimations;
- (void)animateAlongsideTransition:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;

@end

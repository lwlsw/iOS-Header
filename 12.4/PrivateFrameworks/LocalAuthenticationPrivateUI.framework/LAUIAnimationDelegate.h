//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <LocalAuthenticationPrivateUI/CAAnimationDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface LAUIAnimationDelegate : NSObject <CAAnimationDelegate>
{
    CDUnknownBlockType _didStartHandler;
    CDUnknownBlockType _didStopHandler;
}

@property(copy, nonatomic) CDUnknownBlockType didStopHandler; // @synthesize didStopHandler=_didStopHandler;
@property(copy, nonatomic) CDUnknownBlockType didStartHandler; // @synthesize didStartHandler=_didStartHandler;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

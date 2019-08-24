//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMSharedUI/NSObject-Protocol.h>

@protocol IMTypingIndicatorLayerProtocol <NSObject>
@property(nonatomic) _Bool hasDarkBackground;
- (void)startGrowAnimation;
- (void)stopAnimation;
- (void)stopPulseAnimation;
- (void)startPulseAnimation;
- (void)startShrinkAnimationWithCompletionBlock:(void (^)(void))arg1;
- (void)startGrowAnimationWithCompletionBlock:(void (^)(void))arg1;
@end

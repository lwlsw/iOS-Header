//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OpusKit/NSObject-Protocol.h>

@class NSArray, OKProducer;

@protocol OKProducerDelegate <NSObject>
- (NSArray *)visibleMediaItemsForProducer:(OKProducer *)arg1;
- (void)producer:(OKProducer *)arg1 didProcessLiveAuthoringKeyPaths:(NSArray *)arg2;
@end


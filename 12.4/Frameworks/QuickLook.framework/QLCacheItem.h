//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, QLItem;

__attribute__((visibility("hidden")))
@interface QLCacheItem : NSObject
{
    NSMutableArray *_handlers;
    QLItem *_item;
}

@property(retain, nonatomic) QLItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)_performHandlers;
- (void)invalidate;
- (void)addCompletionHandler:(CDUnknownBlockType)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface EventTap : NSObject
{
    CDUnknownBlockType _handler;
}

+ (id)eventTapWithHandler:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (void)sendEvent:(id)arg1;
- (id)initWithHandler:(CDUnknownBlockType)arg1;

@end


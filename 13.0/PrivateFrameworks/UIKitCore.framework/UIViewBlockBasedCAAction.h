//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/CAAction-Protocol.h>

__attribute__((visibility("hidden")))
@interface UIViewBlockBasedCAAction : NSObject <CAAction>
{
    CDUnknownBlockType _block;
}

- (void).cxx_destruct;
- (void)runActionForKey:(id)arg1 object:(id)arg2 arguments:(id)arg3;
- (id)initWithActionBlock:(CDUnknownBlockType)arg1;
- (id)initWithEmptyBlock:(CDUnknownBlockType)arg1;

@end

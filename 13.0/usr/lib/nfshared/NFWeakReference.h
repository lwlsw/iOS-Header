//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NFWeakReference : NSObject
{
    id _store;
}

+ (id)weakReferenceWithObject:(id)arg1;
@property(nonatomic, getter=getObject, setter=setObject:) id object;
- (void)dealloc;
- (id)initWithObject:(id)arg1;

@end

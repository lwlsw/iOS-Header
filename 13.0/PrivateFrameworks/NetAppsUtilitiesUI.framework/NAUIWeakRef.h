//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NAUIWeakRef : NSObject
{
    id _weakStorage;
    id _weakPointer;
    _Bool _useWeakStorage;
}

+ (id)weakRefWithObject:(id)arg1;
- (id)object;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;

@end

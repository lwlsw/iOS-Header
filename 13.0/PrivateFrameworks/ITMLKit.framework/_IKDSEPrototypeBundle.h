//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface _IKDSEPrototypeBundle : NSObject
{
    NSMutableArray *_prototypes;
    NSMutableArray *_entries;
    struct {
        _Bool areEntriesDirty;
    } _flags;
}

- (void).cxx_destruct;
- (void)addPrototype:(id)arg1 forIndexes:(id)arg2;
- (id)allPrototypes;
- (id)prototypeForItemAtIndex:(unsigned long long)arg1;
- (id)init;

@end

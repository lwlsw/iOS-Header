//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface PUSearchZeroKeywordSection : NSObject
{
    long long _sectionType;
    NSArray *_viewModels;
}

@property(readonly, nonatomic) NSArray *viewModels; // @synthesize viewModels=_viewModels;
@property(readonly, nonatomic) long long sectionType; // @synthesize sectionType=_sectionType;
- (void).cxx_destruct;
- (id)description;
- (void)removeItem:(id)arg1;
- (id)initWithType:(long long)arg1 viewModels:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUComposition.h>

@class NSDictionary, NSMutableDictionary;

@interface NUGenericComposition : NUComposition
{
    NSMutableDictionary *_contents;
}

- (void).cxx_destruct;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (id)initWithCompositionSchema:(id)arg1;
@property(copy, nonatomic) NSDictionary *contents;

@end

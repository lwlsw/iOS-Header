//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKBundleComplicationDataSourceLoader.h>

@class NSOrderedSet;

@interface NTKBundleAggregateComplicationLoader : NTKBundleComplicationDataSourceLoader
{
    NSOrderedSet *_loaders;
}

@property(copy, nonatomic) NSOrderedSet *loaders; // @synthesize loaders=_loaders;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_loadClassesUsingBlock:(CDUnknownBlockType)arg1;

@end

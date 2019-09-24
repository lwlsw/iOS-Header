//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSSharedImageCacheType-Protocol.h"

@class NSString;

@interface FRSharedImageCache : NSObject <TSSharedImageCacheType>
{
    _Bool _persistenceEnabled;
    NSString *_rootPath;
}

@property(nonatomic) _Bool persistenceEnabled; // @synthesize persistenceEnabled=_persistenceEnabled;
@property(readonly, nonatomic) NSString *rootPath; // @synthesize rootPath=_rootPath;
- (void).cxx_destruct;
- (void)cache:(id)arg1 forKey:(id)arg2;
- (id)fetchImageForKey:(id)arg1;
- (void)pruneImagesOlderThan:(double)arg1;
- (id)_imageAtPath:(id)arg1;
- (id)init;
- (id)initWithPersistenceEnabled:(_Bool)arg1;

@end

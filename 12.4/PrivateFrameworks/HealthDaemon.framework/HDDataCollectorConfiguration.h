//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@interface HDDataCollectorConfiguration : NSObject <NSCopying>
{
    unsigned long long _collectionType;
    double _collectionInterval;
}

@property(nonatomic) double collectionInterval; // @synthesize collectionInterval=_collectionInterval;
@property(nonatomic) unsigned long long collectionType; // @synthesize collectionType=_collectionType;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mergedConfiguration:(id)arg1;
- (id)init;

@end

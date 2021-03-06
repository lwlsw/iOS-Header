//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ARKit/ARResultData-Protocol.h>
#import <ARKit/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface AR3DSkeletonDetectionResults : NSObject <ARResultData, NSCopying>
{
    NSArray *_detectedSkeletons;
    double _timestamp;
}

@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSArray *detectedSkeletons; // @synthesize detectedSkeletons=_detectedSkeletons;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


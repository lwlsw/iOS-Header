//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTPredictionItem.h>

#import <coreroutine/NSCopying-Protocol.h>

@class NSString;

@interface RTPredictionItemApplication : RTPredictionItem <NSCopying>
{
    NSString *_bundleId;
}

@property(readonly, copy, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithConfidence:(double)arg1 bundleId:(id)arg2;
- (id)init;

@end

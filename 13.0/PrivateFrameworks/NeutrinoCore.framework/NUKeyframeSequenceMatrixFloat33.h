//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUKeyframeSequence.h>

@interface NUKeyframeSequenceMatrixFloat33 : NUKeyframeSequence
{
    CDStruct_d80e62f2 *_values;
}

- (CDStruct_d80e62f2)sampleAtTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_d80e62f2)valueOfKeyframeAtIndex:(long long)arg1;
- (void)dealloc;
- (id)initWithCount:(unsigned long long)arg1 times:(CDStruct_1b6d18a9 *)arg2 values:(CDStruct_d80e62f2 *)arg3;

@end

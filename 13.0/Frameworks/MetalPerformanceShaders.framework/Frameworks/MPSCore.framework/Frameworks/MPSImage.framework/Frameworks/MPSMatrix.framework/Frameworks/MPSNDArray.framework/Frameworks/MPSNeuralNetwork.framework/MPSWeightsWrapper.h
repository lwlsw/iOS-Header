//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MPSNeuralNetwork/MPSCNNConvolutionDataSource-Protocol.h>

@class MISSING_TYPE, MPSCNNConvolutionDescriptor, NSString;
@protocol MPSCNNBatchNormalizationDataSource, MPSCNNConvolutionDataSource;

@interface MPSWeightsWrapper : NSObject <MPSCNNConvolutionDataSource>
{
    id <MPSCNNBatchNormalizationDataSource> _dataSource;
    id <MPSCNNConvolutionDataSource> _source;
    struct NeuronInfo _info;
    MPSCNNConvolutionDescriptor *_descriptor;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)label;
- (float *)lookupTableForUInt8Kernel;
- (MISSING_TYPE **)rangesForUInt8Kernel;
- (void)purge;
- (_Bool)load;
- (float *)biasTerms;
- (void *)weights;
- (id)descriptor;
- (unsigned int)dataType;
- (void)dealloc;
- (id)initWithSource:(id)arg1 neuronInfo:(struct NeuronInfo)arg2 batchNorm:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

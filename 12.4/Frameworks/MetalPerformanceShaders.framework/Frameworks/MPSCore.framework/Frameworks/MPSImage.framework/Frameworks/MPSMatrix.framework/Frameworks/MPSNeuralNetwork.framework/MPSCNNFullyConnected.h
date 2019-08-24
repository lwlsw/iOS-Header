//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSNeuralNetwork/MPSCNNConvolution.h>

@interface MPSCNNFullyConnected : MPSCNNConvolution
{
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 weights:(id)arg2 fullyConnected:(_Bool)arg3;
- (id)initWithDevice:(id)arg1 convolutionDescriptor:(id)arg2 kernelWeights:(const float *)arg3 biasTerms:(const float *)arg4 flags:(unsigned long long)arg5 fullyConnected:(_Bool)arg6;
- (id)initWithDevice:(id)arg1 weights:(id)arg2;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 convolutionDescriptor:(id)arg2 kernelWeights:(const float *)arg3 biasTerms:(const float *)arg4 flags:(unsigned long long)arg5;
- (id)initWithDevice:(id)arg1 weights:(id)arg2 fullyConnected:(_Bool)arg3 convolutionTranspose:(_Bool)arg4;
- (id)initWithDevice:(id)arg1 convolutionDescriptor:(id)arg2 kernelWeights:(const float *)arg3 biasTerms:(const float *)arg4 flags:(unsigned long long)arg5 fullyConnected:(_Bool)arg6 convolutionTranspose:(_Bool)arg7;
- (id)initWithDevice:(id)arg1;

@end

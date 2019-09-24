//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CIKernel : NSObject
{
    void *_priv;
}

+ (id)colorMatrixBiasKernel;
+ (id)kernelWithFunctionName:(id)arg1 fromMetalLibraryData:(id)arg2 options:(id)arg3 error:(id *)arg4;
+ (id)kernelWithFunctionName:(id)arg1 fromMetalLibraryData:(id)arg2 constants:(id)arg3 error:(id *)arg4;
+ (id)kernelWithFunctionName:(id)arg1 fromMetalLibraryData:(id)arg2 outputGroupSize:(struct CGSize)arg3 error:(id *)arg4;
+ (id)kernelWithFunctionName:(id)arg1 fromMetalLibraryData:(id)arg2 outputPixelFormat:(int)arg3 error:(id *)arg4;
+ (id)kernelWithFunctionName:(id)arg1 fromMetalLibraryData:(id)arg2 error:(id *)arg3;
+ (id)kernelWithString:(id)arg1 fromMetalLibraryData:(id)arg2;
+ (id)kernelWithString:(id)arg1;
+ (id)kernelsWithString:(id)arg1;
+ (id)kernelsWithString:(id)arg1 messageLog:(id)arg2;
+ (id)kernelsWithString:(id)arg1 fromMetalLibraryData:(id)arg2;
+ (id)kernelsWithString:(id)arg1 andMetalLibrary:(id)arg2 messageLog:(id)arg3;
+ (id)allocForType:(int)arg1;
+ (id)redEyeMetalKernelWithFunctionName:(id)arg1 fromMetalLibraryURL:(id)arg2 outputPixelFormat:(int)arg3 error:(id *)arg4;
+ (id)redEyeMetalKernelWithFunctionName:(id)arg1 fromMetalLibraryURL:(id)arg2 error:(id *)arg3;
+ (id)redEyeMetalKernelWithFunctionName:(id)arg1 outputPixelFormat:(int)arg2 error:(id *)arg3;
+ (id)redEyeMetalKernelWithFunctionName:(id)arg1 error:(id *)arg2;
+ (id)SDOFV3MetalKernelNamed:(id)arg1;
+ (id)SDOFV2MetalKernelNamed:(id)arg1;
- (id)parameters;
- (SEL)ROISelector;
- (void)setROISelector:(SEL)arg1;
- (id)applyWithExtent:(struct CGRect)arg1 roiCallback:(CDUnknownBlockType)arg2 arguments:(id)arg3;
- (id)applyWithExtent:(struct CGRect)arg1 roiCallback:(CDUnknownBlockType)arg2 arguments:(id)arg3 options:(id)arg4;
- (int)_outputFormatUsingDictionary:(id)arg1 andKernel:(struct Kernel *)arg2;
- (_Bool)_isValidOutputPixelFormat:(int)arg1;
@property(readonly) NSString *name;
@property(nonatomic) struct CGSize outputGroupSize;
@property(nonatomic) _Bool canReduceOutputChannels;
@property(nonatomic) _Bool preservesRange;
@property(nonatomic) _Bool perservesAlpha;
- (id)_initWithReflection:(struct CIKernelReflection)arg1 constants:(id)arg2;
- (id)_initWithReflection:(struct CIKernelReflection)arg1;
- (id)initWithString:(id)arg1;
- (id)_initWithString:(id)arg1 usingCruftCompatibility:(_Bool)arg2;
- (id)_initWithString:(id)arg1 andMetalLibrary:(id)arg2 usingCruftCompatibility:(_Bool)arg3;
- (void *)_internalRepresentation;
- (id)_initWithInternalRepresentation:(void *)arg1;
- (void)finalize;
- (void)dealloc;
- (id)description;
- (id)init;

@end

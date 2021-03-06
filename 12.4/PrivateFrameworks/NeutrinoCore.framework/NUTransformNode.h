//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NURenderNode.h>

@interface NUTransformNode : NURenderNode
{
}

+ (id)transformNodeWithInput:(id)arg1 transform:(id)arg2 error:(out id *)arg3;
- (_Bool)requiresVideoComposition;
- (id)descriptionSubClassHook;
- (id)_evaluateImageGeometry:(out id *)arg1;
- (id)_evaluateGeometrySpaceMap:(out id *)arg1;
- (id)_transformWithError:(out id *)arg1;
- (_Bool)shouldCacheNodeForPipelineState:(id)arg1;
- (_Bool)isGeometryNode;

@end


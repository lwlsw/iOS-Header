//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@interface CALayer (PDMicaPlayerAdditions)
- (void)pd_moveAndResizeWithinParentLayer:(id)arg1 usingGravity:(id)arg2 geometryFlipped:(_Bool)arg3 retinaScale:(double)arg4 animate:(_Bool)arg5;
- (id)pd_allAnimationsInTree;
- (void)mp_addLayerAndSublayersToArray:(id)arg1 allowHiddenLayers:(_Bool)arg2;
- (id)pd_allLayersInTree;
- (id)mp_propertiesToCopy;
- (id)mp_basicPropertiesToCopy;
- (id)pd_deepCopyLayer;
@end

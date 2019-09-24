//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSDRep.h>

#import <iWorkImport/TSDMagicMoveMatching-Protocol.h>

@class CALayer, KNSlideBackgroundInfo;

__attribute__((visibility("hidden")))
@interface KNSlideBackgroundRep : TSDRep <TSDMagicMoveMatching>
{
    CALayer *_blackBackgroundLayer;
    _Bool _layerNeedsUpdate;
}

+ (id)magicMoveMatchesBetweenOutgoingObjects:(id)arg1 andIncomingObjects:(id)arg2 textureDescription:(id)arg3;
- (void).cxx_destruct;
- (id)textureForDescription:(id)arg1;
- (_Bool)wantsToDistortWithImagerContext;
- (void)drawInContext:(struct CGContext *)arg1;
@property(readonly) KNSlideBackgroundInfo *slideBackgroundInfo;
- (_Bool)isOpaque;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;

@end

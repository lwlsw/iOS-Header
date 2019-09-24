//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHandwriting/CHStrokeGroupBasedVisualization.h>

@interface CHNormalizedDrawingVisualization : CHStrokeGroupBasedVisualization
{
}

- (void)_drawCutPoints:(id)arg1 inputDrawing:(id)arg2 inContext:(struct CGContext *)arg3 transform:(struct CGAffineTransform)arg4;
- (void)drawInputDrawing:(id)arg1 inContext:(struct CGContext *)arg2 transform:(struct CGAffineTransform)arg3;
- (_Bool)shouldDrawStrokeGroup:(id)arg1;
- (void)_drawGroupBrackgroundInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;
- (struct CGAffineTransform)_transformForInputDrawingBounds:(struct CGRect)arg1 referenceBounds:(struct CGRect)arg2 viewBounds:(struct CGRect)arg3;
- (void)drawVisualizationInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2 viewBounds:(struct CGRect)arg3;
- (struct CGRect)dirtyRectForStrokeGroup:(id)arg1;
- (_Bool)wantsInputDrawings;
- (long long)layeringPriority;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UITextCanvasViewContext-Protocol.h>

@class UIView;
@protocol _UIDrawsTextInRect;

@protocol _UITextFieldCanvasViewContext <_UITextCanvasViewContext>
- (struct CGRect)_clipRectForFadedEdges;
- (UIView<_UIDrawsTextInRect> *)_targetForDrawTextInRect;
- (double)_passcodeStyleAlpha;
- (_Bool)_isPasscodeStyle;
- (struct _NSRange)_unobscuredSecureRange;
@end

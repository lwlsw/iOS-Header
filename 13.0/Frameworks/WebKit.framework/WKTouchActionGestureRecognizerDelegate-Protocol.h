//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebKit/NSObject-Protocol.h>

@class NSMapTable, UIGestureRecognizer;

@protocol WKTouchActionGestureRecognizerDelegate <NSObject>
- (NSMapTable *)touchActionActiveTouches;
- (_Bool)gestureRecognizerMayDoubleTapToZoomWebView:(UIGestureRecognizer *)arg1;
- (_Bool)gestureRecognizerMayPinchToZoomWebView:(UIGestureRecognizer *)arg1;
- (_Bool)gestureRecognizerMayPanWebView:(UIGestureRecognizer *)arg1;
@end

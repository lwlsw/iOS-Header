//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class WebDeviceOrientationInternal;

@interface WebDeviceOrientation : NSObject
{
    WebDeviceOrientationInternal *m_internal;
}

- (void)dealloc;
- (id)initWithCanProvideAlpha:(_Bool)arg1 alpha:(double)arg2 canProvideBeta:(_Bool)arg3 beta:(double)arg4 canProvideGamma:(_Bool)arg5 gamma:(double)arg6;
- (id)initWithCoreDeviceOrientation:(RefPtr_2fae532e *)arg1;

@end


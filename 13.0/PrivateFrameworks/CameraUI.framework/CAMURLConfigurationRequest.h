//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CAMURLConfigurationRequest : NSObject
{
    _Bool _wantsQRCodeForSession;
    long long _requestedCaptureMode;
    long long _requestedCaptureDevice;
}

@property(readonly, nonatomic) _Bool wantsQRCodeForSession; // @synthesize wantsQRCodeForSession=_wantsQRCodeForSession;
@property(readonly, nonatomic) long long requestedCaptureDevice; // @synthesize requestedCaptureDevice=_requestedCaptureDevice;
@property(readonly, nonatomic) long long requestedCaptureMode; // @synthesize requestedCaptureMode=_requestedCaptureMode;
- (long long)_captureDeviceFromString:(id)arg1 outCaptureDevice:(long long *)arg2;
- (_Bool)_captureModeFromString:(id)arg1 outCaptureMode:(long long *)arg2;
- (_Bool)_initializeFromQueryDictionary:(id)arg1;
- (id)initWithQueryDictionary:(id)arg1;

@end


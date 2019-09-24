//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class NSObject;
@protocol NSSecureCoding, _MXExtensionResponseObserver;

@protocol _MXExtensionInternalStreamingServiceProtocol <NSObject>
- (void)stopSendingUpdatesForRequest:(NSObject<NSSecureCoding> *)arg1;
- (void)startSendingUpdatesForRequest:(NSObject<NSSecureCoding> *)arg1 toObserver:(id <_MXExtensionResponseObserver>)arg2;
@end

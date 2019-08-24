//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, NSURL;

@interface InstallAttributionPingback : NSObject
{
    NSNumber *_appAdamId;
    NSString *_transactionId;
    NSNumber *_campaignId;
    NSString *_adNetworkId;
    NSString *_attributionSignature;
    NSURL *_pingbackUrl;
    long long _retryCount;
    NSNumber *_localTimestamp;
}

@property(readonly, nonatomic) NSNumber *localTimestamp; // @synthesize localTimestamp=_localTimestamp;
@property(readonly, nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
@property(readonly, nonatomic) NSURL *pingbackUrl; // @synthesize pingbackUrl=_pingbackUrl;
@property(readonly, nonatomic) NSString *attributionSignature; // @synthesize attributionSignature=_attributionSignature;
@property(readonly, nonatomic) NSString *adNetworkId; // @synthesize adNetworkId=_adNetworkId;
@property(readonly, nonatomic) NSNumber *campaignId; // @synthesize campaignId=_campaignId;
@property(readonly, nonatomic) NSString *transactionId; // @synthesize transactionId=_transactionId;
@property(readonly, nonatomic) NSNumber *appAdamId; // @synthesize appAdamId=_appAdamId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithAppAdamId:(id)arg1 transactionId:(id)arg2 campaignId:(id)arg3 adNetworkId:(id)arg4 attributionSignature:(id)arg5 pingbackUrl:(id)arg6 retryCount:(long long)arg7 localTimestamp:(id)arg8;

@end

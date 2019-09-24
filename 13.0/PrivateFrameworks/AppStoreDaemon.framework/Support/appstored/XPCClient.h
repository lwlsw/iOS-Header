//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface XPCClient : NSObject
{
    NSString *_clientID;
    NSData *_auditTokenData;
    NSString *_clientVersion;
    int _pid;
    NSString *_userAgent;
    NSString *_clientIDHeader;
}

+ (id)_copyExecutablePathForConnection:(id)arg1;
+ (id)clientIDForConnection:(id)arg1;
@property(readonly) NSString *clientIDHeader; // @synthesize clientIDHeader=_clientIDHeader;
- (void).cxx_destruct;
- (void)_setupUserAgent;
- (void)_setPropertiesUsingBundle:(struct __CFBundle *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
@property(readonly) NSString *userAgent;
@property(readonly) NSString *clientVersion;
@property(readonly) NSString *clientID;
@property(readonly) NSData *auditTokenData;
- (void)addClientEntityToDatabase:(id)arg1;
- (id)initWithConnection:(id)arg1;
- (id)initWithApplicationID:(id)arg1;
- (id)init;

@end

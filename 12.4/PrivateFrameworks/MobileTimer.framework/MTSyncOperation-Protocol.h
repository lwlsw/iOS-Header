//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MobileTimer/NAEquatable-Protocol.h>
#import <MobileTimer/NSCopying-Protocol.h>
#import <MobileTimer/NSObject-Protocol.h>
#import <MobileTimer/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;
@protocol MTSyncOperation;

@protocol MTSyncOperation <NSObject, NSSecureCoding, NSCopying, NAEquatable>
+ (id <MTSyncOperation>)operationFromMetaData:(NSDictionary *)arg1;
@property(readonly, nonatomic) long long priority;
@property(readonly, nonatomic) NSString *uuid;
- (NSDictionary *)operationMetaData;
- (id)responseOperation;
- (_Bool)isFromSync;
- (_Bool)requiresResponse;
- (_Bool)shouldRetry;
- (_Bool)isEquivalentToOperation:(id <MTSyncOperation>)arg1;
@end

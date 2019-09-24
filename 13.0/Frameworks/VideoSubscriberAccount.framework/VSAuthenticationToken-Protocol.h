//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoSubscriberAccount/NSObject-Protocol.h>

@class NSData, NSDate, NSString;

@protocol VSAuthenticationToken <NSObject>
@property(readonly, copy, nonatomic) NSData *serializedData;
@property(copy, nonatomic) NSString *body;
@property(readonly, copy, nonatomic) NSDate *expirationDate;
- (_Bool)isFromUnsupportedProvider;
- (_Bool)isValid;
- (_Bool)isOpaque;
- (id)initWithSerializedData:(NSData *)arg1;
@end

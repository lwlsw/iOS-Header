//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface PKNFCPayload : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_message;
    NSData *_encryptionPublicKeyData;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSData *encryptionPublicKeyData; // @synthesize encryptionPublicKeyData=_encryptionPublicKeyData;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToPKNFCPayload:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithNFCDictionary:(id)arg1;

@end

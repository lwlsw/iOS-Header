//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriCore/NSCopying-Protocol.h>
#import <SiriCore/NSObject-Protocol.h>

@class NSData, NSNumber, NSString;

@protocol SiriCoreSQLiteValue <NSObject, NSCopying>
- (long long)siriCoreSQLiteValue_type;
- (NSData *)siriCoreSQLiteValue_toData;
- (NSNumber *)siriCoreSQLiteValue_toNumber;
- (NSString *)siriCoreSQLiteValue_toString;
- (NSString *)siriCoreSQLiteValue_escapedString:(_Bool)arg1;

@optional
- (const char *)siriCoreSQLiteValue_textRepresentation;
- (long long)siriCoreSQLiteValue_integerRepresentation;
- (double)siriCoreSQLiteValue_doubleRepresentation;
- (const void *)siriCoreSQLiteValue_blobRepresentationWithLength:(unsigned long long *)arg1;
@end


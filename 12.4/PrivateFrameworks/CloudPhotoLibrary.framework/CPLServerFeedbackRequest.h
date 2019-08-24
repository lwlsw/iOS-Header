//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CloudPhotoLibrary/NSCopying-Protocol.h>

@class NSMutableArray;

@interface CPLServerFeedbackRequest : PBRequest <NSCopying>
{
    NSMutableArray *_messages;
}

@property(retain, nonatomic) NSMutableArray *messages; // @synthesize messages=_messages;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)messagesAtIndex:(unsigned long long)arg1;
- (unsigned long long)messagesCount;
- (void)addMessages:(id)arg1;
- (void)clearMessages;

@end

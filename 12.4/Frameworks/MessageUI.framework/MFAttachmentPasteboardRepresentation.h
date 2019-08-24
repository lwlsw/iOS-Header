//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MessageUI/MFAttachmentPasteboardRepresentation-Protocol.h>
#import <MessageUI/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface MFAttachmentPasteboardRepresentation : NSObject <NSSecureCoding, MFAttachmentPasteboardRepresentation>
{
    NSData *_data;
    NSString *_name;
    NSString *_mimeType;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithMFAttachment:(id)arg1;
- (id)initWithAttachment:(id)arg1;

@end

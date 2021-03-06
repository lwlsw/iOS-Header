//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MFAttachmentManager, NSArray, NSMutableDictionary, NSString, NSURL;

@interface MFAttachmentCompositionContext : NSObject
{
    NSMutableDictionary *_hostIdentifierToAttachmentContentIDMap;
    NSString *_contextID;
    NSURL *_attachmentsBaseURL;
    MFAttachmentManager *_attachmentsManager;
}

@property(retain, nonatomic) MFAttachmentManager *attachmentsManager; // @synthesize attachmentsManager=_attachmentsManager;
@property(retain, nonatomic) NSURL *attachmentsBaseURL; // @synthesize attachmentsBaseURL=_attachmentsBaseURL;
@property(readonly, nonatomic) NSString *contextID; // @synthesize contextID=_contextID;
- (void).cxx_destruct;
- (id)attachmentForHostIdentifier:(id)arg1;
- (void)setHostIdentifier:(id)arg1 forAttachment:(id)arg2;
@property(readonly, nonatomic) NSArray *attachments;
- (id)initWithContextID:(id)arg1;
- (id)init;
- (void)dealloc;

@end


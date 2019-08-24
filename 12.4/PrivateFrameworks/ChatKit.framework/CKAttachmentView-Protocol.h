//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/NSObject-Protocol.h>

@class CKMediaObject, UIImageView;

@protocol CKAttachmentView <NSObject>
@property(readonly, nonatomic) UIImageView *iconImageView;
@property(retain, nonatomic) CKMediaObject *mediaObject;
- (void)prepareForReuse;
- (void)prepareForDisplay;
@end

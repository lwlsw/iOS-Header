//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@interface CloudServiceCapabilitiesOperation : ISOperation
{
    _Bool _allowsPromptingForPrivacyAcknowledgement;
    _Bool _allowsBypassOfPrivacyAcknowledgement;
    CDUnknownBlockType _responseBlock;
}

- (void).cxx_destruct;
- (id)_newResponseWithSubscriptionStatus:(id)arg1;
- (void)run;
@property(copy) CDUnknownBlockType responseBlock;
@property(nonatomic) _Bool allowsBypassOfPrivacyAcknowledgement;
@property(nonatomic) _Bool allowsPromptingForPrivacyAcknowledgement;

@end

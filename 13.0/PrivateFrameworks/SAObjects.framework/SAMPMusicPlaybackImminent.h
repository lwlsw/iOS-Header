//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSString;

@interface SAMPMusicPlaybackImminent : SADomainCommand
{
}

+ (id)musicPlaybackImminentWithDictionary:(id)arg1 context:(id)arg2;
+ (id)musicPlaybackImminent;
- (_Bool)mutatingCommand;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSString *preloadedUserSharedUserId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

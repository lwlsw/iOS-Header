//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAAssistantCreated : SABaseClientBoundCommand
{
}

+ (id)assistantCreatedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)assistantCreated;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSString *speechId;
@property(copy, nonatomic) NSString *assistantId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end


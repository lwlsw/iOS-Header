//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SASettingSetBool.h>

@class NSString;

@interface SASettingSetSiriAuthorizationForApp : SASettingSetBool
{
}

+ (id)setSiriAuthorizationForAppWithDictionary:(id)arg1 context:(id)arg2;
+ (id)setSiriAuthorizationForApp;
- (_Bool)mutatingCommand;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSString *bundleId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

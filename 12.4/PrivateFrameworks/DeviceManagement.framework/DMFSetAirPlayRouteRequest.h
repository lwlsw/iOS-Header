//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString;

@interface DMFSetAirPlayRouteRequest : DMFTaskRequest
{
    _Bool _suppressPasscodePrompt;
    NSString *_routeUID;
    NSString *_password;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool suppressPasscodePrompt; // @synthesize suppressPasscodePrompt=_suppressPasscodePrompt;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *routeUID; // @synthesize routeUID=_routeUID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

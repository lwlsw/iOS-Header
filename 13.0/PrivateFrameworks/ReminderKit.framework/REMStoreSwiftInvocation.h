//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ReminderKit/NSSecureCoding-Protocol.h>

@class NSString, REMFetchResultToken;

@interface REMStoreSwiftInvocation : NSObject <NSSecureCoding>
{
    REMFetchResultToken *_fetchResultTokenToDiffAgainst;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) REMFetchResultToken *fetchResultTokenToDiffAgainst; // @synthesize fetchResultTokenToDiffAgainst=_fetchResultTokenToDiffAgainst;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *name;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithFetchResultTokenToDiffAgainst:(id)arg1;

@end


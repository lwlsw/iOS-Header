//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriActivation/NSCopying-Protocol.h>
#import <SiriActivation/NSSecureCoding-Protocol.h>

@class NSNumber;

@interface SASDirectActionEventTransport : NSObject <NSCopying, NSSecureCoding>
{
    NSNumber *_event;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSNumber *event; // @synthesize event=_event;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)directActionEvent;
- (id)description;
- (id)initWithAFDirectActionEvent:(long long)arg1;

@end

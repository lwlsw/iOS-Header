//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface HDXPCAlarmEvent : NSObject
{
    _Bool _isUserVisible;
    NSString *_name;
    NSDate *_fireDate;
}

+ (id)_eventWithName:(id)arg1;
@property(readonly, nonatomic) _Bool isUserVisible; // @synthesize isUserVisible=_isUserVisible;
@property(readonly, copy, nonatomic) NSDate *fireDate; // @synthesize fireDate=_fireDate;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithName:(id)arg1 fireDate:(id)arg2 isUserVisible:(_Bool)arg3;

@end

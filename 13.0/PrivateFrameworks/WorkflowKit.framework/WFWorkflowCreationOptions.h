//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WFWorkflowRecord;

@interface WFWorkflowCreationOptions : NSObject
{
    _Bool _deleted;
    WFWorkflowRecord *_record;
    NSString *_identifier;
    unsigned long long _location;
}

@property(nonatomic) _Bool deleted; // @synthesize deleted=_deleted;
@property(nonatomic) unsigned long long location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) WFWorkflowRecord *record; // @synthesize record=_record;
- (void).cxx_destruct;
- (id)initWithRecord:(id)arg1;
- (id)init;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, _CDContact;

@interface _CDSuggestedPerson : NSObject
{
    _CDContact *_contact;
    NSString *_interactionBundleID;
    double _rank;
    double _score;
    NSArray *_interactions;
}

@property(retain) NSArray *interactions; // @synthesize interactions=_interactions;
@property double score; // @synthesize score=_score;
@property double rank; // @synthesize rank=_rank;
@property(retain) NSString *interactionBundleID; // @synthesize interactionBundleID=_interactionBundleID;
@property(retain) _CDContact *contact; // @synthesize contact=_contact;
- (void).cxx_destruct;
- (id)description;

@end

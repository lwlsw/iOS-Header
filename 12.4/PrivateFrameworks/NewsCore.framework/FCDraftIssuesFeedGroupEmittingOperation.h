//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCFeedGroupEmittingOperation.h>

@class NSString;

@interface FCDraftIssuesFeedGroupEmittingOperation : FCFeedGroupEmittingOperation
{
    NSString *_issueListID;
}

@property(readonly, nonatomic) NSString *issueListID; // @synthesize issueListID=_issueListID;
- (void).cxx_destruct;
- (void)performOperation;
- (_Bool)validateOperation;
- (id)initWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3 groupEmitterIdentifier:(id)arg4 issueListID:(id)arg5;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/NSObject-Protocol.h>

@class NSString, PQLFormatInjection;

@protocol BRCJobsMatching <NSObject>
- (PQLFormatInjection *)matchingJobsWhereSQLClause;
- (NSString *)jobsDescription;
@end

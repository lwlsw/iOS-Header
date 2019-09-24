//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CKSpotlightQueryUtilities : NSObject
{
}

+ (id)matchedRankingQueriesForResult:(id)arg1 withRankingQueryCount:(unsigned long long)arg2;
+ (id)rankingQueryForField:(id)arg1 matchType:(unsigned long long)arg2 searchString:(id)arg3;
+ (id)rankingQueriesForSearchString:(id)arg1 attributes:(id)arg2;
+ (id)queryStringForSearchString:(id)arg1 attributes:(id)arg2 matchType:(unsigned long long)arg3;
+ (unsigned long long)countOfNonSpaceCharsInSearchString:(id)arg1;
+ (id)stringByEscapingSearchString:(id)arg1;
+ (id)annotatedResultStringWithSearchText:(id)arg1 resultText:(id)arg2 primaryTextColor:(id)arg3 primaryFont:(id)arg4 annotatedTextColor:(id)arg5 annotatedFont:(id)arg6;
+ (id)detailsSearchControllers;
+ (id)defaultSearchControllers;

@end

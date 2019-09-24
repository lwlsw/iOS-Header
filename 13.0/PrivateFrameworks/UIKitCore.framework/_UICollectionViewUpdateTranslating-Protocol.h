//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSIndexPath, NSString;

@protocol _UICollectionViewUpdateTranslating <NSObject>
- (long long)finalSectionCount;
- (long long)initialSectionCount;
- (struct _NSRange)finalSectionGlobalItemRangeForSection:(long long)arg1;
- (struct _NSRange)initalSectionGlobalItemRangeForSection:(long long)arg1;
- (NSIndexPath *)initialIndexPathForSupplementaryElementOfKind:(NSString *)arg1 forFinalIndexPath:(NSIndexPath *)arg2;
- (NSIndexPath *)finalIndexPathForSupplementaryElementOfKind:(NSString *)arg1 forInitialIndexPath:(NSIndexPath *)arg2;
- (long long)initialSectionIndexForFinalSectionIndex:(long long)arg1;
- (long long)finalSectionIndexForInitialSectionIndex:(long long)arg1;
- (NSIndexPath *)initialIndexPathForFinalIndexPath:(NSIndexPath *)arg1;
- (NSIndexPath *)finalIndexPathForInitialIndexPath:(NSIndexPath *)arg1;
- (long long)initialGlobalIndexForFinalGlobalIndex:(long long)arg1;
- (long long)finalGlobalIndexForInitialGlobalIndex:(long long)arg1;
@end

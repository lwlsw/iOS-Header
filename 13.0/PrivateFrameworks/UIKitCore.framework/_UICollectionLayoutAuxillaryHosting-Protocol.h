//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSArray;
@protocol NSCollectionLayoutContainer, _UICollectionLayoutSupplementaryEnrolling, _UICollectionPreferredSizes;

@protocol _UICollectionLayoutAuxillaryHosting <NSObject>
- (id <_UICollectionPreferredSizes>)auxillaryHostPreferredSizes;
- (id <_UICollectionLayoutSupplementaryEnrolling>)auxillaryHostSupplementaryEnroller;
- (long long)auxillaryHostAuxillaryKind;
- (int)auxillaryHostLayoutAxis;
- (_Bool)auxillaryHostShouldLayoutRTL;
- (NSArray *)auxillaryHostAuxillaryItems;
- (id <NSCollectionLayoutContainer>)auxillaryHostContainer;
- (struct CGSize)auxillaryHostPinningContentSize;
- (struct CGSize)auxillaryHostContentSize;

@optional
- (struct CGPoint)auxillaryHostAdditionalFrameOffset;
@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/NSObject-Protocol.h>

@class NSIndexPath, UICollectionView, VUILibraryListPopoverViewCell;

@protocol VUILibraryPopoverDataSource <NSObject>
- (VUILibraryListPopoverViewCell *)popoverView:(UICollectionView *)arg1 cellForItemAtIndexPath:(NSIndexPath *)arg2;
- (long long)popoverView:(UICollectionView *)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInPopoverView:(UICollectionView *)arg1;
@end

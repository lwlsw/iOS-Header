//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/NSObject-Protocol.h>

@class SBIconListView;

@protocol SBIconListLayoutDelegate <NSObject>
- (struct CGPoint)iconListView:(SBIconListView *)arg1 originForIconCoordinate:(struct SBIconCoordinate)arg2 proposedOrigin:(struct CGPoint)arg3;

@optional
- (void)iconListViewIsNotDisplayingAnyIcons:(SBIconListView *)arg1;
@end

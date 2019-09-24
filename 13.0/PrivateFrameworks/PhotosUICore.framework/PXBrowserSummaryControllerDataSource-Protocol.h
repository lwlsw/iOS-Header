//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSDateInterval, NSString, PXBrowserSummaryController;
@protocol PXBrowserSelectionSnapshot, PXBrowserVisibleContentSnapshot;

@protocol PXBrowserSummaryControllerDataSource <NSObject>

@optional
@property(readonly, nonatomic) _Bool shouldShowImportDates;
- (_Bool)isFilteringContainerContentForBrowserSummaryController:(PXBrowserSummaryController *)arg1;
- (id <PXBrowserSelectionSnapshot>)selectionSnapshotForBrowserSummaryController:(PXBrowserSummaryController *)arg1;
- (id <PXBrowserVisibleContentSnapshot>)visibleContentSnapshotForBrowserSummaryController:(PXBrowserSummaryController *)arg1;
- (NSDateInterval *)containerDateIntervalForBrowserSummaryController:(PXBrowserSummaryController *)arg1;
- (NSString *)localizedContainerItemsCountForBrowserSummaryController:(PXBrowserSummaryController *)arg1;
- (NSString *)containerTitleForBrowserSummaryController:(PXBrowserSummaryController *)arg1;
@end

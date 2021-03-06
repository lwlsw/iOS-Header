//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "RAPInstrumentableTarget-Protocol.h"
#import "UISearchResultsUpdating-Protocol.h"

@class NSArray, NSString, UIColor;
@protocol RAPCategoryChooserDelegate;

__attribute__((visibility("hidden")))
@interface ReportAProblemCategoryChooserViewController : UITableViewController <UISearchResultsUpdating, RAPInstrumentableTarget>
{
    id <RAPCategoryChooserDelegate> _delegate;
    NSString *_selectedCategoryName;
    NSArray *_fullCategoryList;
    NSArray *_partialCategoryList;
    long long _presentationStyle;
    UIColor *_selectedTextColor;
}

@property(retain, nonatomic) UIColor *selectedTextColor; // @synthesize selectedTextColor=_selectedTextColor;
@property(nonatomic) long long presentationStyle; // @synthesize presentationStyle=_presentationStyle;
@property(retain, nonatomic) NSArray *partialCategoryList; // @synthesize partialCategoryList=_partialCategoryList;
@property(retain, nonatomic) NSArray *fullCategoryList; // @synthesize fullCategoryList=_fullCategoryList;
@property(copy, nonatomic) NSString *selectedCategoryName; // @synthesize selectedCategoryName=_selectedCategoryName;
@property(nonatomic) __weak id <RAPCategoryChooserDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (id)categoryNameAtIndexPath:(id)arg1;
- (_Bool)showingPartialSearchResults;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)updateBarButtonItems;
- (id)searchBarDefaultPlaceholder;
- (void)viewDidLoad;
- (void)cancel;
- (void)saveCategoryAndDismissIfNecessary;
- (void)didTapOnRightBarButtonItem;
- (void)fetchLocalizedCategories;
@property(readonly, nonatomic) int analyticTarget;
- (id)initWithPresentationStyle:(long long)arg1;

// Remaining properties
@property(readonly, nonatomic) int backAction;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


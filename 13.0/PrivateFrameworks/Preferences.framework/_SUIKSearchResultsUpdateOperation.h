//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSArray, UICollectionViewDiffableDataSource;
@protocol SUIKSearchResultsCollectionViewControllerDelegate;

@interface _SUIKSearchResultsUpdateOperation : NSOperation
{
    NSArray *_results;
    UICollectionViewDiffableDataSource *_diffableDataSource;
    id <SUIKSearchResultsCollectionViewControllerDelegate> _delegate;
    NSArray *_categories;
}

@property(retain, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(nonatomic) __weak id <SUIKSearchResultsCollectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UICollectionViewDiffableDataSource *diffableDataSource; // @synthesize diffableDataSource=_diffableDataSource;
@property(nonatomic) __weak NSArray *results; // @synthesize results=_results;
- (void).cxx_destruct;
- (void)main;
- (id)initWithResults:(id)arg1 diffableDataSource:(id)arg2 delegate:(id)arg3;

@end


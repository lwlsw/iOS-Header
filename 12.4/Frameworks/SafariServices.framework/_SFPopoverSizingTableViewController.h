//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class UIBlurEffect;

@interface _SFPopoverSizingTableViewController : UITableViewController
{
    UIBlurEffect *_backgroundBlurEffect;
    _Bool _didUpdateTranslucentAppearanceAtLeastOnce;
    _Bool _didHaveTranslucentAppearance;
}

+ (id)tableViewCellForSizeEstimation;
+ (void)initialize;
- (void).cxx_destruct;
- (id)backgroundColorUsingTranslucentAppearance:(_Bool)arg1;
@property(readonly, nonatomic) UIBlurEffect *backgroundBlurEffect;
- (void)updateTranslucentAppearance;
@property(readonly, nonatomic) _Bool hasTranslucentAppearance;
- (_Bool)_needsTranslucentAppearanceUpdate;
- (void)_updateTranslucentAppearanceIfNeeded;
- (double)tableViewSpacingForExtraSeparators:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)updatePreferredContentSize;
- (struct CGSize)preferredContentSize;

@end

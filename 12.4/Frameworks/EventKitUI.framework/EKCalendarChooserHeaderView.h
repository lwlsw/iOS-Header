//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class EKGroupInfoButton, UILabel, UIStackView;

@interface EKCalendarChooserHeaderView : UITableViewHeaderFooterView
{
    UIStackView *_stackView;
    UILabel *_primaryLabel;
    EKGroupInfoButton *_showAllButton;
}

@property(retain) EKGroupInfoButton *showAllButton; // @synthesize showAllButton=_showAllButton;
@property(retain) UILabel *primaryLabel; // @synthesize primaryLabel=_primaryLabel;
- (void).cxx_destruct;
- (double)contentHeight;
- (void)_contentSizeCategoryChanged:(id)arg1;
- (void)_updateStackViewAxis;
- (void)setGroup:(id)arg1;
- (void)setChooser:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1;

@end


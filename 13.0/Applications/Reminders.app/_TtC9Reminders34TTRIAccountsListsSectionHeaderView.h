//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class MISSING_TYPE, NSArray, NSString;

@interface _TtC9Reminders34TTRIAccountsListsSectionHeaderView : UITableViewHeaderFooterView
{
    MISSING_TYPE *identifier;
    MISSING_TYPE *migrateButtonState;
    MISSING_TYPE *delegate;
    MISSING_TYPE *accountID;
    MISSING_TYPE *treeCellViewModel;
    MISSING_TYPE *treeCellViewDelegate;
    MISSING_TYPE *outerStackView;
    MISSING_TYPE *innerStackView;
    MISSING_TYPE *labelView;
    MISSING_TYPE *migrateButton;
    MISSING_TYPE *migratingSpinner;
    MISSING_TYPE *disclosureView;
    MISSING_TYPE *isHighlighted;
}

- (void).cxx_destruct;
@property(nonatomic, copy) NSArray *accessibilityCustomActions;
- (_Bool)accessibilityActivate;
@property(nonatomic, copy) NSString *accessibilityHint;
@property(nonatomic, copy) NSString *accessibilityValue;
@property(nonatomic, copy) NSArray *accessibilityUserInputLabels;
@property(nonatomic) _Bool accessibilityRespondsToUserInteraction;
@property(nonatomic, copy) NSString *accessibilityLabel;
@property(nonatomic, copy) NSString *accessibilityIdentifier;
- (void)migrateButtonAction:(id)arg1;
- (void)handleLongPressGesture:(id)arg1;
- (void)toggleExpandState;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, UIButton, UIImageView;
@protocol WFInfoButtonTableViewCellDelegate;

@interface WFInfoButtonTableViewCell : UITableViewCell
{
    unsigned long long _accessoryMode;
    id <WFInfoButtonTableViewCellDelegate> _delegate;
    UIButton *_infoButton;
    UIImageView *_checkmarkView;
}

@property(readonly, nonatomic) UIImageView *checkmarkView; // @synthesize checkmarkView=_checkmarkView;
@property(readonly, nonatomic) UIButton *infoButton; // @synthesize infoButton=_infoButton;
@property(nonatomic) __weak id <WFInfoButtonTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long accessoryMode; // @synthesize accessoryMode=_accessoryMode;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
@property(nonatomic, getter=isChecked) _Bool checked;
- (void)infoButtonPressed:(id)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) NSArray *accessoryViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

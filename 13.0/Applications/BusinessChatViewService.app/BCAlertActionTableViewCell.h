//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UITableViewCell.h>

@class UIImageView, UILabel;

@interface BCAlertActionTableViewCell : UITableViewCell
{
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UIImageView *_mainImageView;
}

+ (double)heightForActionItem:(id)arg1 forWidth:(double)arg2;
+ (id)reuseIdentifierForItem:(id)arg1;
@property(readonly, nonatomic) UIImageView *mainImageView; // @synthesize mainImageView=_mainImageView;
@property(readonly, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)loadContentView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

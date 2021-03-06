//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInputUI/NSObject-Protocol.h>

@class TUIButtonBarItemView, UIBarButtonItem, UIBarButtonItemGroup;

@protocol TUIButtonBarViewProvider <NSObject>
- (struct CGSize)preferredSizeForButtonBarItem:(UIBarButtonItem *)arg1;
- (void)configureButtonBarItemView:(TUIButtonBarItemView *)arg1 forItem:(UIBarButtonItem *)arg2 group:(UIBarButtonItemGroup *)arg3;
@end


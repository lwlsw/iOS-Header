//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@protocol SKUIProxyScrollViewDelegate;

@interface SKUIProxyScrollView : UIScrollView
{
}

- (void)didMoveToWindow;
- (void)setContentInset:(struct UIEdgeInsets)arg1;

// Remaining properties
@property(nonatomic) id <SKUIProxyScrollViewDelegate> delegate; // @dynamic delegate;

@end

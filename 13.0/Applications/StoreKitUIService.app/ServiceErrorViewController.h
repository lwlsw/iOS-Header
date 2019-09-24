//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString, _UIContentUnavailableView;

@interface ServiceErrorViewController : UIViewController
{
    CDUnknownBlockType _actionBlock;
    _UIContentUnavailableView *_errorView;
}

@property(retain, nonatomic) _UIContentUnavailableView *errorView; // @synthesize errorView=_errorView;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *message;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (id)initWithActionBlock:(CDUnknownBlockType)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2 actionBlock:(CDUnknownBlockType)arg3;

@end

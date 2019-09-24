//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyUI/UIAlertViewDelegate-Protocol.h>

@class NSString, UIAlertView;

@interface TPAlertViewHelper : NSObject <UIAlertViewDelegate>
{
    CDUnknownBlockType _completionHandler;
    UIAlertView *_alertView;
}

+ (id)alertHelperWithHandler:(CDUnknownBlockType)arg1 style:(long long)arg2 title:(id)arg3 message:(id)arg4 cancelButtonTitle:(id)arg5 otherButtonTitles:(id)arg6;
+ (id)_allHelpersArray;
+ (id)_workQueue;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)_underlyingAlertView;
- (void)show;
@property(readonly) long long firstOtherButtonIndex;
- (void)dismissWithCancelAnimated:(_Bool)arg1;
- (void)dismissWithClickedButtonIndexAnimated:(long long)arg1;
- (void)setCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)_initWithTitle:(id)arg1 style:(long long)arg2 message:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UITextViewDelegate-Protocol.h"

@class UITextView;

@protocol EKExpandingTextViewDelegate <UITextViewDelegate>
- (void)textViewDidChangeContentHeight:(UITextView *)arg1;

@optional
- (_Bool)textViewShouldSignalContentSizeChange:(UITextView *)arg1;
- (void)commandI:(id)arg1;
@end


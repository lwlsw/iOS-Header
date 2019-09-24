//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol FLSpecifierTapHandlerDelegate;

@interface FLSpecifierTapHandler : NSObject
{
    id <FLSpecifierTapHandlerDelegate> _delegate;
}

@property(nonatomic) __weak id <FLSpecifierTapHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (void)stopSpinnerForSpecifier:(id)arg1;
- (void)startSpinnerForSpecifier:(id)arg1;
- (void)_handleActionForItem:(id)arg1 fromSpecifier:(id)arg2 eventSource:(unsigned long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)actionTapped:(id)arg1 eventSource:(unsigned long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;

@end

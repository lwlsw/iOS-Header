//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIInputViewSetPlacement.h>

#import <UIKitCore/NSSecureCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface UIInputViewSetPlacementAssistantOnScreen : UIInputViewSetPlacement <NSSecureCoding>
{
}

+ (double)extraHeightForInputViewSet:(id)arg1;
+ (_Bool)supportsSecureCoding;
- (struct CGRect)remoteIntrinsicContentSizeForInputViewInSet:(id)arg1 includingIAV:(_Bool)arg2;
- (_Bool)inputViewWillAppear;
- (_Bool)accessoryViewWillAppear;
- (_Bool)showsInputViews;
- (id)verticalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;
- (Class)applicatorClassForKeyboard:(_Bool)arg1;

@end

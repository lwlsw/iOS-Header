//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserNotificationsUIKit/NSObject-Protocol.h>

@class NCPreviewInteractionPresenter, UIView;

@protocol NCPreviewInteractionPresenterDelegate <NSObject>

@optional
- (void)previewInteractionPresenterDidDismiss:(NCPreviewInteractionPresenter *)arg1;
- (void)previewInteractionPresenterDidPresent:(NCPreviewInteractionPresenter *)arg1;
- (void)previewInteractionPresenterDidCommitToPresentation:(NCPreviewInteractionPresenter *)arg1;
- (void)previewInteractionPresenterDidBeginInteraction:(NCPreviewInteractionPresenter *)arg1;
- (_Bool)previewInteractionPresenterShouldBegin:(NCPreviewInteractionPresenter *)arg1;
- (UIView *)containerViewForPreviewInteractionPresenter:(NCPreviewInteractionPresenter *)arg1;
@end


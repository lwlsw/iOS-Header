//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUNavigationController.h>

#import <PhotosUI/PUPhotosSharingPresentationCoordinator-Protocol.h>

@class PUPhotosSharingViewController;

@interface PUPhotosSharingNavigationController : PUNavigationController <PUPhotosSharingPresentationCoordinator>
{
    _Bool _didStartDelayingPresentation;
    PUPhotosSharingViewController *_sharingViewController;
}

- (void).cxx_destruct;
- (void)shareSheetIsReadyForPresentation;
- (void)_viewControllerPresentationDidInitiate;
- (id)initWithSharingViewController:(id)arg1;

@end


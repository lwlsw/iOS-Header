//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface DOCLocalViewController : NSObject
{
}

+ (_Bool)presentCreateFolderViewControllerFromViewController:(id)arg1 parentItem:(id)arg2 appearance:(id)arg3 suggestedName:(id)arg4 browserProxy:(id)arg5 maxThumbnailSize:(struct CGSize)arg6;
+ (void)createBrowserViewControllerWithHostProxy:(id)arg1 configuration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)createSourceViewControllerWithHostProxy:(id)arg1 configuration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)createInfoViewControllerWithHostProxy:(id)arg1 configuration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)createTargetSelectionBrowserViewControllerWithHostProxy:(id)arg1 configuration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end


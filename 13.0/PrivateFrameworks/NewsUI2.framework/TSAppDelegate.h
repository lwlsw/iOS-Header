//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIResponder.h>

#import <NewsUI2/UIApplicationDelegate-Protocol.h>

@class MISSING_TYPE, UIWindow;

@interface TSAppDelegate : UIResponder <UIApplicationDelegate>
{
    MISSING_TYPE *resolver;
    MISSING_TYPE *window;
    MISSING_TYPE *windowToolbarManager;
    MISSING_TYPE *sessionObserver;
    MISSING_TYPE *$__lazy_storage_$_menuManager;
}

- (void).cxx_destruct;
- (id)init;
- (void)bootstrapWithWindow:(id)arg1 application:(id)arg2;
- (void)bootstrapWithContainer:(id)arg1 application:(id)arg2;
- (void)bootstrapWithApplication:(id)arg1;
@property(nonatomic, retain) UIWindow *window; // @synthesize window;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUI/SBAlertItem.h>

@class FBApplicationInfo;

@interface SBFairPlayFamilyLeaveAlertItem : SBAlertItem
{
    FBApplicationInfo *_appInfo;
}

@property(retain, nonatomic) FBApplicationInfo *appInfo; // @synthesize appInfo=_appInfo;
- (void).cxx_destruct;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (_Bool)dismissOnLock;
- (id)initWithAppInfo:(id)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "COSSetupPageViewController.h"

#import "COSBuddyController-Protocol.h"
#import "PBAutomationDocumentation-Protocol.h"

@class COSPhoneView, COSWatchView, NSString, UIButton, UILabel;

@interface COSUnlockConfirmationViewController : COSSetupPageViewController <PBAutomationDocumentation, COSBuddyController>
{
    UILabel *_titleLabel;
    COSPhoneView *_phoneView;
    COSWatchView *_watchView;
    UILabel *_subtitleLabel;
    UILabel *_detailLabel;
    UILabel *_subDetailLabel;
    UIButton *_confirmButton;
    _Bool _mandatory;
    _Bool _completed;
}

+ (_Bool)isMandatory;
+ (id)_fakeBackButtonItemForTarget:(id)arg1 withAction:(SEL)arg2;
+ (id)radarComponent;
+ (id)documentationDescription;
+ (id)subViews;
+ (id)viewsAndActions;
@property(nonatomic) _Bool completed; // @synthesize completed=_completed;
- (void).cxx_destruct;
- (void)unlockPairingComplete:(id)arg1;
- (void)confirmed;
- (void)setMandatory:(_Bool)arg1;
- (void)_updateLayout;
- (id)titleString;
- (void)loadView;
- (void)back:(id)arg1;
- (void)removeFromNavHierarchyOf:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


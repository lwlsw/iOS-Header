//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/CNAvatarViewController.h>

#import <ContactsUI/CNAvatarViewDelegate-Protocol.h>

@class CNAvatarView, CNContactStore, NSArray, NSString, PRPersonaStore;
@protocol CNSchedulerProvider, CNUILikenessRendering, NSObject><CNAvatarViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNAvatarViewController_LegacyAvatarView : CNAvatarViewController <CNAvatarViewDelegate>
{
    _Bool _threeDTouchEnabled;
    NSArray *_contacts;
    CNContactStore *_contactStore;
    PRPersonaStore *_personaStore;
    id <CNUILikenessRendering> _imageRenderer;
    unsigned long long _style;
    id <NSObject><CNAvatarViewControllerDelegate> _delegate;
    id <CNSchedulerProvider> _schedulerProvider;
    CNAvatarView *_avatarView;
}

@property(nonatomic) __weak CNAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(readonly, nonatomic) id <CNSchedulerProvider> schedulerProvider; // @synthesize schedulerProvider=_schedulerProvider;
@property(nonatomic) __weak id <NSObject><CNAvatarViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(readonly, nonatomic) id <CNUILikenessRendering> imageRenderer; // @synthesize imageRenderer=_imageRenderer;
@property(nonatomic, getter=isThreeDTouchEnabled) _Bool threeDTouchEnabled; // @synthesize threeDTouchEnabled=_threeDTouchEnabled;
@property(readonly, nonatomic) PRPersonaStore *personaStore; // @synthesize personaStore=_personaStore;
@property(readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
- (id)contacts;
- (void).cxx_destruct;
- (void)didUpdateContentForAvatarView:(id)arg1;
- (id)presentingViewControllerForAvatarView:(id)arg1;
- (void)setContacts:(id)arg1;
- (void)loadView;
- (id)initWithSettings:(id)arg1;
- (id)descriptorForRequiredKeys;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/CNContactAction.h>

#import <ContactsUI/CNContactViewControllerDelegate-Protocol.h>

@class CNContact, NSString;

__attribute__((visibility("hidden")))
@interface CNContactUpdateExistingContactAction : CNContactAction <CNContactViewControllerDelegate>
{
    CNContact *_existingContact;
}

@property(retain, nonatomic) CNContact *existingContact; // @synthesize existingContact=_existingContact;
- (void).cxx_destruct;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (void)performActionWithSender:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

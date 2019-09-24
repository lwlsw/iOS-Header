//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKitUI/EKEventEditItem.h>

#import <EventKitUI/EKEventAttachmentCellControllerDelegate-Protocol.h>
#import <EventKitUI/EKEventAttachmentEditViewControllerDelegate-Protocol.h>
#import <EventKitUI/UIDocumentPickerDelegate-Protocol.h>
#import <EventKitUI/UIDropInteractionDelegate-Protocol.h>

@class EKUITableViewCell, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface EKEventAttachmentsEditItem : EKEventEditItem <UIDocumentPickerDelegate, UIDropInteractionDelegate, EKEventAttachmentCellControllerDelegate, EKEventAttachmentEditViewControllerDelegate>
{
    NSArray *_cellControllers;
    EKUITableViewCell *_addAttachmentCell;
}

- (void).cxx_destruct;
- (void)_loadAndAddDataAttachmentFromItem:(id)arg1;
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
- (_Bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (id)footerTitle;
- (void)documentPickerWasCancelled:(id)arg1;
- (void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2;
- (void)_showAddAttachmentViewController;
- (void)attachmentEditViewController:(id)arg1 attachmentDidChange:(long long)arg2;
- (id)owningEventForAttachmentEditViewController:(id)arg1;
- (id)owningEventForAttachmentCellController:(id)arg1;
- (id)parentViewControllerForAttachmentCellController:(id)arg1;
- (id)trailingSwipeActionsConfigurationForRowAtIndex:(long long)arg1;
- (_Bool)_shouldShowAddAttachmentCell;
- (_Bool)usesDetailViewControllerForSubitem:(unsigned long long)arg1;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (void)editor:(id)arg1 didSelectSubitem:(unsigned long long)arg2;
- (id)_addAttachmentCell;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (unsigned long long)numberOfSubitems;
- (_Bool)_shouldCondenseIntoSingleItem;
- (_Bool)canBeConfiguredForCalendarConstraints:(id)arg1;
- (void)dealloc;
- (void)prepareForReload;
- (_Bool)forceTableReloadOnSave;
- (void)refreshFromCalendarItemAndStore;
- (void)_cleanUpCellControllers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

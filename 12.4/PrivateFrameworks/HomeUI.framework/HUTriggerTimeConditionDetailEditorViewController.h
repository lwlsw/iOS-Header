//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUItemTableViewController.h>

#import <HomeUI/HUDatePickerCellDelegate-Protocol.h>
#import <HomeUI/HUSignificantEventOffsetPickerDelegate-Protocol.h>

@class HFTimeRangeCondition, HUTriggerTimeConditionDetailEditorItemManager, NSString;
@protocol HUTriggerTimeConditionDetailEditorDelegate;

@interface HUTriggerTimeConditionDetailEditorViewController : HUItemTableViewController <HUSignificantEventOffsetPickerDelegate, HUDatePickerCellDelegate>
{
    id <HUTriggerTimeConditionDetailEditorDelegate> _delegate;
}

@property(readonly, nonatomic) __weak id <HUTriggerTimeConditionDetailEditorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)datePickerCell:(id)arg1 didSelectDate:(id)arg2;
- (void)significantEventOffsetPicker:(id)arg1 didSelectOffset:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(_Bool)arg4;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)allCellClasses;
- (void)_done:(id)arg1;
- (void)_cancel:(id)arg1;
- (void)viewDidLoad;
@property(readonly, nonatomic) HFTimeRangeCondition *rangeCondition;
- (id)initWithRangeCondition:(id)arg1 delegate:(id)arg2;
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) HUTriggerTimeConditionDetailEditorItemManager *itemManager; // @dynamic itemManager;
@property(readonly) Class superclass;

@end


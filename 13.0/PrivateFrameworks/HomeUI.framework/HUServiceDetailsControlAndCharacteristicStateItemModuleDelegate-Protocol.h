//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/NSObject-Protocol.h>

@class HFControlPanelItem, HFItem, HFServiceItem, HUServiceDetailsControlAndCharacteristicStateItemModule, NSSet, NSString;

@protocol HUServiceDetailsControlAndCharacteristicStateItemModuleDelegate <NSObject>
- (NSString *)controlAndCharacteristicStateItemModule:(HUServiceDetailsControlAndCharacteristicStateItemModule *)arg1 sectionFooterForControlPanelItem:(HFControlPanelItem *)arg2 forServiceItem:(HFServiceItem *)arg3;
- (NSString *)controlAndCharacteristicStateItemModule:(HUServiceDetailsControlAndCharacteristicStateItemModule *)arg1 sectionTitleForControlPanelItem:(HFControlPanelItem *)arg2 forServiceItem:(HFServiceItem *)arg3;
- (_Bool)controlAndCharacteristicStateItemModule:(HUServiceDetailsControlAndCharacteristicStateItemModule *)arg1 shouldShowSectionTitleForControlPanelItem:(HFControlPanelItem *)arg2;
- (_Bool)controlAndCharacteristicStateItemModule:(HUServiceDetailsControlAndCharacteristicStateItemModule *)arg1 shouldShowControlPanelItem:(HFControlPanelItem *)arg2;
- (NSSet *)controlAndCharacteristicStateItemModule:(HUServiceDetailsControlAndCharacteristicStateItemModule *)arg1 childItemsForItem:(HFItem *)arg2;
@end

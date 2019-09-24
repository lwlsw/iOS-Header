//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <DocumentManagerExecutables/DOCAppearanceCustomization-Protocol.h>

@class DOCAppearance, NSString;

@interface UIView (DOCAppearanceInheritance) <DOCAppearanceCustomization>
+ (void)load;
- (void)effectiveAppearanceDidChange:(id)arg1;
@property(readonly) DOCAppearance *effectiveAppearance;
- (id)_appearance;
- (id)_inheritedAppearance;
- (void)_notifyAppearanceChange:(id)arg1;
- (void)doc_didMoveToSuperview;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

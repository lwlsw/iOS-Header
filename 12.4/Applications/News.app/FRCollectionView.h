//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionView.h>

@class NSObject;

@interface FRCollectionView : UICollectionView
{
    unsigned long long _mode;
    NSObject *__accessibilityFocusedIdentifierForRestoringAfterReload;
}

@property(retain, nonatomic) NSObject *_accessibilityFocusedIdentifierForRestoringAfterReload; // @synthesize _accessibilityFocusedIdentifierForRestoringAfterReload=__accessibilityFocusedIdentifierForRestoringAfterReload;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (void)_accessibilityRestoreFocusedElementIfApplicable;
- (void)_accessibilitySaveFocusedElementIfApplicable;
- (void)reloadData;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <AppSupportUI/NUIWidgetGridViewCell-Protocol.h>

@class NUIWidgetGridView;

@interface NUIWidgetGridViewEmptyCell : UIView <NUIWidgetGridViewCell>
{
    NUIWidgetGridView *_gridView;
    double _width;
    unsigned long long _index;
}

- (void).cxx_destruct;
- (CDStruct_a157df34)donatableSpaceAllowRemeasure:(_Bool)arg1;
- (CDStruct_a157df34)donatableSpace;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;
- (id)initWithWidgetGridView:(id)arg1 item:(id)arg2 index:(unsigned long long)arg3;
@property(readonly, nonatomic) unsigned long long index;

@end

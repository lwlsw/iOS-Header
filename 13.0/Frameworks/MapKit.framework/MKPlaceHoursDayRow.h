//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKPlaceSectionRowView.h>

#import <MapKit/MKPlaceHoursViewDelegate-Protocol.h>

@class MKPlaceHoursView, NSLayoutConstraint, NSString;

__attribute__((visibility("hidden")))
@interface MKPlaceHoursDayRow : MKPlaceSectionRowView <MKPlaceHoursViewDelegate>
{
    MKPlaceHoursView *_hoursView;
    NSLayoutConstraint *_topAnchorToTopLabelBaseline;
}

@property(retain, nonatomic) NSLayoutConstraint *topAnchorToTopLabelBaseline; // @synthesize topAnchorToTopLabelBaseline=_topAnchorToTopLabelBaseline;
@property(retain, nonatomic) MKPlaceHoursView *hoursView; // @synthesize hoursView=_hoursView;
- (void).cxx_destruct;
- (void)hoursViewDidUpdate:(id)arg1;
- (void)_setUpConstraints;
- (void)_setUpViewsForPlaceHoursDayRow;
- (id)initWithBusinessHours:(id)arg1 frame:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

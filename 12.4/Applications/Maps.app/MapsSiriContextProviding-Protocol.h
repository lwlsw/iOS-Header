//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class MKMapView, NSArray;
@protocol SiriMapItemConvertible;

@protocol MapsSiriContextProviding
- (id <SiriMapItemConvertible>)selectedResult;
- (NSArray *)searchResults;
- (id <SiriMapItemConvertible>)selectedPOI;
- (MKMapView *)mapView;
@end

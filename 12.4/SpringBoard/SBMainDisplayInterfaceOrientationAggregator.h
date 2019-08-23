//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol BSInvalidatable;

@interface SBMainDisplayInterfaceOrientationAggregator : NSObject
{
    id <BSInvalidatable> _stateCaptureHandle;
}

- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)description;
- (id)_highestSourceAtOrBelow:(double)arg1 amongSources:(id)arg2;
- (void)_sortSources:(id)arg1;
- (long long)_layoutOrientation;
- (id)highestActiveInterfaceOrientationSourceBelow:(double)arg1;
- (id)highestActiveInterfaceOrientationSourceIgnoringSourcesAbove:(double)arg1;
- (id)highestActiveInterfaceOrientationSource;
- (long long)activeInterfaceOrientationAtOrBelow:(double)arg1;
- (long long)activeInterfaceOrientationBelow:(double)arg1;
@property(readonly, retain, nonatomic) NSArray *interfaceOrientationSources;
@property(readonly, nonatomic) long long activeInterfaceOrientation;
- (void)dealloc;
- (id)init;

@end

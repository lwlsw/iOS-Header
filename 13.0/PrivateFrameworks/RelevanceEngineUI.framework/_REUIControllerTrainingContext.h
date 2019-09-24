//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngineUI/REUITrainingContext.h>

@protocol _REUIControllerTrainingContextDelegate;

@interface _REUIControllerTrainingContext : REUITrainingContext
{
    double _maximumNegativeDwellTime;
    double _minimumPositiveDwellTime;
    unsigned long long _onScreenElementCount;
    id <_REUIControllerTrainingContextDelegate> _delegate;
}

@property(nonatomic) __weak id <_REUIControllerTrainingContextDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long onScreenElementCount; // @synthesize onScreenElementCount=_onScreenElementCount;
@property(nonatomic) double minimumPositiveDwellTime; // @synthesize minimumPositiveDwellTime=_minimumPositiveDwellTime;
@property(nonatomic) double maximumNegativeDwellTime; // @synthesize maximumNegativeDwellTime=_maximumNegativeDwellTime;
- (void).cxx_destruct;
- (id)interactionTypeForElement:(id)arg1;
- (_Bool)elementIsAvailable:(id)arg1;
- (id)elementsOrdered:(unsigned long long)arg1 relativeToElement:(id)arg2;

@end

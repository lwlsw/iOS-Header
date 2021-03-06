//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFDynamicEnumerationParameter.h>

@class NSString;

@interface WFIntentAppPickerParameter : WFDynamicEnumerationParameter
{
    NSString *_intentName;
}

@property(readonly, nonatomic) NSString *intentName; // @synthesize intentName=_intentName;
- (void).cxx_destruct;
- (id)localizedLabelForPossibleState:(id)arg1;
- (_Bool)alwaysShowsButton;
- (void)possibleStatesDidChange;
- (id)initWithDefinition:(id)arg1;

@end


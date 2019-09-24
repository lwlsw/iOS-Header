//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, PHMemory;

@interface PXMemoriesInlineProblemReporter : NSObject
{
    PHMemory *_memory;
    NSArray *_features;
}

@property(retain, nonatomic) NSArray *features; // @synthesize features=_features;
@property(retain, nonatomic) PHMemory *memory; // @synthesize memory=_memory;
- (void).cxx_destruct;
- (id)_headerText;
- (id)_disclaimerText;
- (id)_infoText;
- (id)_reportStringForFeatures;
- (id)feedbackMailViewController;
- (id)initWithMemory:(id)arg1 features:(id)arg2;

@end

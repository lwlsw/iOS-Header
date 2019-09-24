//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString;

@protocol PXFeedbackFormDelegate <NSObject>
- (void)userSentPositiveFeedback:(NSDictionary *)arg1 negativeFeedback:(NSDictionary *)arg2 customFeedback:(NSString *)arg3;
- (void)userIndicatedDislike;
- (void)userIndicatedLike;
- (_Bool)shouldDisplaySecondaryFeedbackButtons;
- (NSArray *)positiveFeedbackKeys;
- (NSArray *)negativeFeedbackKeys;
- (NSString *)viewTitleForRadar;
- (NSString *)longTitleText;

@optional
- (void)userDidFinish:(_Bool)arg1;
- (_Bool)shouldContinuePresentingFormAfterFeedback;
- (_Bool)wantsPositiveFeedbackSection;
- (_Bool)wantsCustomFeedbackSection;
@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface HUHomeFeatureOnboardingUtilities : NSObject
{
}

+ (id)checkVoiceProfileAvailabiltyForLanguage:(id)arg1;
+ (id)processLanguageAndMediaProfileInfo:(id)arg1;
+ (id)createPersonalIdentityDeviceLanguageMismatchList:(id)arg1;
+ (id)createMultiUserLanguageToHomePodsMapping:(id)arg1;
+ (id)analyzeHomeAssistantDevicesForSupportedMultiUserLanguages:(id)arg1;
+ (id)groupedFeaturesForOnboardingFlowKeyPaths:(id)arg1;
+ (unsigned long long)checkForMultiUserDeviceUpgradeRequirements:(id)arg1;
+ (unsigned long long)checkForOwnerUpgradeRequirementsFromResults:(id)arg1;
+ (_Bool)userHasSaidYesToVoiceIdentificationIn:(id)arg1;
+ (_Bool)isDeviceUsingASupportedMultiUserSiriLanguage:(id)arg1;
+ (_Bool)_userHasSaidYesToShowTVViewingProfilesIn:(id)arg1;
+ (id)_checkIdentifyVoicePrerequisites;
+ (_Bool)_checkIdentifyVoicePrerequisitesSimple;
+ (id)processHomeFeatureOnboarderResults:(id)arg1;
+ (_Bool)canShowIdentifyVoiceOnboardingWithUsageOptions:(id)arg1;
+ (_Bool)currentUserHasUnfinishedFeatureOnboarding;
+ (_Bool)voiceRecognitionIsSupportedForCurrentUserOnHomePod:(id)arg1;
+ (void)presentAlertConfirmingTurningOffPersonalRequestsFrom:(id)arg1;
+ (void)presentAlertConfirmingTurningOfVoiceRecognitionFrom:(id)arg1;
+ (id)fetchSupportedMultiUserLanguages:(id *)arg1;
+ (_Bool)homeHasSomeHomePodsOnSupportedMultiUserLanguages:(id)arg1;
+ (_Bool)atLeastOneHomePodHasLanguageSettings;
+ (id)onboardFeaturesForKeyPaths:(id)arg1 presentingViewController:(id)arg2 usageOptions:(id)arg3;
+ (id)onboardAllFeaturesFromPresentingViewController:(id)arg1 usageOptions:(id)arg2;
+ (id)onboardIdentifyVoiceFromPresentingViewController:(id)arg1 usageOptions:(id)arg2;

@end

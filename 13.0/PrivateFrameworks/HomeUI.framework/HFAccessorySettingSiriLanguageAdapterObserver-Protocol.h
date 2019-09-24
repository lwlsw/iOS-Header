//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/NSObject-Protocol.h>

@class HFAccessorySettingSiriLanguageAdapter, HFSiriLanguageOption, NSSet;

@protocol HFAccessorySettingSiriLanguageAdapterObserver <NSObject>

@optional
- (void)siriLanguageAdapter:(HFAccessorySettingSiriLanguageAdapter *)arg1 selectedLanguageOptionDidChange:(HFSiriLanguageOption *)arg2;
- (void)siriLanguageAdapter:(HFAccessorySettingSiriLanguageAdapter *)arg1 availableLanguageOptionsDidChange:(NSSet *)arg2;
@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RichMapsActivityCreatingTaskImpl.h"

@class NSDate, NSDictionary, NSString, NSURL, UISceneOpenURLOptions;

__attribute__((visibility("hidden")))
@interface URLHandlingTask : RichMapsActivityCreatingTaskImpl
{
    _Bool _launchedFromTTL;
    NSURL *_url;
    UISceneOpenURLOptions *_sceneOptions;
    NSDictionary *_mkOptions;
    NSDate *_ttlEventTime;
    NSString *_sourceApplication;
    struct CGSize _windowSize;
}

+ (id)taskForURL:(id)arg1 sceneOptions:(id)arg2 mkOptions:(id)arg3 windowSize:(struct CGSize)arg4;
@property(retain, nonatomic) NSString *sourceApplication; // @synthesize sourceApplication=_sourceApplication;
@property(nonatomic) struct CGSize windowSize; // @synthesize windowSize=_windowSize;
@property(retain, nonatomic) NSDate *ttlEventTime; // @synthesize ttlEventTime=_ttlEventTime;
@property(nonatomic) _Bool launchedFromTTL; // @synthesize launchedFromTTL=_launchedFromTTL;
@property(retain, nonatomic) NSDictionary *mkOptions; // @synthesize mkOptions=_mkOptions;
@property(retain, nonatomic) UISceneOpenURLOptions *sceneOptions; // @synthesize sceneOptions=_sceneOptions;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)taskFailed;
- (void)taskFinished:(id)arg1;
- (id)urlScheme;
- (void)_sendAnalytics;
- (id)initWithURL:(id)arg1 sceneOptions:(id)arg2 mkOptions:(id)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class LSApplicationProxy, NSURL, WBSAppLink;

@interface _SFNavigationResult : NSObject
{
    _Bool _loadWasUserDriven;
    LSApplicationProxy *_externalApplication;
    long long _externalApplicationCategory;
    long long _type;
    NSURL *_URL;
    WBSAppLink *_appLink;
}

+ (id)resultOfLoadingRequest:(id)arg1 isMainFrame:(_Bool)arg2 disallowRedirectToExternalApps:(_Bool)arg3 preferredApplicationBundleIdentifier:(id)arg4 redirectDecisionHandler:(CDUnknownBlockType)arg5;
+ (id)resultWithAppLink:(id)arg1;
+ (id)resultWithRedirectToExternalURL:(id)arg1 preferredApplicationBundleIdentifier:(id)arg2;
+ (id)resultOfType:(long long)arg1 withURL:(id)arg2;
@property(nonatomic) _Bool loadWasUserDriven; // @synthesize loadWasUserDriven=_loadWasUserDriven;
@property(readonly, nonatomic) WBSAppLink *appLink; // @synthesize appLink=_appLink;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) long long externalApplicationCategory; // @synthesize externalApplicationCategory=_externalApplicationCategory;
@property(readonly, nonatomic) LSApplicationProxy *externalApplication; // @synthesize externalApplication=_externalApplication;
- (void).cxx_destruct;
- (_Bool)shouldPromptWithPolicy:(long long)arg1 telephonyNavigationPolicy:(id)arg2 userAction:(id)arg3 inBackground:(_Bool)arg4;
@property(readonly, nonatomic) _Bool isRedirectToAppleServices;
@property(readonly, nonatomic) _Bool appliesOneTimeUserInitiatedActionPolicy;
- (id)_initWithType:(long long)arg1 URL:(id)arg2 externalApplication:(id)arg3 appLink:(id)arg4;

@end

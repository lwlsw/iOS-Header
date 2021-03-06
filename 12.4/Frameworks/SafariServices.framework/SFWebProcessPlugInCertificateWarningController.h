//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariServices/WBSCertificateWarningPagePresenter-Protocol.h>

@class NSString, WBSCertificateWarningPageContext, _SFWebProcessPlugInPageController, _WKRemoteObjectInterface;
@protocol WBSCertificateWarningPageHandler;

__attribute__((visibility("hidden")))
@interface SFWebProcessPlugInCertificateWarningController : NSObject <WBSCertificateWarningPagePresenter>
{
    _SFWebProcessPlugInPageController *_pageController;
    _WKRemoteObjectInterface *_certificateWarningPagePresenterInterface;
    WBSCertificateWarningPageContext *_warningPageContext;
    id <WBSCertificateWarningPageHandler> _certificateWarningPageHandlerProxy;
}

- (void).cxx_destruct;
- (void)prepareCertificateWarningPage:(id)arg1;
- (void)goBackSelected;
- (void)openClockSettings;
- (void)showCertificateInformation;
- (void)visitInsecureWebsiteWithTemporaryBypass;
- (void)visitInsecureWebsite;
- (id)_certificateWarningPageHandlerProxy;
- (void)certificateWarningPageLoaded;
- (void)injectCertificateWarningBindingsForFrame:(id)arg1 inScriptWorld:(id)arg2;
- (void)_clearCertificateWarningPagePresenterInterface;
- (void)_setUpCertificateWarningPagePresenterInterface;
- (void)dealloc;
- (id)initWithPageController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


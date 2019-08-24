//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SXMailPresenter-Protocol.h"

@class NSString;
@protocol SXHost;

@interface FRMacMailPresenter : NSObject <SXMailPresenter>
{
    id <SXHost> _host;
}

@property(readonly, nonatomic) id <SXHost> host; // @synthesize host=_host;
- (void).cxx_destruct;
- (void)presentMail:(id)arg1;
- (_Bool)canComposeMail;
- (id)initWithHost:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NFAssembly-Protocol.h"

@class NSString;
@protocol FRFeldsparContext;

@interface FRFeedAssembly : NSObject <NFAssembly>
{
    id <FRFeldsparContext> _feldsparContext;
}

@property(readonly, nonatomic) id <FRFeldsparContext> feldsparContext; // @synthesize feldsparContext=_feldsparContext;
- (void).cxx_destruct;
- (void)loadInRegistry:(id)arg1;
- (id)initWithFeldsparContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

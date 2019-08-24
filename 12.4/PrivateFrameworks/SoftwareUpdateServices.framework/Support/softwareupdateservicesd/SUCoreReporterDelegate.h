//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDelegate-Protocol.h"

@class NSString, SUCoreReporter;

@interface SUCoreReporterDelegate : NSObject <NSURLSessionDelegate>
{
    SUCoreReporter *_reporter;
}

@property(retain, nonatomic) SUCoreReporter *reporter; // @synthesize reporter=_reporter;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)dealloc;
- (id)initWithReporter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

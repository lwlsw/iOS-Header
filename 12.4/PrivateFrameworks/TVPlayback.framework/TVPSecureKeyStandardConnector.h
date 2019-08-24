//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVPlayback/TVPSecureKeyStandardLoaderConnectionHandling-Protocol.h>
#import <TVPlayback/TVPSecureKeyStandardLoaderRequestGenerating-Protocol.h>

@class NSOperationQueue, NSString;

@interface TVPSecureKeyStandardConnector : NSObject <TVPSecureKeyStandardLoaderRequestGenerating, TVPSecureKeyStandardLoaderConnectionHandling>
{
    NSOperationQueue *_operationQueue;
}

@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void).cxx_destruct;
- (void)secureKeyStandardLoader:(id)arg1 sendAsynchronousRequest:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)secureKeyStandardLoader:(id)arg1 requestForPostingData:(id)arg2 toURL:(id)arg3;
- (id)secureKeyStandardLoader:(id)arg1 requestForFetchingDataFromURL:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

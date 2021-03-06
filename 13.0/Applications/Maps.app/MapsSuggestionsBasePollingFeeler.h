//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MapsSuggestionsBaseFeeler.h"

#import "MapsSuggestionsPollingFeeler-Protocol.h"

@class NSString;
@protocol MapsSuggestionsFeelerDelegate;

__attribute__((visibility("hidden")))
@interface MapsSuggestionsBasePollingFeeler : MapsSuggestionsBaseFeeler <MapsSuggestionsPollingFeeler>
{
}

- (double)updateSignals;
- (long long)disposition;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <MapsSuggestionsFeelerDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *uniqueName;

@end


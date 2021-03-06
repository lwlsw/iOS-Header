//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MapsSuggestionsSink-Protocol.h"

@class MapsSuggestionsEngine, NSArray, NSString;
@protocol CarShortcutsProviderDelegate, MapsSuggestionsFilter;

__attribute__((visibility("hidden")))
@interface CarShortcutsProvider : NSObject <MapsSuggestionsSink>
{
    MapsSuggestionsEngine *_mapsSuggestionsEngine;
    id <MapsSuggestionsFilter> _myAdditionalFilter;
    _Bool _sinkAttached;
    NSArray *_shortcuts;
    id <CarShortcutsProviderDelegate> _delegate;
}

@property(nonatomic) _Bool sinkAttached; // @synthesize sinkAttached=_sinkAttached;
@property(nonatomic) __weak id <CarShortcutsProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *shortcuts; // @synthesize shortcuts=_shortcuts;
- (void).cxx_destruct;
- (void)invalidateForMapsSuggestionsManager:(id)arg1;
@property(readonly, nonatomic) NSString *uniqueName;
- (void)_processTopSuggestions:(id)arg1 error:(id)arg2;
- (void)_fetchSuggestions;
- (id)_createMapsSuggestionEngine;
- (void)stop;
- (void)start;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


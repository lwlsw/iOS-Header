//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PRLexicon : NSObject
{
    NSString *_localization;
    NSString *_unigramsPath;
    const void *_lexicon;
}

+ (id)lexiconWithLexicon:(const void *)arg1;
+ (id)lexiconWithLocalization:(id)arg1 unigramsPath:(id)arg2;
- (void)enumerateCorrectionEntriesForWord:(id)arg1 maxCorrections:(unsigned long long)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)enumerateCompletionEntriesForPrefix:(id)arg1 maxCompletions:(unsigned long long)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)enumerateCompletionsForPrefix:(id)arg1 maxCompletions:(unsigned long long)arg2 withBlock:(CDUnknownBlockType)arg3;
- (_Bool)getProbabilityForTokenID:(unsigned int)arg1 probability:(double *)arg2;
- (_Bool)getProbabilityForString:(id)arg1 probability:(double *)arg2;
- (id)stringForTokenID:(unsigned int)arg1;
- (unsigned int)tokenIDForString:(id)arg1;
- (void)enumerateEntriesForString:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)createCursor;
- (struct _LXLexicon *)lexicon;
- (void)dealloc;
- (id)description;
- (id)initWithLexicon:(const void *)arg1;
- (id)initWithLocalization:(id)arg1 unigramsPath:(id)arg2;

@end


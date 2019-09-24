//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TermIndex : NSObject
{
    _Bool _coreSpotlight;
    int _flags;
    int _postings_fd;
    struct __SI *_index;
    unsigned long long _cindex;
    unsigned long long _base;
    const char *_name;
    unsigned long long _postings_size;
    unsigned long long *_term_ids;
    unsigned long long _term_ids_limit;
    unsigned long long _term_ids_map_size;
    unsigned long long *_doc_ids;
    unsigned long long _doc_ids_limit;
    unsigned long long _doc_ids_map_size;
    void *_groups;
    unsigned long long _groups_limit;
    unsigned long long _groups_map_size;
}

@property(readonly, nonatomic) _Bool coreSpotlight; // @synthesize coreSpotlight=_coreSpotlight;
@property(readonly, nonatomic) unsigned long long groups_map_size; // @synthesize groups_map_size=_groups_map_size;
@property(readonly, nonatomic) unsigned long long groups_limit; // @synthesize groups_limit=_groups_limit;
@property(readonly, nonatomic) void *groups; // @synthesize groups=_groups;
@property(readonly, nonatomic) unsigned long long doc_ids_map_size; // @synthesize doc_ids_map_size=_doc_ids_map_size;
@property(readonly, nonatomic) unsigned long long doc_ids_limit; // @synthesize doc_ids_limit=_doc_ids_limit;
@property(readonly, nonatomic) unsigned long long *doc_ids; // @synthesize doc_ids=_doc_ids;
@property(readonly, nonatomic) unsigned long long term_ids_map_size; // @synthesize term_ids_map_size=_term_ids_map_size;
@property(readonly, nonatomic) unsigned long long term_ids_limit; // @synthesize term_ids_limit=_term_ids_limit;
@property(readonly, nonatomic) unsigned long long *term_ids; // @synthesize term_ids=_term_ids;
@property(readonly, nonatomic) unsigned long long postings_size; // @synthesize postings_size=_postings_size;
@property(readonly, nonatomic) int postings_fd; // @synthesize postings_fd=_postings_fd;
@property(readonly, nonatomic) const char *name; // @synthesize name=_name;
@property(readonly, nonatomic) int flags; // @synthesize flags=_flags;
@property(readonly, nonatomic) unsigned long long base; // @synthesize base=_base;
@property(readonly, nonatomic) unsigned long long cindex; // @synthesize cindex=_cindex;
@property(readonly, nonatomic) struct __SI *index; // @synthesize index=_index;
- (void)docIDsIterate:(CDUnknownBlockType)arg1;
- (void)getTerms:(CDUnknownBlockType)arg1;
- (void)getPostings:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (unsigned long long)postingCount:(unsigned long long)arg1;
- (void)directoryStoreIterate:(CDUnknownBlockType)arg1;
- (unsigned char)groupForDocID:(unsigned int)arg1;
- (unsigned long long)oidForDocID:(unsigned int)arg1;
@property(readonly, nonatomic) _Bool compact;
- (void)dealloc;
- (id)initWithIndex:(struct __SI *)arg1 cindex:(long long)arg2 atPath:(const char *)arg3 coreSpotlight:(_Bool)arg4;
- (id)init;

@end

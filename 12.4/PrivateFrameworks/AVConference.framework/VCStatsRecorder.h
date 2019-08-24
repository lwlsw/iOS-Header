//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCStatsRecorder : NSObject
{
    struct _opaque_pthread_rwlock_t _stateRWLock;
    CDStruct_b5e1e8f2 _localStats[128];
    unsigned short _currentLocalStatsIndex;
    unsigned int _uplinkServerStatsByteUsed;
}

- (int)serverStatsSizeInByteForUplink:(_Bool)arg1 connection:(id)arg2;
- (CDStruct_b5e1e8f2)getMostRecentLocalStats;
- (void)getLocalStats:(unsigned short)arg1 localSessionStats:(CDStruct_b5e1e8f2 *)arg2;
- (void)updateSessionStats:(unsigned short)arg1 connection:(id)arg2 totalPacketSent:(unsigned int)arg3 totalPacketReceived:(unsigned int)arg4;
- (void)dealloc;
- (id)init;

@end

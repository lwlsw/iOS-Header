//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDCloudZoneChange.h>

@class HMDCloudShareGroupChange;

@interface HMDCloudHomeZoneChange : HMDCloudZoneChange
{
    HMDCloudShareGroupChange *_shareGroupChange;
}

@property(retain, nonatomic) HMDCloudShareGroupChange *shareGroupChange; // @synthesize shareGroupChange=_shareGroupChange;
- (void).cxx_destruct;
- (id)objectChanges;
- (id)changeWithRecordName:(id)arg1;
- (id)changeWithObjectID:(id)arg1;
- (void)flushAllChangesToCache;
- (void)setDeleteAsProcessedWithRecordID:(id)arg1;
- (void)resetRecordWithRecordID:(id)arg1;
- (void)setSaveAsProcessedWithRecord:(id)arg1;
- (void)fetchBatchToUpload:(CDUnknownBlockType)arg1;
- (_Bool)moreChangesToProcess;
- (void)loadCloudRecordsAndDetermineDeletesFromCache:(CDUnknownBlockType)arg1;
- (void)addChangeWithDeletedRecordID:(id)arg1;
- (void)addChangeWithRecord:(id)arg1;
- (void)addChangeWithObjectChange:(id)arg1;
- (id)initWithZone:(id)arg1 temporaryCache:(_Bool)arg2;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLSCurationDebugCluster, NSMapTable, NSString;

@interface CLSCurationDebugInfo : NSObject
{
    CLSCurationDebugCluster *_rootCluster;
    NSMapTable *_debugItemByItem;
    NSMapTable *_debugClusterByCluster;
    NSString *_agent;
    NSString *_stage;
}

@property(copy, nonatomic) NSString *stage; // @synthesize stage=_stage;
@property(copy, nonatomic) NSString *agent; // @synthesize agent=_agent;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)endTentativeSectionWithSuccess:(_Bool)arg1;
- (void)beginTentativeSection;
- (void)resetWithReason:(id)arg1;
- (void)dedupItems:(id)arg1 toItem:(id)arg2 withDedupingType:(unsigned long long)arg3;
- (void)chooseItems:(id)arg1 inItems:(id)arg2 withReason:(id)arg3;
- (void)chooseItems:(id)arg1 inCluster:(id)arg2 withReason:(id)arg3;
- (void)chooseItem:(id)arg1 inItems:(id)arg2 withReason:(id)arg3;
- (void)chooseItem:(id)arg1 inCluster:(id)arg2 withReason:(id)arg3;
- (void)setUnclusteredItemsState:(unsigned long long)arg1 withReason:(id)arg2;
- (void)setState:(unsigned long long)arg1 ofItems:(id)arg2 withReason:(id)arg3;
- (void)setState:(unsigned long long)arg1 ofItem:(id)arg2 withReason:(id)arg3;
- (void)setState:(unsigned long long)arg1 ofCluster:(id)arg2 withReason:(id)arg3;
- (void)setClusters:(id)arg1 withReason:(id)arg2;
- (id)debugClusterForCluster:(id)arg1;
- (id)debugItemsForItems:(id)arg1;
- (id)debugItemForItem:(id)arg1;
- (id)debugInfoForCluster:(id)arg1;
- (id)initWithDebugCluster:(id)arg1;
- (id)initWithItems:(id)arg1;

@end

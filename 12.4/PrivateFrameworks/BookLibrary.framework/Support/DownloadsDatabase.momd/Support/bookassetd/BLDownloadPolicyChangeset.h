//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface BLDownloadPolicyChangeset : NSObject <NSCopying>
{
    int _changesetType;
    NSDictionary *_downloadProperties;
    long long _networkType;
    NSSet *_policyIDs;
}

@property(copy, nonatomic) NSSet *policyIdentifiers; // @synthesize policyIdentifiers=_policyIDs;
@property(nonatomic) long long networkType; // @synthesize networkType=_networkType;
@property(copy, nonatomic) NSDictionary *downloadPropertiesForStoppedDownloads; // @synthesize downloadPropertiesForStoppedDownloads=_downloadProperties;
@property(nonatomic) int changesetType; // @synthesize changesetType=_changesetType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPolicyIdentifiers:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface CKDPZoneCapabilities : PBCodable <NSCopying>
{
    int _sharingType;
    _Bool _atomicSaves;
    _Bool _ckql;
    _Bool _fetchChanges;
    _Bool _hierarchicalSharing;
    _Bool _sharing;
    _Bool _zoneSharing;
    struct {
        unsigned int sharingType:1;
        unsigned int atomicSaves:1;
        unsigned int ckql:1;
        unsigned int fetchChanges:1;
        unsigned int hierarchicalSharing:1;
        unsigned int sharing:1;
        unsigned int zoneSharing:1;
    } _has;
}

@property(nonatomic) _Bool hierarchicalSharing; // @synthesize hierarchicalSharing=_hierarchicalSharing;
@property(nonatomic) _Bool zoneSharing; // @synthesize zoneSharing=_zoneSharing;
@property(nonatomic) _Bool ckql; // @synthesize ckql=_ckql;
@property(nonatomic) _Bool sharing; // @synthesize sharing=_sharing;
@property(nonatomic) _Bool fetchChanges; // @synthesize fetchChanges=_fetchChanges;
@property(nonatomic) _Bool atomicSaves; // @synthesize atomicSaves=_atomicSaves;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasHierarchicalSharing;
@property(nonatomic) _Bool hasZoneSharing;
- (int)StringAsSharingType:(id)arg1;
- (id)sharingTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasSharingType;
@property(nonatomic) int sharingType; // @synthesize sharingType=_sharingType;
@property(nonatomic) _Bool hasCkql;
@property(nonatomic) _Bool hasSharing;
@property(nonatomic) _Bool hasFetchChanges;
@property(nonatomic) _Bool hasAtomicSaves;

@end

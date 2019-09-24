//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItem.h>

@class NSSet, NSString;

@interface HUCameraUsageOptionItem : HFItem
{
    unsigned long long _presence;
    unsigned long long _usage;
    unsigned long long _sortOrder;
    NSSet *_cameraProfiles;
}

+ (unsigned long long)sortOrderForUsage:(unsigned long long)arg1;
@property(readonly, copy, nonatomic) NSSet *cameraProfiles; // @synthesize cameraProfiles=_cameraProfiles;
@property(readonly, nonatomic) unsigned long long sortOrder; // @synthesize sortOrder=_sortOrder;
@property(readonly, nonatomic) unsigned long long usage; // @synthesize usage=_usage;
@property(readonly, nonatomic) unsigned long long presence; // @synthesize presence=_presence;
- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
@property(readonly, nonatomic) NSString *privacyDescription;
- (id)initWithPresence:(unsigned long long)arg1 cameraUsage:(unsigned long long)arg2 cameraProfiles:(id)arg3;

@end

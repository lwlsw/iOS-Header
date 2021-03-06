//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosImagingFoundation/IPAAutoSettings-Protocol.h>

@class NSString;

@interface IPAAutoSettings : NSObject <IPAAutoSettings>
{
    NSString *_identifier;
}

+ (id)pendingWithIdentifier:(id)arg1;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)archiveDictionary;
- (_Bool)applyArchiveDictionary:(id)arg1;
- (_Bool)isEqualToAutoSettings:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool pending;
- (id)initWithIdentifier:(id)arg1;
- (id)init;
- (void)_archiveIntoDictionary:(id)arg1;
- (_Bool)_applyArchiveDictionary:(id)arg1;

// Remaining properties
@property(readonly) Class superclass;

@end


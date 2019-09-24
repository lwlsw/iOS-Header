//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BBSectionIcon, NSDictionary, NSString;

@interface BLTGizmoLegacyMapSectionInfo : NSObject
{
    NSDictionary *_notificationMap;
    BBSectionIcon *_icon;
    NSString *_displayName;
}

@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) BBSectionIcon *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *mappedParentSectionID;
@property(readonly, copy, nonatomic) NSString *mappedSectionID;
- (id)initWithNotificationMap:(id)arg1;

@end

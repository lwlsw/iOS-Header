//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKRemoteComplication.h>

@class NTKCompanion3rdPartyApp;

@interface NTKCompanionRemoteComplication : NTKRemoteComplication
{
    NTKCompanion3rdPartyApp *_app;
}

+ (id)complicationWithApp:(id)arg1;
@property(retain, nonatomic) NTKCompanion3rdPartyApp *app; // @synthesize app=_app;
- (void).cxx_destruct;
- (id)localizedDetailText;

@end

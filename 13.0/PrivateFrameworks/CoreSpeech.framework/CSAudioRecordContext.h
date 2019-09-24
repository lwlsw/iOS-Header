//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpeech/NSCopying-Protocol.h>

@class NSString;
@protocol OS_xpc_object;

@interface CSAudioRecordContext : NSObject <NSCopying>
{
    _Bool _alwaysUseRemoteBuiltInMic;
    long long _type;
    NSString *_deviceId;
}

+ (id)recordTypeString:(long long)arg1;
+ (id)defaultContext;
+ (id)contextForServerInvoke;
+ (id)contextForVoiceTriggerTraining;
+ (id)contextForBTLE;
+ (id)contextForJarvisWithDeviceId:(id)arg1;
+ (id)contextForBuiltInVoiceTrigger;
+ (id)contextForOpportuneSpeakerListener;
+ (id)contextForHearstVoiceTriggerWithDeviceId:(id)arg1;
@property(nonatomic) _Bool alwaysUseRemoteBuiltInMic; // @synthesize alwaysUseRemoteBuiltInMic=_alwaysUseRemoteBuiltInMic;
@property(retain, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *xpcObject;
- (long long)avvcActivationMode:(long long)arg1;
- (long long)recordTypeFromAVVCActivationMode:(long long)arg1;
- (_Bool)isStarkTriggered;
- (_Bool)isServerInvoked;
- (_Bool)isJarvisVoiceTriggered;
- (_Bool)isRTSTriggered;
- (_Bool)isHearstDoubleTapTriggered;
- (_Bool)isHearstVoiceTriggered;
- (_Bool)isTriggeredFromHearst;
- (_Bool)isBuiltInVoiceTriggered;
- (_Bool)isVoiceTriggered;
- (_Bool)isEqual:(id)arg1;
- (id)_createAVVCContextWithType:(long long)arg1 deviceId:(id)arg2;
- (id)avvcContext;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRecordType:(long long)arg1 deviceId:(id)arg2;
- (id)initWithAVVCContext:(id)arg1;
- (id)initWithXPCObject:(id)arg1;
- (id)avvcContextSettings;

@end

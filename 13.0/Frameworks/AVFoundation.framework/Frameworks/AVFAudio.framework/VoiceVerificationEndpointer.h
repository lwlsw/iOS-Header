//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVFAudio/Endpointer-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VoiceVerificationEndpointer : NSObject <Endpointer>
{
}

@property double endWaitTime;
@property double interspeechWaitTime;
@property double startWaitTime;
@property int endpointMode;
- (void)reset;
- (int)getStatus:(struct AudioQueueBuffer *)arg1;
- (_Bool)configureWithASBD:(struct AudioStreamBasicDescription *)arg1 andFrameRate:(unsigned int)arg2;
- (_Bool)configureWithSampleRate:(double)arg1 andFrameRate:(unsigned int)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/VCObject.h>

#import <AVConference/VCAudioIOSink-Protocol.h>
#import <AVConference/VCAudioPowerSpectrumDelegate-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VCAudioPowerSpectrumMeter : VCObject <VCAudioPowerSpectrumDelegate, VCAudioIOSink>
{
    id _delegate;
    unsigned short _audioSpectrumBinCount;
    double _audioSpectrumRefreshRate;
    unsigned int _lastDeliveryTime;
    struct atomic_flag _isProcessingOutput;
    NSMutableDictionary *_audioPowerSpectrums;
    NSMutableDictionary *_outputPowerSpectrums;
    struct opaqueCMSimpleQueue *_streamTokenRemovedEventQueue;
    struct opaqueCMSimpleQueue *_streamTokenAddedEventQueue;
}

@property(readonly, nonatomic) NSDictionary *audioPowerSpectrums; // @synthesize audioPowerSpectrums=_audioPowerSpectrums;
- (void)pushAudioSamples:(struct opaqueVCAudioBufferList *)arg1;
- (void)didUpdateAudioPowerSpectrum:(id)arg1;
- (void)releaseAudioPowerSpectrumForStreamToken:(id)arg1;
- (void)registerNewAudioPowerSpectrumForStreamToken:(id)arg1 spectrumSource:(id)arg2;
- (void)processOutput;
- (void)processInternalEvents;
- (id)delegate;
- (void)dealloc;
- (id)initWithBinCount:(unsigned short)arg1 refreshRate:(double)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


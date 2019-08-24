//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpeech/CSAlarmMonitorDelegate-Protocol.h>
#import <CoreSpeech/CSMediaPlayingMonitorDelegate-Protocol.h>
#import <CoreSpeech/CSSpeechManagerDelegate-Protocol.h>
#import <CoreSpeech/CSTimerMonitorDelegate-Protocol.h>
#import <CoreSpeech/CSVoiceTriggerDelegate-Protocol.h>

@class CSAsset, CSSmartSiriVolumeEnablePolicy, NSString, NSUserDefaults;
@protocol CSSmartSiriVolumeDelegate, OS_dispatch_queue;

@interface CSSmartSiriVolume : NSObject <CSMediaPlayingMonitorDelegate, CSAlarmMonitorDelegate, CSTimerMonitorDelegate, CSSpeechManagerDelegate, CSVoiceTriggerDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    struct unique_ptr<SmartSiriVolume, std::__1::default_delete<SmartSiriVolume>> _smartSiriVolumeNoiseLevel;
    struct unique_ptr<SmartSiriVolume, std::__1::default_delete<SmartSiriVolume>> _smartSiriVolumeLKFS;
    struct vector<float, std::__1::allocator<float>> _floatBuffer;
    NSUserDefaults *_defaults;
    CSSmartSiriVolumeEnablePolicy *_ssvEnablePolicy;
    unsigned long long _startAnalyzeSampleCount;
    unsigned long long _samplesFed;
    unsigned long long _processedSampleCount;
    _Bool _isStartSampleCountMarked;
    _Bool _shouldPauseSSVProcess;
    _Bool _shouldPauseLKFSProcess;
    _Bool _alarmSoundIsFiring;
    _Bool _timerSoundIsFiring;
    _Bool _mediaIsPlaying;
    CSAsset *_currentAsset;
    float _musicVolumeDB;
    float _alarmVolume;
    unsigned long long _noiseLevelChannelBitset;
    unsigned long long _LKFSChannelBitset;
    unsigned int _energyBufferSize;
    unsigned int _noiseLowerPercentile;
    unsigned int _noiseUpperPercentile;
    unsigned int _LKFSLowerPercentile;
    unsigned int _LKFSUpperPercentile;
    float _noiseTimeConstant;
    float _noiseMicSensitivityOffset;
    float _LKFSTimeConstant;
    float _LKFSMicSensitivityOffset;
    float _noiseTTSMappingInputRangeLow;
    float _noiseTTSMappingInputRangeHigh;
    float _noiseTTSMappingOutputRangeLow;
    float _noiseTTSMappingOutputRangeHigh;
    float _LKFSTTSMappingInputRangeLow;
    float _LKFSTTSMappingInputRangeHigh;
    float _LKFSTTSMappingOutputRangeLow;
    float _LKFSTTSMappingOutputRangeHigh;
    float _userOffsetInputRangeLow;
    float _userOffsetInputRangeHigh;
    float _userOffsetOutputRangeLow;
    float _userOffsetOutputRangeHigh;
    float _TTSVolumeLowerLimitDB;
    float _TTSVolumeUpperLimitDB;
    float _noiseWeight;
    id <CSSmartSiriVolumeDelegate> _delegate;
}

@property(nonatomic) __weak id <CSSmartSiriVolumeDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (float)_getMusicVolumeDB:(float)arg1;
- (float)_convertDB2Mag:(float)arg1;
- (void)_setDefaultParameters;
- (void)_setStartAnalyzeTime:(unsigned long long)arg1;
- (void)_resetStartAnalyzeTime;
- (void)CSVolumeMonitor:(id)arg1 didReceiveAlarmVolumeChanged:(float)arg2;
- (void)CSVolumeMonitor:(id)arg1 didReceiveMusicVolumeChanged:(float)arg2;
- (void)CSTimerMonitor:(id)arg1 didReceiveTimerChanged:(long long)arg2;
- (void)CSAlarmMonitor:(id)arg1 didReceiveAlarmChanged:(long long)arg2;
- (void)CSMediaPlayingMonitor:(id)arg1 didReceiveMediaPlayingChanged:(long long)arg2;
- (float)_combineResultsWithOptimalFromNoise:(float)arg1 andOptimalFromLkfs:(float)arg2 withUserOffset:(float)arg3;
- (float)_estimatedTTSVolume:(float)arg1 lowerLimit:(float)arg2 upperLimit:(float)arg3 TTSmappingInputRangeLow:(float)arg4 TTSmappingInputRangeHigh:(float)arg5 TTSmappingOutputRangeLow:(float)arg6 TTSmappingOutputRangeHigh:(float)arg7;
- (float)_scaleInputWithInRangeOutRange:(float)arg1 minIn:(float)arg2 maxIn:(float)arg3 minOut:(float)arg4 maxOut:(float)arg5;
- (float)estimatedTTSVolumeForNoiseLevelAndLKFS:(float)arg1 LKFS:(float)arg2;
- (void)voiceTriggerDidDetectKeyword:(id)arg1 deviceId:(id)arg2;
- (void)speechManagerDidStopForwarding:(id)arg1 forReason:(long long)arg2;
- (void)speechManagerDidStartForwarding:(id)arg1 successfully:(_Bool)arg2 error:(id)arg3;
- (void)speechManagerRecordBufferAvailable:(id)arg1 buffer:(id)arg2;
- (void)speechManagerLPCMRecordBufferAvailable:(id)arg1 chunk:(id)arg2;
- (void)reset;
- (void)_resumeSSVProcessing;
- (void)_pauseSSVProcessing;
- (float)estimateSoundLevelbySoundType:(long long)arg1;
- (void)_processAudioChunk:(id)arg1 soundType:(long long)arg2;
- (void)prepareSoundLevelBufferFromSamples:(id)arg1 soundType:(long long)arg2 firedVoiceTriggerEvent:(_Bool)arg3 triggerStartTimeSampleOffset:(unsigned long long)arg4 triggerEndTimeSampleOffset:(unsigned long long)arg5;
- (void)_prepareSoundLevelBufferFromSamples:(unsigned int)arg1 soundType:(long long)arg2;
- (void)_reset;
- (void)_setAsset:(id)arg1;
- (void)setAsset:(id)arg1;
- (void)fetchInitSystemVolumes;
- (void)initializeTimerState;
- (void)initializeAlarmState;
- (void)initializeMediaPlayingState;
- (void)startSmartSiriVolume;
- (id)initWithSamplingRate:(float)arg1 asset:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCTransportStream : NSObject
{
    unsigned int _transportSessionID;
    int _vtpReceiveSocket;
    int _vtpCancelSocket;
    struct tagVCMediaQueue *_mediaQueue;
    CDUnknownBlockType _callback;
    void *_callbackContext;
    int _vtpCallbackId;
    struct fd_set _readFDsForCallback;
}

@property(nonatomic) struct tagVCMediaQueue *mediaQueue; // @synthesize mediaQueue=_mediaQueue;
- (void)processVTPPacket:(struct _VTPPacket *)arg1;
- (int)unregisterPacketCallback;
- (int)registerPacketCallbackContext:(void *)arg1 callback:(CDUnknownBlockType)arg2;
- (void)VCTransportStreamUnblock;
- (int)receivePacket:(CDStruct_88f6cd69 *)arg1;
- (int)VCTransportStreamSendPacket:(CDStruct_88f6cd69 *)arg1;
- (void)dealloc;
- (id)initWithTransportSessionID:(unsigned int)arg1 options:(id)arg2;

@end

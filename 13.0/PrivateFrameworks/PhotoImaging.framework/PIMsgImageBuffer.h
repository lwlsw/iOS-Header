//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData;

@interface PIMsgImageBuffer : NSObject
{
    unsigned long long elementByteSize;
    unsigned long long rowElements;
    unsigned long long width;
    unsigned long long height;
    int format;
    struct CGColorSpace *bufferColorspace;
    NSMutableData *data;
}

@property(readonly) int format; // @synthesize format;
@property(readonly) unsigned long long height; // @synthesize height;
@property(readonly) unsigned long long width; // @synthesize width;
@property(readonly) unsigned long long rowElements; // @synthesize rowElements;
@property(readonly) unsigned long long elementByteSize; // @synthesize elementByteSize;
@property(retain) NSMutableData *data; // @synthesize data;
- (void).cxx_destruct;
- (id)image;
- (void *)bytes;
- (void)dealloc;
- (id)initWithData:(id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 bytesPerRow:(long long)arg4 bytesPerComponent:(unsigned long long)arg5 format:(int)arg6 colorspace:(struct CGColorSpace *)arg7;
- (id)initWithBytes:(void *)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 bytesPerRow:(long long)arg4 bytesPerComponent:(unsigned long long)arg5 format:(int)arg6 colorspace:(struct CGColorSpace *)arg7;

@end


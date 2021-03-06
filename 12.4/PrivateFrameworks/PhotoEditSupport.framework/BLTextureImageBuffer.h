//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoEditSupport/BLImageBuffer.h>

@class CIImage, EAGLContext;

@interface BLTextureImageBuffer : BLImageBuffer
{
    unsigned int _accumlatorTexture;
    unsigned int _accumlatorFramebuffer;
    EAGLContext *_eaglContext;
    CIImage *_ciImage;
}

- (void).cxx_destruct;
- (void)renderCIImage:(id)arg1;
- (id)ciImage;
- (void)readPixelsByAddressInBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithSize:(struct CGSize)arg1 colorManagement:(int)arg2;

@end


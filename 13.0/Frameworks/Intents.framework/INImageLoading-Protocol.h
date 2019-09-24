//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INImageServing-Protocol.h>

@class INImage, INPortableImageLoader;

@protocol INImageLoading <INImageServing>
- (void)loadDataImageFromImage:(INImage *)arg1 usingPortableImageLoader:(INPortableImageLoader *)arg2 scaledSize:(CDStruct_8caa76fc)arg3 completion:(void (^)(INImage *, NSError *))arg4;
- (_Bool)canLoadImageDataForImage:(INImage *)arg1;
@end

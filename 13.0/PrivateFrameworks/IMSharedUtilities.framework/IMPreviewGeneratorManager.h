//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface IMPreviewGeneratorManager : NSObject
{
    NSDictionary *_UTITypes;
    NSDictionary *_dynamicTypes;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSDictionary *dynamicTypes; // @synthesize dynamicTypes=_dynamicTypes;
@property(copy, nonatomic) NSDictionary *UTITypes; // @synthesize UTITypes=_UTITypes;
- (void)dealloc;
- (Class)previewGeneratorClassForUTIType:(id)arg1;
- (_Bool)_utiTypeIsHEICish:(id)arg1;
- (Class)_previewGeneratorClassForSourceURL:(id)arg1;
- (_Bool)movePreviewToDiskCache:(id)arg1 previewURL:(id)arg2 error:(id *)arg3;
- (_Bool)persistPreviewToDiskCache:(struct CGImage *)arg1 previewURL:(id)arg2 error:(id *)arg3;
- (struct CGImage *)newPreviewFromSourceURL:(id)arg1 withPreviewConstraints:(struct IMPreviewConstraints)arg2 error:(id *)arg3;
- (_Bool)sizePreviewFromSourceURL:(id)arg1 size:(out struct CGSize *)arg2 previewConstraints:(struct IMPreviewConstraints)arg3 error:(id *)arg4;
- (_Bool)generateAndPersistMapPreviewFromSourceURL:(id)arg1 previewURL:(id)arg2 size:(out struct CGSize *)arg3 previewConstraints:(struct IMPreviewConstraints)arg4 error:(id *)arg5;
- (_Bool)generateAndPersistPreviewFromSourceURL:(id)arg1 previewURL:(id)arg2 size:(out struct CGSize *)arg3 previewConstraints:(struct IMPreviewConstraints)arg4 error:(id *)arg5;
- (id)init;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSUtility/TSUZipWriter.h>

@protocol TSURandomWriteChannel;

@interface TSUZipFileWriter : TSUZipWriter
{
    id <TSURandomWriteChannel> _writeChannel;
}

+ (void)zipDirectoryAtURL:(id)arg1 toURL:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)writeChannel;
- (void).cxx_destruct;
- (id)initWithURL:(id)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CKPackageManifest : NSObject
{
}

+ (_Bool)writePackage:(id)arg1 toFile:(id)arg2 error:(id *)arg3;
+ (id)packageInClientWithBasePath:(id)arg1 contentsOfFile:(id)arg2 error:(id *)arg3;
+ (_Bool)readContentsOfFile:(id)arg1 intoPackage:(id)arg2 error:(id *)arg3;

@end

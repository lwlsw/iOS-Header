//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDictionary;

@protocol ASDRemoteJobListener
- (void)updateDownloadState:(NSDictionary *)arg1 withReply:(void (^)(_Bool))arg2;
- (void)updateProgress:(NSDictionary *)arg1 withReply:(void (^)(_Bool))arg2;
@end

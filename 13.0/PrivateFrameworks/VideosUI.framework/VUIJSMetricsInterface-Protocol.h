//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/JSExport-Protocol.h>

@class NSDictionary;

@protocol VUIJSMetricsInterface <JSExport>
- (void)recordLogEvent:(NSDictionary *)arg1;
- (void)recordPerfEvent:(NSDictionary *)arg1;
- (void)recordEvent:(NSDictionary *)arg1;
@end


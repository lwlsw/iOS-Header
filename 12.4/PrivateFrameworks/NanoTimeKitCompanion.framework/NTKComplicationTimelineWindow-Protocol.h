//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NSObject-Protocol.h>

@class NSDate;

@protocol NTKComplicationTimelineWindow <NSObject>
- (unsigned long long)rightEntryCount;
- (unsigned long long)leftEntryCount;
- (NSDate *)rightmostContiguousEntryDate;
- (NSDate *)leftmostContiguousEntryDate;
@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface _KSTaskScheduler : NSObject
{
    NSMutableDictionary *_allTasks;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *allTasks; // @synthesize allTasks=_allTasks;
- (void).cxx_destruct;
- (void)unregisterTask:(id)arg1;
- (void)registerTask:(id)arg1;
- (id)init;

@end

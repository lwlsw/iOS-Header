//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface HDDemoDataBaseSampleGeneratorObjectCollection : NSObject
{
    NSMutableArray *_objectsFromPhone;
    NSMutableArray *_objectsFromWatch;
    NSMutableDictionary *_objectsFromPhoneApps;
    NSMutableDictionary *_workoutUUIDToAssocatedObjectUUIDs;
}

- (void).cxx_destruct;
- (void)enumerateWorkoutAssociations:(CDUnknownBlockType)arg1;
- (void)setAssociatedObjectUUIDs:(id)arg1 forWorkoutUUID:(id)arg2;
- (id)objectsFromPhoneApps;
- (id)objectsFromWatch;
- (id)objectsFromPhone;
- (void)addObjectsFromWatch:(id)arg1;
- (void)addObjectFromWatch:(id)arg1;
- (void)addObjects:(id)arg1 fromPhoneAppWithBundleIdentifier:(id)arg2;
- (void)addObjectsFromPhone:(id)arg1;
- (void)addObjectFromPhone:(id)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface CKTimeLogger : NSObject <NSSecureCoding>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_childLoggers;
    NSMutableDictionary *_logs;
    CKTimeLogger *_parentLogger;
    NSString *_relationMessage;
    double _relationTime;
    NSString *_observedObjectClassName;
    NSString *_observedObjectDescription;
    NSMutableDictionary *_currentSessions;
    NSString *_parentLoggerDescription;
}

+ (_Bool)supportsSecureCoding;
+ (id)loggerForObject:(id)arg1;
@property(retain, nonatomic) NSString *parentLoggerDescription; // @synthesize parentLoggerDescription=_parentLoggerDescription;
@property(retain) NSMutableDictionary *currentSessions; // @synthesize currentSessions=_currentSessions;
@property(retain, nonatomic) NSString *observedObjectDescription; // @synthesize observedObjectDescription=_observedObjectDescription;
@property(retain, nonatomic) NSString *observedObjectClassName; // @synthesize observedObjectClassName=_observedObjectClassName;
@property(nonatomic) double relationTime; // @synthesize relationTime=_relationTime;
@property(retain, nonatomic) NSString *relationMessage; // @synthesize relationMessage=_relationMessage;
@property(nonatomic) __weak CKTimeLogger *parentLogger; // @synthesize parentLogger=_parentLogger;
- (void).cxx_destruct;
- (void)treeTraversalWithBlock:(CDUnknownBlockType)arg1;
- (void)dumpLogsForType:(id)arg1;
- (void)dumpLogs;
- (id)CKStatusReportArray;
- (void)appendBriefStatusReportToString:(id)arg1;
- (void)appendStatusReportToString:(id)arg1 withIndent:(unsigned long long)arg2 showingPointers:(_Bool)arg3;
- (void)appendStatusReportForType:(id)arg1 toString:(id)arg2 withIndent:(unsigned long long)arg3 showingPointers:(_Bool)arg4;
- (id)description;
- (void)addCustomLogOfType:(id)arg1 message:(id)arg2 from:(double)arg3 to:(double)arg4;
- (void)relateAsChildToParent:(id)arg1 message:(id)arg2;
- (void)togglePauseLoggingSessionOfType:(id)arg1 message:(id)arg2;
- (void)endLoggingSessionOfType:(id)arg1 message:(id)arg2;
- (void)intervalLoggingSessionOfType:(id)arg1 message:(id)arg2;
- (void)beginLoggingSessionOfType:(id)arg1 message:(id)arg2;
- (void)addLog:(id)arg1 forType:(id)arg2;
- (id)logsForType:(id)arg1;
@property(readonly) NSDictionary *logs;
- (void)removeChildLogger:(id)arg1;
- (void)addChildLogger:(id)arg1;
@property(readonly) NSArray *childLoggers;
- (void)setObservedObject:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initForObject:(id)arg1;
- (id)init;

@end

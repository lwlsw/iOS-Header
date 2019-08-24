//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <XCTest/NSObject-Protocol.h>

@class NSError, XCTTestRunSession;

@protocol XCTTestRunSessionDelegate <NSObject>
- (void)testRunSessionDidFinishExecutingTestPlan:(XCTTestRunSession *)arg1 reply:(void (^)(void))arg2;
- (void)testRunSession:(XCTTestRunSession *)arg1 initializationForUITestingDidFailWithError:(NSError *)arg2;
- (void)testRunSessionDidBeginInitializingForUITesting:(XCTTestRunSession *)arg1;
- (void)testRunSessionDidBeginExecutingTestPlan:(XCTTestRunSession *)arg1;
@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CPLTransaction : NSObject
{
}

+ (unsigned long long)transactionCount;
+ (id)transactions;
+ (void)endTransactionWithReason:(id)arg1;
+ (void)beginTransactionWithReason:(id)arg1 keepPower:(_Bool)arg2;

@end

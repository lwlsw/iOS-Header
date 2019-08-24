//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString;

@protocol RTUserDefaults <NSObject>
- (void)rt_synchronizeDomain:(NSString *)arg1;
- (void)rt_synchronize;
- (NSArray *)rt_copyKeyListForDomain:(NSString *)arg1;
- (void)rt_setObject:(id)arg1 forKey:(NSString *)arg2 domain:(NSString *)arg3;
- (id)rt_objectForKey:(NSString *)arg1 domain:(NSString *)arg2;
- (void)rt_refreshDomain:(NSString *)arg1;
- (void)setObject:(id)arg1 forKey:(NSString *)arg2;
- (id)objectForKey:(NSString *)arg1;
- (void)addSuiteNamed:(NSString *)arg1;
- (void)registerDefaults:(NSDictionary *)arg1;
@end

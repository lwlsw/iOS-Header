//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/NSObject-Protocol.h>

@class NSString;

@protocol REScriptBuffer <NSObject>
@property(readonly, nonatomic) unsigned short current;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (NSString *)contentForLine:(unsigned long long)arg1;
- (void)next;
@end

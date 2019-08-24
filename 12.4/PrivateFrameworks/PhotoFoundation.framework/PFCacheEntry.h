//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol NSCopying><NSObject;

@interface PFCacheEntry : NSObject
{
    id <NSCopying><NSObject> _key;
    id _value;
    unsigned long long _createTime;
    unsigned long long _lastReadTime;
    unsigned long long _readCount;
}

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)readCount;
- (unsigned long long)lastReadTime;
- (unsigned long long)createTime;
- (void)touch;
- (id)value;
- (id)key;
- (id)initWithKey:(id)arg1 value:(id)arg2;

@end

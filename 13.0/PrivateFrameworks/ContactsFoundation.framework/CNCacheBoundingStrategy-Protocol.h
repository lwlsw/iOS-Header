//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsFoundation/NSObject-Protocol.h>

@protocol NSCopying;

@protocol CNCacheBoundingStrategy <NSObject>
- (void)willAccessKey:(id <NSCopying>)arg1;
- (_Bool)shouldEvictKey:(id <NSCopying>)arg1;
- (void)willUpdateCacheBy:(unsigned long long)arg1 forKey:(id <NSCopying>)arg2 keysToEvict:(id *)arg3;
@end

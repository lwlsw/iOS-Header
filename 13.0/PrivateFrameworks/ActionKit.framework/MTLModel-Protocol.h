//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/NSCopying-Protocol.h>
#import <ActionKit/NSObject-Protocol.h>

@class NSDictionary, NSSet, NSString;
@protocol MTLModel;

@protocol MTLModel <NSObject, NSCopying>
+ (NSSet *)propertyKeys;
+ (id)modelWithDictionary:(NSDictionary *)arg1 error:(id *)arg2;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryValue;
- (_Bool)validate:(id *)arg1;
- (void)mergeValueForKey:(NSString *)arg1 fromModel:(id <MTLModel>)arg2;
- (id)initWithDictionary:(NSDictionary *)arg1 error:(id *)arg2;
@end

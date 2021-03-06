//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSString;

@interface SAKnowledgeKeyValueEntry : SABaseClientBoundCommand <SAAceSerializable>
{
}

+ (id)keyValueEntryWithDictionary:(id)arg1 context:(id)arg2;
+ (id)keyValueEntry;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSString *storeType;
@property(copy, nonatomic) NSString *storeName;
@property(copy, nonatomic) NSString *key;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


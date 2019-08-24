//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TouchML/TMLModelSerialize-Protocol.h>

@class NSString;

@interface TMLPropertyDescriptor : NSObject <TMLModelSerialize>
{
    NSString *_propertyName;
    NSString *_propertyType;
    _Bool _readonly;
    _Bool _optional;
    unsigned long long _type;
}

+ (id)decode:(const struct ProtobufCMessage *)arg1;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic, getter=isOptional) _Bool optional; // @synthesize optional=_optional;
@property(readonly, nonatomic, getter=isReadonly) _Bool readonly; // @synthesize readonly=_readonly;
@property(readonly, nonatomic) NSString *propertyName; // @synthesize propertyName=_propertyName;
- (void).cxx_destruct;
- (void)encode:(struct ProtobufCMessage *)arg1;
- (_Bool)canMergeFromPropertyDescriptor:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *typeClassName;
- (id)initWithName:(id)arg1 typeName:(id)arg2 attributes:(id)arg3;
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 attributes:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

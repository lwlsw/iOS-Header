//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/REExportedValue.h>

@interface REExportedObjectValue : REExportedValue
{
    id _object;
    _Bool _allowsEncoding;
}

- (void).cxx_destruct;
- (id)exportedValueForKey:(id)arg1;
- (_Bool)shouldEncodeProperty:(id)arg1;
- (unsigned long long)propertyCount;
- (void)enumerateValuesUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)type;
- (id)objectValue;
- (id)initWithObject:(id)arg1;

@end

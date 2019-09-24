//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WFContactLabeledValue : NSObject
{
    NSString *_label;
    id _value;
}

+ (id)localizedStringForLabel:(id)arg1;
+ (id)labeledValueWithLabel:(id)arg1 value:(id)arg2;
@property(readonly, nonatomic) id value; // @synthesize value=_value;
@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (id)description;
- (id)initWithLabel:(id)arg1 value:(id)arg2;

@end

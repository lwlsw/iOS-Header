//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface SXTextStyleAttributesMap : NSObject
{
    NSString *_string;
    NSMutableArray *_attributes;
}

@property(readonly, nonatomic) NSMutableArray *attributes; // @synthesize attributes=_attributes;
@property(readonly, nonatomic) NSString *string; // @synthesize string=_string;
- (void).cxx_destruct;
- (id)description;
- (id)attributesMapWithAttributesForRange:(struct _NSRange)arg1;
- (id)attributedString;
- (void)addAttributes:(id)arg1;
- (id)initWithString:(id)arg1;

@end

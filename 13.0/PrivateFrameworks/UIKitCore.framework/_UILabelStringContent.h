//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UILabelContent.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UILabelStringContent : _UILabelContent
{
    NSString *_string;
    struct {
        unsigned int isWidthVariant:1;
    } _flags;
}

- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)_isContentEqualToContent:(id)arg1;
- (_Bool)isEqualToAttributedString:(id)arg1;
- (_Bool)isEqualToString:(id)arg1;
- (id)attributedString;
- (id)defaultValueForAttribute:(id)arg1;
- (id)string;
- (_Bool)isNil;
- (_Bool)isWidthVariant;
- (_Bool)isAttributed;
- (long long)length;
- (id)attributedStringContent;
- (id)initWithString:(id)arg1 defaultAttributesProvider:(id)arg2;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TouchML/NSCopying-Protocol.h>
#import <TouchML/TMLRuntimeObject-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSNumber, NSParagraphStyle, NSShadow, NSString, NSTextAttachment, UIColor, UIFont;

@interface TMLAttributedString_Attributes : NSObject <NSCopying, TMLRuntimeObject>
{
    NSMutableDictionary *_attributes;
    _Bool _created;
    struct _NSRange _range;
}

@property(copy, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *accessibilityTextHeadingLevel;
@property(retain, nonatomic) NSString *accessibilitySpeechIPANotation;
@property(retain, nonatomic) NSNumber *accessibilitySpeechQueueAnnouncement;
@property(retain, nonatomic) NSString *accessibilitySpeechLanguage;
@property(nonatomic) _Bool accessibilitySpeechPunctuation;
@property(retain, nonatomic) NSNumber *accessibilitySpeechPitch;
@property(nonatomic) long long verticalGlyphForm;
@property(nonatomic) long long superscript;
@property(nonatomic) double baselineOffset;
@property(retain, nonatomic) NSShadow *shadow;
@property(retain, nonatomic) id link;
@property(nonatomic) double expansion;
@property(nonatomic) double obliqueness;
@property(retain, nonatomic) UIColor *underlineColor;
@property(retain, nonatomic) NSTextAttachment *attachment;
@property(retain, nonatomic) NSString *textEffect;
@property(nonatomic) double strokeWidth;
@property(retain, nonatomic) UIColor *strokeColor;
@property(nonatomic) long long underlineStyle;
@property(nonatomic) long long strikethroughStyle;
@property(retain, nonatomic) NSNumber *kern;
@property(nonatomic) long long ligature;
@property(retain, nonatomic) UIColor *backgroundColor;
@property(retain, nonatomic) UIColor *foregroundColor;
@property(retain, nonatomic) NSParagraphStyle *paragraphStyle;
@property(retain, nonatomic) UIFont *font;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setAXAttribute:(id)arg1 value:(id)arg2;
- (void)setAttribute:(id)arg1 value:(id)arg2;
- (void)tmlObjectCompleted;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

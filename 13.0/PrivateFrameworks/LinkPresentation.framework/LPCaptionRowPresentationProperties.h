//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class LPCaptionButtonPresentationProperties, LPCaptionPresentationProperties;

@interface LPCaptionRowPresentationProperties : NSObject
{
    LPCaptionPresentationProperties *_leading;
    LPCaptionPresentationProperties *_trailing;
    LPCaptionButtonPresentationProperties *_button;
}

@property(retain, nonatomic) LPCaptionButtonPresentationProperties *button; // @synthesize button=_button;
- (void).cxx_destruct;
- (void)applyToAllCaptions:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool hasAnyContent;
- (id)right;
- (id)left;
@property(readonly, retain, nonatomic) LPCaptionPresentationProperties *trailing;
@property(readonly, retain, nonatomic) LPCaptionPresentationProperties *leading;
- (id)init;

@end


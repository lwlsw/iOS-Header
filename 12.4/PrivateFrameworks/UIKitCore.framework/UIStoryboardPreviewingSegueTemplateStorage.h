//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCoding-Protocol.h>

@class UIStoryboardPreviewingSegueTemplate, UIStoryboardSegueTemplate, UIView;

__attribute__((visibility("hidden")))
@interface UIStoryboardPreviewingSegueTemplateStorage : NSObject <NSCoding>
{
    UIView *_sender;
    UIStoryboardPreviewingSegueTemplate *_previewTemplate;
    UIStoryboardSegueTemplate *_commitTemplate;
}

@property(nonatomic) __weak UIStoryboardSegueTemplate *commitTemplate; // @synthesize commitTemplate=_commitTemplate;
@property(nonatomic) __weak UIStoryboardPreviewingSegueTemplate *previewTemplate; // @synthesize previewTemplate=_previewTemplate;
@property(nonatomic) __weak UIView *sender; // @synthesize sender=_sender;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


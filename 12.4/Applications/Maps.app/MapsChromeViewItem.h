//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;
@protocol ChromeModeController;

__attribute__((visibility("hidden")))
@interface MapsChromeViewItem : NSObject
{
    id <ChromeModeController> _mode;
    NSDictionary *_lastSavedViewState;
}

@property(copy, nonatomic) NSDictionary *lastSavedViewState; // @synthesize lastSavedViewState=_lastSavedViewState;
@property(retain, nonatomic) id <ChromeModeController> mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct UIEdgeInsets mapInsets; // @dynamic mapInsets;
- (id)description;

@end

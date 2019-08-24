//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol PXCMMActionPerformerDelegate;

@interface PXCMMActionManager : NSObject
{
    id <PXCMMActionPerformerDelegate> _performerDelegate;
    NSMutableDictionary *_performerClassByType;
}

@property(readonly, nonatomic) NSMutableDictionary *performerClassByType; // @synthesize performerClassByType=_performerClassByType;
@property(nonatomic) __weak id <PXCMMActionPerformerDelegate> performerDelegate; // @synthesize performerDelegate=_performerDelegate;
- (void).cxx_destruct;
- (id)sendBackActionPerformer;
- (id)photosPickerActionPerformer;
- (id)messageComposeActionPerformer;
- (id)publishActionPerformer;
- (Class)actionPerformerClassForActionType:(id)arg1;
- (id)actionPerformerForActionType:(id)arg1;
- (id)init;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardServices/FBSWorkspaceSceneEvent.h>

@class NSSet;

@interface FBSWorkspaceSceneActionsEvent : FBSWorkspaceSceneEvent
{
    NSSet *_actions;
}

@property(copy, nonatomic) NSSet *actions; // @synthesize actions=_actions;
- (void).cxx_destruct;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlaybackCore/_MPCPlayerItemCommand.h>

#import <MediaPlaybackCore/MPCPlayerFeedbackCommand-Protocol.h>

@class NSString;

@interface _MPCPlayerFeedbackCommand : _MPCPlayerItemCommand <MPCPlayerFeedbackCommand>
{
    _Bool _value;
    unsigned int _command;
    NSString *_localizedTitle;
    NSString *_localizedShortTitle;
    long long _presentationStyle;
}

@property(nonatomic) _Bool value; // @synthesize value=_value;
@property(nonatomic) long long presentationStyle; // @synthesize presentationStyle=_presentationStyle;
@property(copy, nonatomic) NSString *localizedShortTitle; // @synthesize localizedShortTitle=_localizedShortTitle;
@property(copy, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(readonly, nonatomic) unsigned int command; // @synthesize command=_command;
- (void).cxx_destruct;
- (id)changeValue:(_Bool)arg1;
- (id)initWithResponse:(id)arg1 mediaRemoteCommand:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

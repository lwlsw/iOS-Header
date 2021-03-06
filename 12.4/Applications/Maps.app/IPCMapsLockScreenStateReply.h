//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IPCMessageObject.h"

__attribute__((visibility("hidden")))
@interface IPCMapsLockScreenStateReply : IPCMessageObject
{
    _Bool _displayingInSecureWindow;
    _Bool _hasSecureAppAssertion;
}

@property(readonly, nonatomic) _Bool hasSecureAppAssertion; // @synthesize hasSecureAppAssertion=_hasSecureAppAssertion;
@property(readonly, nonatomic, getter=isDisplayingInSecureWindow) _Bool displayingInSecureWindow; // @synthesize displayingInSecureWindow=_displayingInSecureWindow;
- (id)description;
- (id)dictionaryValue;
- (id)initWithDictionary:(id)arg1;
- (id)initWithHasSecureAppAssertion:(_Bool)arg1 displayingInSecureWindow:(_Bool)arg2;

@end


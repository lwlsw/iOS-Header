//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AccountEvent;

@interface AccountActiveTime : NSObject
{
    AccountEvent *_event;
    double _start;
    double _end;
}

@property double end; // @synthesize end=_end;
@property double start; // @synthesize start=_start;
@property(copy) AccountEvent *event; // @synthesize event=_event;
- (void).cxx_destruct;
- (id)diagnosticDescription;
- (id)description;

@end


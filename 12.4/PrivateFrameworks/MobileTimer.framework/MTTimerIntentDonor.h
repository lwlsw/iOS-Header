//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileTimer/MTTimerObserver-Protocol.h>

@class MTTimerStorage, NSMutableSet, NSString;

@interface MTTimerIntentDonor : NSObject <MTTimerObserver>
{
    MTTimerStorage *_storage;
    NSMutableSet *_donatedTimerIDs;
}

@property(readonly, nonatomic) NSMutableSet *donatedTimerIDs; // @synthesize donatedTimerIDs=_donatedTimerIDs;
@property(readonly, nonatomic) MTTimerStorage *storage; // @synthesize storage=_storage;
- (void).cxx_destruct;
- (void)_donateCreateTimerIntent:(id)arg1;
- (void)nextTimerDidChange:(id)arg1;
- (void)source:(id)arg1 didDismissTimer:(id)arg2;
- (void)source:(id)arg1 didRemoveTimers:(id)arg2;
- (void)source:(id)arg1 didFireTimer:(id)arg2;
- (void)source:(id)arg1 didUpdateTimers:(id)arg2;
- (void)source:(id)arg1 didAddTimers:(id)arg2;
- (id)initWithStorage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

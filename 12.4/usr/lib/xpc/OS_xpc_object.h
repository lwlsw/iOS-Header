//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <dispatch/OS_object.h>

#import <xpc/OS_xpc_object-Protocol.h>

@class NSString;

@interface OS_xpc_object : OS_object <OS_xpc_object>
{
}

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)_dispose;
- (id)init;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


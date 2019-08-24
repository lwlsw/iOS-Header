//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "RAPAuxiliaryControl-Protocol.h"

@class GEORPCarPlayAuxiliaryControl, NSString;

__attribute__((visibility("hidden")))
@interface RAPAuxiliaryControlCarPlay : NSObject <RAPAuxiliaryControl>
{
    NSString *_ID;
    GEORPCarPlayAuxiliaryControl *_reportAProblemControlMessage;
}

@property(readonly, nonatomic) GEORPCarPlayAuxiliaryControl *reportAProblemControlMessage; // @synthesize reportAProblemControlMessage=_reportAProblemControlMessage;
- (void).cxx_destruct;
- (_Bool)isSameControlAsControl:(id)arg1;
- (id)initWithInformationFromDevice:(id)arg1 accessory:(id)arg2 displayController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MRDSleepAssertion : NSObject
{
    unsigned int _assertionID;
    NSString *_name;
}

- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithName:(id)arg1 timeout:(double)arg2;

@end

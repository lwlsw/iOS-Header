//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIStatusBarAction.h>

__attribute__((visibility("hidden")))
@interface _UIStatusBarSystemNavigationAction : _UIStatusBarAction
{
    unsigned long long _destination;
}

+ (id)forwardNavigationAction;
+ (id)backNavigationAction;
+ (id)_navigationActionForDestination:(unsigned long long)arg1;
@property(nonatomic) unsigned long long destination; // @synthesize destination=_destination;

@end


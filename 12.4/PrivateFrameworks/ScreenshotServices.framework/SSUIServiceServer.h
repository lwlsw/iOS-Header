//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardServices/FBSServiceFacility.h>

@protocol SSUIServiceServerDelegate;

@interface SSUIServiceServer : FBSServiceFacility
{
    id <SSUIServiceServerDelegate> _delegate;
}

@property(nonatomic) __weak id <SSUIServiceServerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3;
- (_Bool)_handleHasAnySSUIServiceEntitlement:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end

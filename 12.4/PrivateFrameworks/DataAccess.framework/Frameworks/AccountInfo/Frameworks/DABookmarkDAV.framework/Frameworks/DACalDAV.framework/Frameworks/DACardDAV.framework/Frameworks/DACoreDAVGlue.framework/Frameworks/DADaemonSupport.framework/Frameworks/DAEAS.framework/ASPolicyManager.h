//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol ASPolicyManagerDelegate;

@interface ASPolicyManager : NSObject
{
    _Bool _updatingPolicy;
    id <ASPolicyManagerDelegate> _delegate;
}

@property(nonatomic) __weak id <ASPolicyManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool updatingPolicy; // @synthesize updatingPolicy=_updatingPolicy;
- (void).cxx_destruct;
- (id)currentPolicyKey;
- (void)policyFailedToUpdate;
- (void)policyKeyChanged:(id)arg1;
- (void)requestPolicyUpdate;
- (id)initWithAccount:(id)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNImageBasedRequest.h>

@interface VNClassifyImageAestheticsRequest : VNImageBasedRequest
{
}

+ (Class)configurationClass;
+ (const CDStruct_7d93034e *)revisionAvailability;
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;
- (_Bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;
- (id)_smartCamCombinedModelImageAestheticsClassificationsForRevision:(unsigned long long)arg1 performedInContext:(id)arg2 error:(id *)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Network/NWConnection.h>

@interface NWDatagramConnection : NWConnection
{
}

+ (id)connectionWithConnectedSocket:(int)arg1;
- (_Bool)writeDatagrams:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)readDatagramsWithMinimumCount:(unsigned long long)arg1 maximumCount:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SQLiteDatabaseStoreDescriptor : NSObject
{
    NSString *_schemaName;
    Class _sessionClass;
    Class _transactionClass;
}

@property Class transactionClass; // @synthesize transactionClass=_transactionClass;
@property Class sessionClass; // @synthesize sessionClass=_sessionClass;
@property(retain) NSString *schemaName; // @synthesize schemaName=_schemaName;
- (void).cxx_destruct;

@end

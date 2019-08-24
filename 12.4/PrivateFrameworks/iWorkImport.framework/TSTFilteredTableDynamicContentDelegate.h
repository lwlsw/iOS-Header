//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSTLayoutDynamicContentProtocol-Protocol.h>

@class NSString, TSTTableInfo;

__attribute__((visibility("hidden")))
@interface TSTFilteredTableDynamicContentDelegate : NSObject <TSTLayoutDynamicContentProtocol>
{
    TSTTableInfo *_tableInfo;
}

@property(retain, nonatomic) TSTTableInfo *tableInfo; // @synthesize tableInfo=_tableInfo;
- (void).cxx_destruct;
- (_Bool)dynamicContentMustDrawOnMainThread;
- (_Bool)cell:(id *)arg1 forCellID:(struct TSUCellCoord)arg2;
- (id)initWithTableInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

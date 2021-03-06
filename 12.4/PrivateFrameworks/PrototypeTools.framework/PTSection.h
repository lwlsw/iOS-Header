//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PrototypeTools/PTRowObserver-Protocol.h>
#import <PrototypeTools/PTSettingsKeyPathObserver-Protocol.h>

@class NSArray, NSHashTable, NSMutableArray, NSString, PTSettings;

@interface PTSection : NSObject <PTSettingsKeyPathObserver, PTRowObserver>
{
    NSArray *_rows;
    NSHashTable *_observers;
    NSMutableArray *_allRows;
    NSMutableArray *_enabledRows;
    NSString *_title;
    PTSettings *_settings;
    NSString *_submoduleKeyPath;
    NSArray *_appearanceConditions;
    CDUnknownBlockType _footerTextGetter;
    CDUnknownBlockType _unregisterBlock;
}

@property(copy, nonatomic) CDUnknownBlockType unregisterBlock; // @synthesize unregisterBlock=_unregisterBlock;
@property(copy, nonatomic) CDUnknownBlockType footerTextGetter; // @synthesize footerTextGetter=_footerTextGetter;
@property(retain, nonatomic) NSArray *appearanceConditions; // @synthesize appearanceConditions=_appearanceConditions;
@property(retain, nonatomic) NSString *submoduleKeyPath; // @synthesize submoduleKeyPath=_submoduleKeyPath;
@property(retain, nonatomic) PTSettings *settings; // @synthesize settings=_settings;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)_sendReload;
- (void)_sendInserts:(id)arg1 deletes:(id)arg2;
- (_Bool)_shouldEnableRow:(id)arg1;
- (void)_reloadEnabledRows;
- (void)_updateEnabledRows;
- (void)rowDidReload:(id)arg1;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (void)reloadSection;
- (void)enumerateEnabledRowsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateAllRowsUsingBlock:(CDUnknownBlockType)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (unsigned long long)indexOfRow:(id)arg1;
- (id)rowAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfRows;
- (void)dealloc;
- (id)initWithRows:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


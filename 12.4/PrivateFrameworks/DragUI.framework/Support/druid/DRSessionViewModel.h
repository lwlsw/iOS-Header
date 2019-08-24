//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DRClientModel, DRPrecisionMode, NSArray, NSMapTable, NSMutableArray, NSMutableDictionary, NSSet, _DUIPotentialDrop;
@protocol DRSessionViewModelDelegate;

@interface DRSessionViewModel : NSObject
{
    NSMutableDictionary *_touchModels;
    NSMutableArray *_itemModels;
    struct CGPoint _centroidWithoutTouches;
    _Bool _lastTouchEnded;
    NSMapTable *_clientModelsByClient;
    id <DRSessionViewModelDelegate> _delegate;
    long long _orientation;
    DRClientModel *_sourceClient;
    _DUIPotentialDrop *_potentialDrop;
    DRClientModel *_potentialDropDestinationClient;
    DRPrecisionMode *_precisionMode;
    double _enteredPrecisionModeY;
    double _enteredPrecisionModeTime;
}

@property(readonly, nonatomic) double enteredPrecisionModeTime; // @synthesize enteredPrecisionModeTime=_enteredPrecisionModeTime;
@property(readonly, nonatomic) double enteredPrecisionModeY; // @synthesize enteredPrecisionModeY=_enteredPrecisionModeY;
@property(retain, nonatomic) DRPrecisionMode *precisionMode; // @synthesize precisionMode=_precisionMode;
@property(retain, nonatomic) DRClientModel *potentialDropDestinationClient; // @synthesize potentialDropDestinationClient=_potentialDropDestinationClient;
@property(retain, nonatomic) _DUIPotentialDrop *potentialDrop; // @synthesize potentialDrop=_potentialDrop;
@property(readonly, nonatomic) DRClientModel *sourceClient; // @synthesize sourceClient=_sourceClient;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) __weak id <DRSessionViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=canAddTouches) _Bool canAddTouches;
@property(readonly, nonatomic) unsigned long long touchesCount;
@property(readonly, nonatomic) struct CGPoint centroid;
@property(readonly, nonatomic) NSArray *itemModels;
- (void)updateLocationWithoutTouches:(struct CGPoint)arg1;
- (void)updateLocation:(struct CGPoint)arg1 ofTouchID:(id)arg2;
- (void)invalidateImageForClient:(id)arg1 itemIndex:(unsigned long long)arg2;
- (void)takeDetail:(id)arg1 forClient:(id)arg2 itemIndex:(unsigned long long)arg3;
- (void)takePreview:(id)arg1 forClient:(id)arg2 itemIndex:(unsigned long long)arg3;
- (void)takeDragImageWithComponents:(id)arg1 forClient:(id)arg2 itemIndex:(unsigned long long)arg3;
- (void)addItem;
@property(readonly, nonatomic) NSSet *touchIDs;
- (void)removeTouchID:(id)arg1;
- (void)addTouchID:(id)arg1;
- (id)clientModelForClient:(id)arg1;
- (id)addClientModelForClient:(id)arg1 isSource:(_Bool)arg2;
- (id)init;

@end

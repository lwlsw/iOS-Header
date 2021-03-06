//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class CKFullScreenEffect, NSMutableArray;

@interface CKMomentCollectionViewCell : UICollectionViewCell
{
    CKFullScreenEffect *_effect;
    NSMutableArray *_effectViews;
}

+ (id)reuseIdentifier;
@property(retain, nonatomic) NSMutableArray *effectViews; // @synthesize effectViews=_effectViews;
@property(retain, nonatomic) CKFullScreenEffect *effect; // @synthesize effect=_effect;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)animate;
- (void)setupEffectIfNeeded;
- (void)addEffectView:(id)arg1;
- (void)prepareForReuse;

@end


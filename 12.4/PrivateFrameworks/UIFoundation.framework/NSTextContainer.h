//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIFoundation/NSCoding-Protocol.h>
#import <UIFoundation/NSTextLayoutOrientationProvider-Protocol.h>

@class NSArray, NSDictionary, NSLayoutManager, UIView;
@protocol NSTextContainerView;

@interface NSTextContainer : NSObject <NSCoding, NSTextLayoutOrientationProvider>
{
    NSLayoutManager *_layoutManager;
    UIView<NSTextContainerView> *_textView;
    struct CGSize _size;
    double _lineFragmentPadding;
    unsigned long long _maximumLines;
    struct __tcFlags {
        unsigned int widthTracksTextView:1;
        unsigned int heightTracksTextView:1;
        unsigned int observingFrameChanges:1;
        unsigned int lineBreakMode:4;
        unsigned int oldAPI:1;
        unsigned int _reserved:8;
    } _tcFlags;
    NSArray *_exclusionPaths;
    struct CGPath *_cachedBoundingPath;
    struct __CFArray *_cachedClippingAttributes;
    struct __CFArray *_cachedBounds;
    double _cacheBoundsMinY;
    double _cacheBoundsMaxY;
    double _minimumWidth;
    long long _layoutOrientation;
    NSDictionary *_attributesForExtraLineFragment;
    long long _applicationFrameworkContext;
}

+ (void)initialize;
- (id)description;
- (void)setLayoutOrientation:(long long)arg1;
@property(readonly, nonatomic) long long layoutOrientation; // @dynamic layoutOrientation;
- (_Bool)containsPoint:(struct CGPoint)arg1;
@property(readonly, nonatomic, getter=isSimpleRectangularTextContainer) _Bool simpleRectangularTextContainer;
- (struct CGRect)lineFragmentRectForProposedRect:(struct CGRect)arg1 remainingRect:(struct CGRect *)arg2;
- (struct CGRect)lineFragmentRectForProposedRect:(struct CGRect)arg1 atIndex:(unsigned long long)arg2 writingDirection:(long long)arg3 remainingRect:(struct CGRect *)arg4;
@property(nonatomic) unsigned long long maximumNumberOfLines;
@property(copy, nonatomic) NSArray *exclusionPaths;
- (void)setAttributesForExtraLineFragment:(id)arg1;
- (id)attributesForExtraLineFragment;
@property(nonatomic) long long lineBreakMode;
@property(nonatomic) double lineFragmentPadding;
@property(nonatomic) struct CGSize size;
- (struct CGSize)containerSize;
- (void)setContainerSize:(struct CGSize)arg1;
@property(nonatomic) _Bool heightTracksTextView;
@property(nonatomic) _Bool widthTracksTextView;
- (void)setTextView:(id)arg1;
- (id)textView;
- (struct CGPoint)textContainerOrigin;
- (void)replaceLayoutManager:(id)arg1;
@property(nonatomic) NSLayoutManager *layoutManager;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithSize:(struct CGSize)arg1;
- (id)initWithContainerSize:(struct CGSize)arg1;
- (void)_commonInit;
- (struct NSEdgeInsets)textContainerInsetsForView_iOS:(id)arg1;
- (double)minimumLineFragmentWidth;
- (void)setMinimumLineFragmentWidth:(double)arg1;
- (void)coordinateAccess:(CDUnknownBlockType)arg1;
- (struct NSEdgeInsets)textContainerInsetsForView:(id)arg1;
- (void)_containerTextViewFrameChanged:(id)arg1;
- (void)_resizeAccordingToTextView:(id)arg1;
- (_Bool)_containerObservesTextViewFrameChanges;

@end

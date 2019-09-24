//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLLocation, NSArray, NSDate, NSString;

@interface OKMediaItemMetadata : NSObject
{
    unsigned long long _type;
    unsigned long long _subType;
    struct CGSize _resolution;
    NSDate *_creationDate;
    unsigned long long _orientation;
    double _duration;
    double _displayTime;
    double _latitude;
    double _longitude;
    _Bool _opaque;
    NSString *_UTI;
    NSString *_name;
    NSString *_caption;
    _Bool _regionsOfInterestDetected;
    NSArray *_regionsOfInterest;
    struct CGRect _regionOfInterestContainerBounds;
}

+ (unsigned long long)alignResolution:(unsigned long long)arg1;
+ (id)keyPathsForValuesAffectingRegionsOfInterestName;
+ (id)keyPathsForValuesAffectingHasRegionsOfInterestName;
+ (id)keyPathsForValuesAffectingHasRegionsOfInterest;
+ (id)keyPathsForValuesAffectingLocationCoordinate;
+ (id)keyPathsForValuesAffectingLocation;
+ (id)keyPathsForValuesAffectingAspectRatio;
@property struct CGRect regionOfInterestContainerBounds; // @synthesize regionOfInterestContainerBounds=_regionOfInterestContainerBounds;
@property _Bool regionsOfInterestDetected; // @synthesize regionsOfInterestDetected=_regionsOfInterestDetected;
@property(copy) NSString *caption; // @synthesize caption=_caption;
@property(copy) NSString *name; // @synthesize name=_name;
@property(copy) NSString *UTI; // @synthesize UTI=_UTI;
@property _Bool opaque; // @synthesize opaque=_opaque;
@property double longitude; // @synthesize longitude=_longitude;
@property double latitude; // @synthesize latitude=_latitude;
@property double displayTime; // @synthesize displayTime=_displayTime;
@property double duration; // @synthesize duration=_duration;
@property unsigned long long orientation; // @synthesize orientation=_orientation;
@property(retain) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property struct CGSize resolution; // @synthesize resolution=_resolution;
@property unsigned long long subType; // @synthesize subType=_subType;
@property unsigned long long type; // @synthesize type=_type;
- (_Bool)writeToFileURL:(id)arg1;
- (id)initWithFileURL:(id)arg1;
- (unsigned long long)bestResolutionForSize:(struct CGSize)arg1 scale:(double)arg2 quality:(double)arg3;
- (_Bool)isMediaSubtype:(unsigned long long)arg1;
@property(copy) NSArray *regionsOfInterest; // @synthesize regionsOfInterest=_regionsOfInterest;
@property(readonly) NSArray *regionsOfInterestName;
@property(readonly) _Bool hasRegionsOfInterestName;
@property(readonly) _Bool hasRegionsOfInterest;
@property(readonly) struct CLLocationCoordinate2D locationCoordinate;
@property(readonly) CLLocation *location;
@property(readonly) double aspectRatio;
- (void)invalidate;
- (id)dictionaryValueForKey:(id)arg1;
- (id)dictionary;
- (id)regionsOfInterestDictionary;
- (void)setPropertiesFromDictionary:(id)arg1;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

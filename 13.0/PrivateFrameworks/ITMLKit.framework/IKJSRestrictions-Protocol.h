//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/JSExport-Protocol.h>

@class JSValue, NSString;

@protocol IKJSRestrictions <JSExport>
@property(readonly, nonatomic) _Bool allowsErotica;
@property(readonly, nonatomic) _Bool allowsExplicit;
@property(readonly, nonatomic) long long maxTVShowRank;
@property(readonly, nonatomic) long long maxMovieRank;
- (NSString *)maxTVShowRatingForCountry:(JSValue *)arg1;
- (NSString *)maxMovieRatingForCountry:(JSValue *)arg1;
@end

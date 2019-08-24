//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/NSObject-Protocol.h>
#import <SearchUI/SearchUIDragObject-Protocol.h>

@class NSArray, NSString, SFCard, SFCardSection, SFSearchResult;

@protocol SearchUIRowModel <NSObject, SearchUIDragObject>
- (double)leadingSeparatorImageInset;
- (int)separatorStyle;
- (_Bool)isTappable;
- (SFCard *)nextCard;
- (Class)viewClass;
- (NSString *)reuseIdentifier;
- (NSArray *)punchouts;
- (SFCardSection *)cardSection;
- (SFSearchResult *)identifyingResult;
@end

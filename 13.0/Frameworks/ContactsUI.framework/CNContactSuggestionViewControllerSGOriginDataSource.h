//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUI/CNContactSuggestionViewControllerDataSource-Protocol.h>

@class NSAttributedString, NSString, NSURL, SGOrigin;

__attribute__((visibility("hidden")))
@interface CNContactSuggestionViewControllerSGOriginDataSource : NSObject <CNContactSuggestionViewControllerDataSource>
{
    SGOrigin *_origin;
}

+ (id)dateFormatter;
+ (id)contactSuggestionTypeBySuggestionType;
@property(retain, nonatomic) SGOrigin *origin; // @synthesize origin=_origin;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *url;
@property(readonly, nonatomic) NSString *from;
@property(readonly, nonatomic) NSString *date;
@property(readonly, nonatomic) unsigned long long type;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSAttributedString *formattedSnippet;
@property(readonly, nonatomic) NSString *appName;
- (id)initWithSGOrigin:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

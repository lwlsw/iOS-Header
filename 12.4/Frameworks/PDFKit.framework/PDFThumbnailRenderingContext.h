//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PDFPage;

__attribute__((visibility("hidden")))
@interface PDFThumbnailRenderingContext : NSObject
{
    id _contextObject;
    PDFPage *_page;
    CDUnknownBlockType _updateThumbnailBlock;
    unsigned long long _preferredImageSize;
    _Bool _shouldRescheduleIfChangingPreferredSize;
    _Bool _needToRescheduleOnCompletionOfOperation;
}

@property _Bool needToRescheduleOnCompletionOfOperation; // @synthesize needToRescheduleOnCompletionOfOperation=_needToRescheduleOnCompletionOfOperation;
@property _Bool shouldRescheduleIfChangingPreferredSize; // @synthesize shouldRescheduleIfChangingPreferredSize=_shouldRescheduleIfChangingPreferredSize;
@property unsigned long long preferredImageSize; // @synthesize preferredImageSize=_preferredImageSize;
@property(copy) CDUnknownBlockType updateThumbnailBlock; // @synthesize updateThumbnailBlock=_updateThumbnailBlock;
@property __weak PDFPage *page; // @synthesize page=_page;
@property(retain) id contextObject; // @synthesize contextObject=_contextObject;
- (void).cxx_destruct;

@end

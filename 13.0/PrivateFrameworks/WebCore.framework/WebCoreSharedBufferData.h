//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSData.h>

__attribute__((visibility("hidden")))
@interface WebCoreSharedBufferData : NSData
{
    struct RefPtr<const WebCore::SharedBuffer::DataSegment, WTF::DumbPtrTraits<const WebCore::SharedBuffer::DataSegment>> sharedBufferDataSegment;
}

+ (void)initialize;
- (id).cxx_construct;
- (void).cxx_destruct;
- (const void *)bytes;
- (unsigned long long)length;
- (id)initWithSharedBufferDataSegment:(const struct DataSegment *)arg1;
- (void)dealloc;

@end

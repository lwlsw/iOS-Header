//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowUI/WFModuleParameterStateWriter-Protocol.h>

@interface WFParameterArrayComponentStateWriter : NSObject <WFModuleParameterStateWriter>
{
    CDUnknownBlockType _updateBlock;
}

@property(readonly, nonatomic) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;
- (void).cxx_destruct;
- (_Bool)setState:(id)arg1 ofParameter:(id)arg2;
- (id)initWithUpdateBlock:(CDUnknownBlockType)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSTExpressionNode.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface TSTArrayNode : TSTExpressionNode
{
    struct TSCEVectorIndexPair _dimensions;
    NSString *_whitespaceBeforeFirstChild;
    NSArray *_whitespaceAfterDelimiters;
}

@property(retain) NSArray *whitespaceAfterDelimiters; // @synthesize whitespaceAfterDelimiters=_whitespaceAfterDelimiters;
@property(retain) NSString *whitespaceBeforeFirstChild; // @synthesize whitespaceBeforeFirstChild=_whitespaceBeforeFirstChild;
@property(readonly) struct TSCEVectorIndexPair dimensions; // @synthesize dimensions=_dimensions;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)saveToArchive:(struct ArrayNodeArchive *)arg1 archiver:(id)arg2;
- (void)loadFromArchive:(const struct ArrayNodeArchive *)arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)buildASTNodeArray:(struct TSCEASTNodeArray *)arg1 hostCell:(struct TSUCellCoord)arg2 symbolTable:(struct TSCESymbolTable *)arg3;
- (void)insertFormulaText:(id)arg1 includeWhitespace:(_Bool)arg2;
- (struct TSCEFunctionArgSpec *)argumentSpec;
- (id)string;
- (int)tokenType;
- (struct TSTCSENodeData)recordHashesForSubexpressions:(id)arg1;
- (id)initAsCopyOf:(id)arg1 intoContext:(id)arg2 children:(id)arg3;
- (id)initWithContext:(id)arg1 firstIndex:(unsigned long long)arg2 lastIndex:(unsigned long long)arg3;
- (id)initWithContext:(id)arg1 children:(id)arg2 columns:(unsigned int)arg3 rows:(unsigned int)arg4 firstIndex:(unsigned long long)arg5 lastIndex:(unsigned long long)arg6;
- (id)initWithContext:(id)arg1 children:(id)arg2 firstIndex:(unsigned long long)arg3 lastIndex:(unsigned long long)arg4;

@end

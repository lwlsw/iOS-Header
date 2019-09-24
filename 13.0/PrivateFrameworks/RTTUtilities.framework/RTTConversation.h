//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RTTUtilities/NSSecureCoding-Protocol.h>

@class NSMutableArray, NSString;

@interface RTTConversation : NSObject <NSSecureCoding>
{
    NSString *_callIdentifier;
    NSMutableArray *_utterances;
}

+ (_Bool)supportsSecureCoding;
+ (id)conversationWithID:(id)arg1 andUtterances:(id)arg2;
+ (id)conversationWithCall:(id)arg1;
+ (void)conversationWithCall:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
+ (void)conversationWithCallUID:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NSMutableArray *utterances; // @synthesize utterances=_utterances;
@property(retain, nonatomic) NSString *callIdentifier; // @synthesize callIdentifier=_callIdentifier;
- (void).cxx_destruct;
- (id)description;
- (void)cleanup;
- (unsigned long long)utteranceCountForMe:(_Bool)arg1;
- (id)lastUtteranceForMe:(_Bool)arg1;
- (id)processBackspaceForMe:(_Bool)arg1;
- (id)appendStringFromOtherContactPath:(id)arg1;
- (id)appendCharacter:(unsigned short)arg1;
- (void)addUtterance:(id)arg1;
- (id)mergeUtterancesIfPossible;
- (id)otherContactPath;
- (_Bool)isEqualToConversation:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

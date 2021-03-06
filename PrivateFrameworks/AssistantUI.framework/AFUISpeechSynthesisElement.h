//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, VSSpeechRequest;

@interface AFUISpeechSynthesisElement : NSObject
{
    NSString *_text;
    BOOL _isPhonetic;
    BOOL _eligibleForSynthesis;
    BOOL _provisional;
    BOOL _preprationBlockCompleted;
    BOOL _durationHasElapsed;
    VSSpeechRequest *_speechRequest;
    int _synthesisResult;
    id <AFUISpeechSynthesisElementDelegate> _delegate;
    NSString *_animationIdentifier;
    CDUnknownBlockType _completion;
}

@property(readonly, nonatomic, getter=_completion) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) NSString *animationIdentifier; // @synthesize animationIdentifier=_animationIdentifier;
@property(nonatomic) int synthesisResult; // @synthesize synthesisResult=_synthesisResult;
@property(retain, nonatomic) VSSpeechRequest *speechRequest; // @synthesize speechRequest=_speechRequest;
@property(nonatomic) BOOL isPhonetic; // @synthesize isPhonetic=_isPhonetic;
- (void)executeCompletion;
- (void)_setEligibleForSynthesis:(BOOL)arg1;
@property(nonatomic, getter=isEligibleForSynthesis) BOOL eligibleForSynthesis; // @synthesize eligibleForSynthesis=_eligibleForSynthesis;
@property(readonly, nonatomic, getter=isProvisional) BOOL provisional; // @synthesize provisional=_provisional;
- (id)initWithText:(id)arg1 provisional:(BOOL)arg2 eligibleAfterDuration:(double)arg3 preparation:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5 animationIdentifier:(id)arg6;
- (void)_updateSynthesisEligibility;
@property(setter=_setPreparationBlockCompleted:) BOOL preprationBlockCompleted; // @synthesize preprationBlockCompleted=_preprationBlockCompleted;
@property(setter=_setDurationHasElapsed:) BOOL durationHasElapsed; // @synthesize durationHasElapsed=_durationHasElapsed;
- (void).cxx_destruct;
- (void)_setText:(id)arg1;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) __weak id <AFUISpeechSynthesisElementDelegate> delegate; // @synthesize delegate=_delegate;
- (id)description;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/NSUndoTextOperation.h>

@class NSMutableAttributedString;

@interface _UITextUndoOperationTyping : NSUndoTextOperation
{
    struct _NSRange _replacementRange;
    NSMutableAttributedString *_attributedString;
}

- (BOOL)supportsCoalescing;
- (void)undoRedo;
- (id)initWithAffectedRange:(struct _NSRange)arg1 inputController:(id)arg2 replacementRange:(struct _NSRange)arg3;
- (BOOL)coalesceAffectedRange:(struct _NSRange)arg1 replacementRange:(struct _NSRange)arg2 selectedRange:(struct _NSRange)arg3 textStorage:(id)arg4;
- (void)dealloc;

@end

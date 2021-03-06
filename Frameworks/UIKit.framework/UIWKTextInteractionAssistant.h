//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UITextInteractionAssistant.h>

@class NSString, UILongPressGestureRecognizer, UITapGestureRecognizer, UITextChecker, _UITextServiceSession;

@interface UIWKTextInteractionAssistant : UITextInteractionAssistant
{
    int _selectionOperation;
    _UITextServiceSession *_definitionSession;
    _UITextServiceSession *_learnSession;
    UITextChecker *_textChecker;
    unsigned int _options;
    struct CGRect _caretBeforeTap;
    NSString *_wordBeforeTap;
    UITapGestureRecognizer *_singleTapGesture;
    UILongPressGestureRecognizer *_loupeGesture;
}

- (void)hideTextStyleOptions;
- (void)showTextStyleOptions;
- (void)scheduleReplacementsForText:(id)arg1;
- (void)scheduleChineseTransliterationForText:(id)arg1;
- (void)selectWithTapGestureAt:(struct CGPoint)arg1 withGesture:(int)arg2 withState:(int)arg3;
- (void)selectTextForReplacement:(id)arg1 withOptions:(unsigned int)arg2;
- (void)showReplacementsForText:(id)arg1 withOptions:(unsigned int)arg2;
- (BOOL)shouldTryReplacementsForText:(id)arg1 withOptions:(unsigned int)arg2;
- (void)scheduleReplacementsForText:(id)arg1 withOptions:(unsigned int)arg2;
- (void)showTextServiceFor:(id)arg1 fromRect:(struct CGRect)arg2;
- (void)selectionChangedWithTouchAt:(struct CGPoint)arg1 withSelectionTouch:(int)arg2;
- (void)selectionChangedWithGestureAt:(struct CGPoint)arg1 withGesture:(int)arg2 withState:(int)arg3;
- (void)showDictionaryFor:(id)arg1 fromRect:(struct CGRect)arg2;
- (void)selectionChangedWithTouchAt:(struct CGPoint)arg1 withSelectionTouch:(int)arg2 withFlags:(int)arg3;
- (void)selectionChangedWithGestureAt:(struct CGPoint)arg1 withGesture:(int)arg2 withState:(int)arg3 withFlags:(int)arg4;
- (void)rangeSelectionMoved:(struct CGPoint)arg1 withTouchPoint:(struct CGPoint)arg2;
- (void)rangeSelectionCanceled;
- (void)rangeSelectionEnded:(struct CGPoint)arg1;
- (void)rangeSelectionStarted:(struct CGPoint)arg1;
- (BOOL)containerAllowsSelection;
- (BOOL)requiresImmediateUpdate;
- (BOOL)containerAllowsSelectionTintOnly;
- (void)updateWithMagnifierTerminalPoint:(BOOL)arg1;
- (void)scrollSelectionToVisible;
- (id)_asText;
- (void)twoFingerRangedSelectGesture:(id)arg1;
- (void)loupeGesture:(id)arg1;
- (void)tapAndAHalf:(id)arg1;
- (void)twoFingerSingleTap:(id)arg1;
- (void)oneFingerTripleTap:(id)arg1;
- (void)oneFingerTap:(id)arg1;
- (void)oneFingerDoubleTap:(id)arg1;
- (BOOL)containerIsPlainStyleAtom;
- (BOOL)containerIsAtom;
- (BOOL)containerIsBrowserView;
- (void)updateSelectionWithPoint:(struct CGPoint)arg1;
@property(readonly, retain, nonatomic) UITapGestureRecognizer *singleTapGesture; // @synthesize singleTapGesture=_singleTapGesture;
@property(readonly, retain, nonatomic) UILongPressGestureRecognizer *loupeGesture; // @synthesize loupeGesture=_loupeGesture;
- (void)scheduleReplacementsWithOptions:(unsigned int)arg1;
- (void)selectWord;
- (void)selectAll:(id)arg1;
- (id)initWithView:(id)arg1;
- (void)selectionChanged;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)dealloc;

@end


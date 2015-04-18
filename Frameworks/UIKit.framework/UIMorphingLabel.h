//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSString, UIColor, UIFont, UIMorphingLabelGlyphSet, _UIViewAnimationAttributes;

@interface UIMorphingLabel : UIView
{
    UIMorphingLabelGlyphSet *_srcGlyphSet;
    UIMorphingLabelGlyphSet *_dstGlyphSet;
    NSMutableArray *_hiddenGlyphViews;
    UIView *_colorView;
    struct {
        unsigned int len;
        unsigned int dir;
    } _memo[51][51];
    CDStruct_3f1aca05 _alignment[100];
    unsigned int _alignmentSize;
    float _alignmentDelays[100];
    _UIViewAnimationAttributes *_textAnimationAttributes;
    _UIViewAnimationAttributes *_textColorAnimationAttributes;
    float _lastUpdateTime;
    float _slowdown;
    float _rippleFactor;
    float _scaleFactor;
    BOOL _isDoingFastAnimation;
    BOOL _textDidChange;
    BOOL _textColorDidChange;
    BOOL _suppressLayoutSubviews;
    NSString *_text;
    UIFont *_font;
    UIColor *_textColor;
    int _textAlignment;
    struct CGRect _visibleRect;
}

- (BOOL)canFitText:(id)arg1;
- (void)animateShowGlyph:(id)arg1 alphaDuration:(float)arg2 delay:(float)arg3;
- (float)requiredWidthForText:(id)arg1;
- (void)animateTextColor;
- (void)animateGlyphs;
@property(nonatomic) BOOL suppressLayoutSubviews; // @synthesize suppressLayoutSubviews=_suppressLayoutSubviews;
- (id)attributedStringForText:(id)arg1;
- (void)animateAlignmentHunkAtIndex:(unsigned int)arg1;
- (void)animateChangeInWidthOutsideAlignmentHunkAtIndex:(unsigned int)arg1;
- (void)initAlignmentHunkAtIndex:(unsigned int)arg1;
- (void)calculateGlyphAlignment;
- (void)animateMovementAlignmentHunkAtIndex:(unsigned int)arg1;
- (void)animateSubstitutionAlignmentHunkAtIndex:(unsigned int)arg1;
- (void)animateDeletionAlignmentHunkAtIndex:(unsigned int)arg1;
- (void)animateInsertionAlignmentHunkAtIndex:(unsigned int)arg1;
- (void)initMovementAlignmentHunkAtIndex:(unsigned int)arg1;
- (void)initSubstitutionAlignmentHunkAtIndex:(unsigned int)arg1;
- (void)initDeletionAlignmentHunkAtIndex:(unsigned int)arg1;
- (void)initInsertionAlignmentHunkAtIndex:(unsigned int)arg1;
- (void)copyStateFromGlyph:(id)arg1 toGlyph:(id)arg2;
- (void)animateHideGlyph:(id)arg1 alphaDuration:(float)arg2 delay:(float)arg3;
- (void)animateGlyphsInRange:(struct _NSRange)arg1 ofGlyphSet:(id)arg2 byOffset:(float)arg3 delay:(float)arg4;
- (float)changeInWidthDueToAlignmentHunkAtIndex:(unsigned int)arg1;
- (void)animateGlyph:(id)arg1 toPosition:(struct CGPoint)arg2 delay:(float)arg3;
- (float)totalLeftOffsetForAlignmentHunkAtIndex:(unsigned int)arg1;
- (float)totalRightOffsetForAlignmentHunkAtIndex:(unsigned int)arg1;
- (void)animateGlyph:(id)arg1 toAlpha:(float)arg2 duration:(float)arg3 delay:(float)arg4;
- (void)animateGlyph:(id)arg1 toScale:(float)arg2 delay:(float)arg3;
- (void)animateShowGlyph:(id)arg1 alpha:(float)arg2 alphaDuration:(float)arg3 delay:(float)arg4;
- (id)uniqueStringWithPrefix:(id)arg1;
- (float)currentMediaTime;
- (unsigned int)calculateHardAlignment:(CDStruct_3f1aca05 *)arg1 size:(unsigned int)arg2 fromGlyphs:(const unsigned short *)arg3 count:(unsigned int)arg4 toGlyphs:(const unsigned short *)arg5 count:(unsigned int)arg6;
- (float)alphaForFrame:(struct CGRect)arg1;
- (void)baseInit;
- (void)hideGlyph:(id)arg1;
- (float)flushAmount;
- (id)glyphViewWithImage:(id)arg1 isColorGlyph:(BOOL)arg2;
@property(nonatomic) struct CGRect visibleRect; // @synthesize visibleRect=_visibleRect;
- (id)attributedString;
@property(nonatomic) int textAlignment; // @synthesize textAlignment=_textAlignment;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

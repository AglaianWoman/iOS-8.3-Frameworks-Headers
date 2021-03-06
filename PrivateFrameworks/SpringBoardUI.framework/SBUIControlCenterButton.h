//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBFButton.h"

#import "SBUIControlCenterControl.h"
#import "_UISettingsKeyObserver.h"

@class NSString, UIImage, UIImageView, UIVisualEffect, UIVisualEffectView;

@interface SBUIControlCenterButton : SBFButton <_UISettingsKeyObserver, SBUIControlCenterControl>
{
    struct UIEdgeInsets _bgCapInsets;
    UIVisualEffect *_normalStateEffect;
    UIVisualEffect *_highlightedStateEffect;
    UIVisualEffect *_disabledStateEffect;
    UIImageView *_backgroundImageView;
    UIImageView *_glyphImageView;
    UIVisualEffectView *_backgroundEffectView;
    BOOL _useSmallButton;
    BOOL _isCircleButton;
    BOOL _isRectButton;
    id <SBUIControlCenterButtonDelegate> _delegate;
    UIImage *_normalBGImage;
    UIImage *_sourceGlyphImage;
    UIImage *_sourceSelectedGlyphImage;
    float _naturalHeight;
}

+ (id)roundRectButton;
+ (id)circularButton;
+ (id)_smallCircleBackgroundImage;
+ (id)_roundRectBackgroundImage;
+ (id)_buttonWithBGImage:(id)arg1 glyphImage:(id)arg2 naturalHeight:(float)arg3;
+ (id)_circleBackgroundImage;
+ (id)_circleBackgroundImageForSize:(struct CGSize)arg1;
+ (void)controlAppearanceDidChangeForState:(int)arg1;
@property(nonatomic) float naturalHeight; // @synthesize naturalHeight=_naturalHeight;
@property(nonatomic) BOOL useSmallButton; // @synthesize useSmallButton=_useSmallButton;
- (id)_backgroundImageWithGlyphImage:(id)arg1 state:(int)arg2;
- (id)_glyphImageForState:(int)arg1;
@property(retain, nonatomic) UIImage *sourceSelectedGlyphImage; // @synthesize sourceSelectedGlyphImage=_sourceSelectedGlyphImage;
- (void)_updateGlyphForStateChange;
@property(retain, nonatomic) UIImage *sourceGlyphImage; // @synthesize sourceGlyphImage=_sourceGlyphImage;
@property(retain, nonatomic) UIImage *normalBGImage; // @synthesize normalBGImage=_normalBGImage;
- (void)_updateBackgroundForStateChange;
- (struct CGRect)_rectForGlyph:(id)arg1 centeredInRect:(struct CGRect)arg2;
@property(nonatomic) BOOL isRectButton; // @synthesize isRectButton=_isRectButton;
@property(nonatomic) BOOL isCircleButton; // @synthesize isCircleButton=_isCircleButton;
- (void)_pressAction;
- (void)_setBackgroundImage:(id)arg1 naturalHeight:(float)arg2;
- (id)initWithFrame:(struct CGRect)arg1 backgroundImage:(id)arg2 glyphImage:(id)arg3 naturalHeight:(float)arg4;
- (void)_updateForStateChange;
- (void)setGlyphImage:(id)arg1 selectedGlyphImage:(id)arg2;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)setBackgroundImage:(id)arg1;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned int)arg2;
- (void)setImage:(id)arg1 forState:(unsigned int)arg2;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
@property(nonatomic) id <SBUIControlCenterButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (int)_currentState;
- (BOOL)_drawingAsSelected;
- (void)_updateEffects;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


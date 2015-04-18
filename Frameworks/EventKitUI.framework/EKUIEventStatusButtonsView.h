//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, UIButton, UIFont;

@interface EKUIEventStatusButtonsView : UIView
{
    NSArray *_buttons;
    NSArray *_actions;
    UIFont *_font;
    BOOL _forcesSingleButtonToCenter;
    BOOL _disableButtonHighlights;
    id <EKUIEventStatusButtonsViewDelegate> _delegate;
    int _selectedAction;
    float _buttonsCharge;
    int _textSizeMode;
    float _baselineFromBoundsTop;
}

@property(retain, nonatomic) NSArray *actions; // @synthesize actions=_actions;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIFont *font;
- (void)updateForMiniBarState:(BOOL)arg1;
- (void)buttonTapped:(id)arg1;
- (float)_minimumFontSize;
@property(nonatomic) __weak id <EKUIEventStatusButtonsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)layoutSubviews;
@property(nonatomic) float baselineFromBoundsTop; // @synthesize baselineFromBoundsTop=_baselineFromBoundsTop;
@property(nonatomic) int textSizeMode; // @synthesize textSizeMode=_textSizeMode;
@property(nonatomic) float buttonsCharge; // @synthesize buttonsCharge=_buttonsCharge;
@property(nonatomic) BOOL disableButtonHighlights; // @synthesize disableButtonHighlights=_disableButtonHighlights;
@property(nonatomic) BOOL forcesSingleButtonToCenter; // @synthesize forcesSingleButtonToCenter=_forcesSingleButtonToCenter;
@property(readonly, nonatomic) UIButton *centerButton;
- (id)initWithFrame:(struct CGRect)arg1 actions:(id)arg2 delegate:(id)arg3;
- (BOOL)_shouldCenterButton;
- (void)_updateSelectionToButton:(id)arg1;
- (id)_buttonForAction:(int)arg1;
- (void)_updateButtonFontsWithSize:(float)arg1;
- (int)_buttonIndexForAction:(int)arg1;
@property(nonatomic) int selectedAction; // @synthesize selectedAction=_selectedAction;
- (int)_actionForButton:(id)arg1;
- (id)_buttonTitleForAction:(int)arg1;
- (id)_newToolbarButton;
- (id)_fontWithSize:(float)arg1 selected:(BOOL)arg2;
- (float)_defaultFontSizeForButtons;
- (void)_setupButtons;

@end

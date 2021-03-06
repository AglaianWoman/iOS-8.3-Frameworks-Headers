//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIInputView.h>

@class UIBarButtonItem, UISegmentedControl, UIToolbar;

@interface UIWebFormAccessory : UIInputView
{
    UIToolbar *_leftToolbar;
    UIToolbar *_rightToolbar;
    UIBarButtonItem *_doneButton;
    UIBarButtonItem *_flexibleSpaceItem;
    UIBarButtonItem *_previousItem;
    UIBarButtonItem *_nextItem;
    UISegmentedControl *_tab;
    UIBarButtonItem *_autofill;
    UIBarButtonItem *_clearButton;
    id <UIWebFormAccessoryDelegate> delegate;
}

+ (id)toolbarWithItems:(id)arg1;
@property(retain, nonatomic) UIBarButtonItem *_autofill; // @synthesize _autofill;
@property(retain, nonatomic) UISegmentedControl *_tab; // @synthesize _tab;
@property(nonatomic, getter=isPreviousEnabled) BOOL previousEnabled;
@property(nonatomic, getter=isNextEnabled) BOOL nextEnabled;
- (void)setClearVisible:(BOOL)arg1;
- (void)showAutoFillButton;
- (void)hideAutoFillButton;
@property(retain, nonatomic) UIBarButtonItem *_clearButton; // @synthesize _clearButton;
- (void)clear:(id)arg1;
- (void)showAutoFillButtonWithTitle:(id)arg1;
- (void)autoFill:(id)arg1;
- (id)_autoFillButton;
- (void)_applyTreatmentToAutoFillLabel;
- (void)_refreshAutofillPresentation;
- (void)_orientationDidChange:(id)arg1;
- (void)_updateFrame;
- (void)done:(id)arg1;
- (void)_nextTapped:(id)arg1;
- (void)_previousTapped:(id)arg1;
- (void)_tabSegmentedControlDidChange:(id)arg1;
- (void)_setRenderConfig:(id)arg1;
@property(nonatomic) id <UIWebFormAccessoryDelegate> delegate; // @synthesize delegate;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end


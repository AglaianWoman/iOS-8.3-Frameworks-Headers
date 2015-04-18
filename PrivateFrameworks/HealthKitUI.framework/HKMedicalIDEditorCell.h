//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "UITextFieldDelegate.h"

@class HKCaretOptionalTextField, NSString, UILabel, UIView;

@interface HKMedicalIDEditorCell : UITableViewCell <UITextFieldDelegate>
{
    UIView *_verticalSeparatorView;
    UIView *_horizontalSeparatorView;
    float _minimumLabelWidth;
    id <HKMedicalIDEditorCellEditDelegate> _editDelegate;
    UILabel *_labelLabel;
    HKCaretOptionalTextField *_inputTextField;
}

+ (BOOL)showsLabelAndValue;
@property(readonly, nonatomic) UILabel *labelLabel; // @synthesize labelLabel=_labelLabel;
- (void)_localeDidChange:(id)arg1;
@property(readonly, nonatomic) HKCaretOptionalTextField *inputTextField; // @synthesize inputTextField=_inputTextField;
@property(nonatomic) float minimumLabelWidth; // @synthesize minimumLabelWidth=_minimumLabelWidth;
- (void)valueDidChange;
- (id)shortenedFormattedValue;
- (void)updateValueLabel;
- (id)formattedValue;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *label;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (void)beginEditing;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)dealloc;
@property(nonatomic) __weak id <HKMedicalIDEditorCellEditDelegate> editDelegate; // @synthesize editDelegate=_editDelegate;
- (void)commitEditing;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

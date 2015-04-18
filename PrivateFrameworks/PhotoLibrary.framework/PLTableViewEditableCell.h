//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "UITextFieldDelegate.h"
#import "UITextViewDelegate.h"

@class NSString, PLTextView, UILabel, UITextField;

@interface PLTableViewEditableCell : UITableViewCell <UITextViewDelegate, UITextFieldDelegate>
{
    PLTextView *_textView;
    UITextField *_textField;
    UILabel *_sizeTextLabel;
    id _delegate;
    BOOL _forceFirstResponder;
    int _cellStyle;
}

+ (id)posterCellIdentifier;
- (id)sizeTextLabel;
- (void)forceFirstResponder:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect)arg1 cellStyle:(int)arg2;
- (id)initHDSDCell;
- (id)initWithFrame:(struct CGRect)arg1 multiLine:(BOOL)arg2;
- (void)_textFieldChanged;
- (void)textViewDidChange:(id)arg1;
- (BOOL)textViewShouldEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (BOOL)textFieldShouldEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (BOOL)isEditing;
@property(nonatomic) int style; // @synthesize style=_cellStyle;
- (void)setValue:(id)arg1;
- (id)value;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (struct CGSize)contentSize;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void)setPlaceholderText:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

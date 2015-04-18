//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "ABStyleProviding.h"

@class NSString, UITextField;

@interface ABPropertyEditingTableViewCell : UITableViewCell <ABStyleProviding>
{
    int _property;
    UITextField *_textField;
    NSString *_placeholder;
    id <ABPropertyEditingTableViewCellDelegate> _delegate;
}

@property(nonatomic) int property; // @dynamic property;
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
- (BOOL)canResignFirstResponder;
- (void)textFieldValueDidChange:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1;
- (BOOL)isFirstResponder;
- (BOOL)canBecomeFirstResponder;
@property(copy, nonatomic) NSString *value; // @dynamic value;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
@property(nonatomic) id <ABPropertyEditingTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)layoutSubviews;
- (void)dealloc;
- (id)styleProvider;
@property(nonatomic) BOOL usesLargeFont; // @dynamic usesLargeFont;
- (void)_resizeAndCenterTextField;
- (id)initWithReuseIdentifier:(id)arg1 property:(int)arg2 delegate:(id)arg3;

@end

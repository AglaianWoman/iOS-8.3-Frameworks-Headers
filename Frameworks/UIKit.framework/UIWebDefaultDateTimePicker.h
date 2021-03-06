//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIWebFormControl.h"

@class DOMHTMLInputElement, NSString, UIDatePicker;

@interface UIWebDefaultDateTimePicker : NSObject <UIWebFormControl>
{
    DOMHTMLInputElement *_inputElement;
    UIDatePicker *_datePicker;
    NSString *_formatString;
    BOOL _shouldRemoveTimeZoneInformation;
    BOOL _isTimeInput;
}

@property(retain, nonatomic) UIDatePicker *_datePicker; // @synthesize _datePicker;
@property(retain, nonatomic) DOMHTMLInputElement *_inputElement; // @synthesize _inputElement;
- (id)initWithDOMHTMLInputElement:(id)arg1 datePickerMode:(int)arg2;
- (id)_sanitizeInputValueForFormatter:(id)arg1;
- (void)_dateChangeHandler:(id)arg1;
- (void)_dateChanged;
- (void)_dateChangedSetAsNumber;
- (void)_dateChangedSetAsString;
- (int)_timeZoneOffsetFromGMT:(id)arg1;
- (void)controlEndEditing;
- (void)controlBeginEditing;
- (id)controlView;
- (void)dealloc;

@end


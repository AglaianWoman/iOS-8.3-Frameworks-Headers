//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class PKPaymentSetupPrivacyFooterView, UIActivityIndicatorView, UIImageView, UILabel;

@interface PKPaymentSetupInfoView : UIView
{
    UIImageView *_logo;
    UILabel *_bodyLabel;
    PKPaymentSetupPrivacyFooterView *_privacyFooter;
    int _context;
    UIActivityIndicatorView *_activityIndicatorView;
}

- (id)logo;
- (id)_titleFont;
@property(nonatomic) int context; // @synthesize context=_context;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 context:(int)arg2;
- (id)bodyLabel;
@property(retain, nonatomic) PKPaymentSetupPrivacyFooterView *privacyFooter; // @synthesize privacyFooter=_privacyFooter;
- (id)_bodyFont;
- (BOOL)isBuddyiPad;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;

@end


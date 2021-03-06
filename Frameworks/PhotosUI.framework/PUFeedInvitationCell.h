//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUI/PUFeedCell.h>

@class NSString, UIButton, UILabel, UIView;

@interface PUFeedInvitationCell : PUFeedCell
{
    NSString *_title;
    NSString *_subtitle;
    UILabel *__titleLabel;
    UILabel *__subtitleLabel;
    UIButton *__acceptButon;
    UIButton *__declineButton;
    UIView *__bottomSeparatorView;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic, setter=_setTitleLabel:) UILabel *_titleLabel; // @synthesize _titleLabel=__titleLabel;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)_delegate;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic, setter=_setBottomSeparatorView:) UIView *_bottomSeparatorView; // @synthesize _bottomSeparatorView=__bottomSeparatorView;
@property(retain, nonatomic, setter=_setDeclineButton:) UIButton *_declineButton; // @synthesize _declineButton=__declineButton;
@property(retain, nonatomic, setter=_setAcceptButton:) UIButton *_acceptButon; // @synthesize _acceptButon=__acceptButon;
- (void)_replyButtonAction:(id)arg1;
@property(retain, nonatomic, setter=_setSubtitleLabel:) UILabel *_subtitleLabel; // @synthesize _subtitleLabel=__subtitleLabel;

@end


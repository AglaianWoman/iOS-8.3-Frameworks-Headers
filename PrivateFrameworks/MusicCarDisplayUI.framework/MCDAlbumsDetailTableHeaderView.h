//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewHeaderFooterView.h"

@class MCDButton, NSString, UIImage, UIImageView, UILabel, UIView;

@interface MCDAlbumsDetailTableHeaderView : UITableViewHeaderFooterView
{
    UIImageView *_artworkImageView;
    UILabel *_titleLabel;
    UIView *_separatorView;
    UILabel *_subtitleLabel;
    MCDButton *_shuffleButton;
    CDUnknownBlockType _shuffleActionBlock;
}

@property(retain, nonatomic) UIImage *artworkImage;
@property(copy, nonatomic) CDUnknownBlockType shuffleActionBlock; // @synthesize shuffleActionBlock=_shuffleActionBlock;
- (void)_shuffleButtonAction:(id)arg1;
- (void)setDuration:(double)arg1 count:(unsigned int)arg2;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)arg1;
@property(copy, nonatomic) NSString *title;
- (void)layoutSubviews;

@end


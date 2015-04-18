//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIImage, UIImageView, UILabel;

@interface _RUTrackActionsHeaderView : UIView
{
    UILabel *_artistLabel;
    UIImageView *_artworkImageView;
    UILabel *_songLabel;
}

+ (id)_songLabelFont;
+ (float)defaultHeightForTraitCollection:(id)arg1;
+ (id)_artistLabelFont;
@property(copy, nonatomic) NSString *songText;
@property(copy, nonatomic) NSString *artistText;
@property(retain, nonatomic) UIImage *artworkImage;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end

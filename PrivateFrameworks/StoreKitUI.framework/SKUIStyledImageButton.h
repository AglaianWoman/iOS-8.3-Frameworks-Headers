//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class SKUIImageView;

@interface SKUIStyledImageButton : UIControl
{
    BOOL _didInitialHighlightForTouch;
    SKUIImageView *_imageView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SKUIImageView *imageView; // @synthesize imageView=_imageView;
- (void)setHighlighted:(BOOL)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

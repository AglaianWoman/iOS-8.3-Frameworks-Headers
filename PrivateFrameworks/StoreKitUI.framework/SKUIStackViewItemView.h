//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIColor, UIImage;

@interface SKUIStackViewItemView : UIView
{
    UIColor *_borderColor;
    UIImage *_image;
    BOOL _shouldFlipImageHorizontal;
    BOOL _shouldFlipImageVertical;
}

@property(nonatomic) BOOL shouldFlipImageVertical; // @synthesize shouldFlipImageVertical=_shouldFlipImageVertical;
@property(nonatomic) BOOL shouldFlipImageHorizontal; // @synthesize shouldFlipImageHorizontal=_shouldFlipImageHorizontal;
- (void).cxx_destruct;
@property(copy, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void)drawRect:(struct CGRect)arg1;

@end

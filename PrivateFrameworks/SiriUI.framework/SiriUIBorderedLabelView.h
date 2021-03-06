//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIFont, UIImageView, UILabel;

@interface SiriUIBorderedLabelView : UIView
{
    UIImageView *_borderImageView;
    UILabel *_ratingLabel;
    UIFont *_font;
    struct UIEdgeInsets _edgeInsets;
}

+ (struct UIEdgeInsets)_defaultEdgeInsets;
- (float)baselineOffsetFromTopOfFrame;
- (id)initWithText:(id)arg1 font:(id)arg2 borderColor:(id)arg3;
- (struct CGSize)_borderSize;
- (void).cxx_destruct;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SKUICardViewElement, SKUIViewElementLayoutContext;

@interface SKUICardLayout : NSObject
{
    SKUICardViewElement *_cardViewElement;
    SKUIViewElementLayoutContext *_layoutContext;
}

+ (BOOL)allowsViewElement:(id)arg1;
+ (id)layoutWithCardViewElement:(id)arg1 context:(id)arg2;
@property(readonly, nonatomic) SKUICardViewElement *cardViewElement; // @synthesize cardViewElement=_cardViewElement;
- (float)bottomInsetForLastViewElement:(id)arg1 width:(float)arg2;
- (float)topInsetForViewElement:(id)arg1 previousViewElement:(id)arg2 width:(float)arg3;
- (id)attributedStringForLabel:(id)arg1;
- (id)attributedStringForButton:(id)arg1;
@property(readonly, nonatomic) float horizontalContentInset;
@property(readonly, nonatomic) int layoutStyle;
@property(readonly, nonatomic) SKUIViewElementLayoutContext *layoutContext; // @synthesize layoutContext=_layoutContext;
- (struct CGSize)sizeForViewElement:(id)arg1 width:(float)arg2;
- (void).cxx_destruct;

@end


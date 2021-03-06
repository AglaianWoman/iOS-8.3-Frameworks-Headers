//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, UIView<UITextInput>, UIWebDragDotView;

@interface UIWebTextRangeView : UIView
{
    UIView<UITextInput> *m_container;
    NSArray *_rects;
    NSMutableArray *_rectViews;
    UIWebDragDotView *_startDot;
    UIWebDragDotView *_endDot;
    BOOL _magnifying;
}

- (id)rectViewAtIndex:(int)arg1;
- (void)updateDragDots;
- (struct CGPoint)startCorner;
- (struct CGPoint)endCorner;
- (struct CGRect)rectAtIndex:(int)arg1;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;
- (BOOL)endIsHorizontal;
- (BOOL)startIsHorizontal;
- (void)geometryChanged;
- (struct CGRect)boundingRect;
- (void)updateRectViews;
- (struct CGRect)endEdge;
- (struct CGRect)startEdge;
- (void)doneMagnifying;
- (void)prepareForMagnification;
@property(copy, nonatomic) NSArray *rects; // @synthesize rects=_rects;
@property(readonly, nonatomic) UIView<UITextInput> *container;
- (void)removeFromSuperview;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dealloc;

@end


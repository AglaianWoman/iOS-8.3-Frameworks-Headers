//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIPrintFormatter.h>

@class UIView;

@interface UIViewPrintFormatter : UIPrintFormatter
{
    UIView *_view;
}

- (id)_initWithView:(id)arg1;
- (void)drawInRect:(struct CGRect)arg1 forPageAtIndex:(int)arg2;
- (struct CGRect)rectForPageAtIndex:(int)arg1;
- (int)_recalcPageCount;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) UIView *view; // @synthesize view=_view;
- (void)dealloc;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "NSCopying.h"

@class GKBubbleView, NSLayoutConstraint, NSString, UIView;

@interface GKBubbleControl : UIControl <NSCopying>
{
    BOOL _animatingIn;
    BOOL _animateOnTouch;
    GKBubbleView *_bubbleView;
    UIView *_contentView;
    NSString *_debuggingTag;
    float _maximumDimension;
    NSLayoutConstraint *_maxHeightConstraint;
    NSLayoutConstraint *_maxWidthConstraint;
    NSLayoutConstraint *_contentViewHeightConstraint;
    NSLayoutConstraint *_contentViewWidthConstraint;
}

+ (float)maximumDimensionBasedOnDeviceAdjustForTallness:(BOOL)arg1;
+ (void)initialize;
@property(readonly, nonatomic) struct CGSize screenSize;
- (void)bounceAfterDelay:(double)arg1 fromZ:(float)arg2 toZ:(float)arg3;
- (BOOL)bouncing;
@property(retain, nonatomic) NSLayoutConstraint *maxWidthConstraint; // @synthesize maxWidthConstraint=_maxWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *maxHeightConstraint; // @synthesize maxHeightConstraint=_maxHeightConstraint;
@property(retain, nonatomic) GKBubbleView *bubbleView; // @synthesize bubbleView=_bubbleView;
- (id)pathForHitTesting;
- (void)didTouchUp;
- (void)didTouchDown;
@property(retain, nonatomic) NSLayoutConstraint *contentViewHeightConstraint; // @synthesize contentViewHeightConstraint=_contentViewHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *contentViewWidthConstraint; // @synthesize contentViewWidthConstraint=_contentViewWidthConstraint;
@property(nonatomic) float maximumDimension; // @synthesize maximumDimension=_maximumDimension;
- (id)contentsWrapperView;
@property(nonatomic) BOOL animateOnTouch; // @synthesize animateOnTouch=_animateOnTouch;
@property(retain, nonatomic) NSString *debuggingTag; // @synthesize debuggingTag=_debuggingTag;
@property(nonatomic) int bubbleType;
@property(readonly, nonatomic) struct CGSize projectedContentSize;
- (union _GLKVector3)worldPositionForScreenFrame:(struct CGRect)arg1;
@property(nonatomic) struct CGRect screenFrame;
@property(readonly, nonatomic, getter=isSharedBubble) BOOL sharedBubble;
- (union _GLKVector3)worldPositionForScreenPosition:(struct CGPoint)arg1 andScreenSize:(struct CGSize)arg2 andSuperviewSize:(struct CGSize)arg3;
- (union _GLKVector3)worldPositionForScreenFrame:(struct CGRect)arg1 assumingSuperviewSize:(struct CGSize)arg2;
- (void)setScreenPosition:(struct CGPoint)arg1 andScreenSize:(struct CGSize)arg2;
@property(nonatomic) union _GLKVector3 worldPosition;
- (union _GLKVector3)worldPositionForScreenPosition:(struct CGPoint)arg1 andScreenSize:(struct CGSize)arg2;
@property(readonly, nonatomic) union _GLKVector3 worldSize;
@property(readonly, nonatomic) struct CGPoint screenPosition;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)setHidden:(BOOL)arg1;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PKPassGroupView, UIPanGestureRecognizer, _UIDynamicValueAnimation;

@interface PKPassGroupViewVerticalPanAnimator : NSObject
{
    _UIDynamicValueAnimation *_panningAnimation;
    UIPanGestureRecognizer *_gestureRecognizer;
    PKPassGroupView *_panningGroupView;
    float _panningViewTargetScale;
    struct CGPoint _panningViewStartPosition;
    struct CGPoint _panningViewTargetPosition;
}

- (void)stop;
@property(retain, nonatomic) UIPanGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
- (void)dealloc;
@property(nonatomic) float panningViewTargetScale; // @synthesize panningViewTargetScale=_panningViewTargetScale;
@property(nonatomic) struct CGPoint panningViewTargetPosition; // @synthesize panningViewTargetPosition=_panningViewTargetPosition;
@property(retain, nonatomic) PKPassGroupView *panningGroupView; // @synthesize panningGroupView=_panningGroupView;
- (id)_dynamicAnimationWithStart:(float)arg1 target:(float)arg2 initialVelocity:(float)arg3;
- (void)dismissWithStartVelocity:(float)arg1 alongSideApplier:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
@property(nonatomic) struct CGPoint panningViewStartPosition; // @synthesize panningViewStartPosition=_panningViewStartPosition;
- (void)layoutViewsWithY:(float)arg1;
- (id)initWithGroupView:(id)arg1;

@end

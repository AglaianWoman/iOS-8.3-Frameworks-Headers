//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPTransitionController.h>

@class UIView;

@interface MPFlipTransitionController : MPTransitionController
{
    UIView *_fromView;
    struct CGRect _toFrame;
    float _topMargin;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *fromView; // @synthesize fromView=_fromView;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)init;
@property(nonatomic) float topMargin; // @synthesize topMargin=_topMargin;
@property(nonatomic) struct CGRect toFrame; // @synthesize toFrame=_toFrame;
- (id)_subtypeForTransitionType:(unsigned int)arg1;
- (void)performTransition:(unsigned int)arg1;

@end

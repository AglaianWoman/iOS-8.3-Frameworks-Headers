//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface CAMBlurredSnapshotView : UIView
{
    BOOL _blurred;
    BOOL _dimmed;
    BOOL __supportsBlur;
    int _style;
    UIView *_snapshotView;
    UIView *__lowQualityBlurView;
    UIView *__dimmingView;
    struct CGRect _targetFrame;
}

@property(readonly, nonatomic) BOOL _supportsBlur; // @synthesize _supportsBlur=__supportsBlur;
@property(nonatomic) BOOL blurred; // @synthesize blurred=_blurred;
- (void)_setupDimOnSnapshot;
- (void)_prepareForApplyingLowQualityBlurAnimation:(BOOL)arg1 opacityAmount:(float *)arg2 opacityDuration:(double *)arg3 opacityDelay:(double *)arg4 opacityTimingFunction:(id *)arg5 targetView:(id *)arg6;
- (void)_setupLowQualityBlurOnSnapshot;
@property(readonly, nonatomic) UIView *_lowQualityBlurView; // @synthesize _lowQualityBlurView=__lowQualityBlurView;
- (void)_prepareForApplyingBlurAnimation:(BOOL)arg1 inputRadiusAmount:(float *)arg2 inputRadiusDuration:(double *)arg3 inputRadiusDelay:(double *)arg4 inputRadiusTimingFunction:(id *)arg5 opacityAmount:(float *)arg6 opacityDuration:(double *)arg7 opacityDelay:(double *)arg8 opacityTimingFunction:(id *)arg9;
- (void)_setupBlurOnSnapshot;
- (void)_removeSnapshotDimAnimated:(BOOL)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)_applySnapshotDimAnimated:(BOOL)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)_removeLowQualityBlurAnimated:(BOOL)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)_applyLowQualityBlurAnimated:(BOOL)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)_removeSnapshotBlurAnimated:(BOOL)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)_applySnapshotBlurAnimated:(BOOL)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)setDimmed:(BOOL)arg1 animated:(BOOL)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)setBlurred:(BOOL)arg1 animated:(BOOL)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
@property(nonatomic) struct CGRect targetFrame; // @synthesize targetFrame=_targetFrame;
- (void).cxx_destruct;
- (id)initWithView:(id)arg1;
@property(readonly, nonatomic) UIView *_dimmingView; // @synthesize _dimmingView=__dimmingView;
@property(nonatomic) int style; // @synthesize style=_style;
@property(readonly, nonatomic) UIView *snapshotView; // @synthesize snapshotView=_snapshotView;
@property(nonatomic) BOOL dimmed; // @synthesize dimmed=_dimmed;

@end


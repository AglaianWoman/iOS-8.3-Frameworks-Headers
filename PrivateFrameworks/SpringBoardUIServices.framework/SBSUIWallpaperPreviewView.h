//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SBFLockScreenDateView, SBFWallpaperView, SBSUIWallpaperMotionButton, UITapGestureRecognizer;

@interface SBSUIWallpaperPreviewView : UIView
{
    UITapGestureRecognizer *_tapGestureRecognizer;
    SBSUIWallpaperMotionButton *_motionButton;
    SBFLockScreenDateView *_dateView;
    SBFWallpaperView *_wallpaperView;
}

- (float)_motionButtonInset;
- (void)_layoutMotionButton;
- (void)_layoutWallpaperView;
- (void)_layoutDateView;
- (void)_updateMotionEffectsButton;
- (void)_toggleMotion;
@property(retain, nonatomic) SBFLockScreenDateView *dateView; // @synthesize dateView=_dateView;
@property(retain, nonatomic) SBFWallpaperView *wallpaperView; // @synthesize wallpaperView=_wallpaperView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

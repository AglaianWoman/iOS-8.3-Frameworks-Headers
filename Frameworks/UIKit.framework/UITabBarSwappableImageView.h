//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class UITabBar;

@interface UITabBarSwappableImageView : UIImageView
{
    id _value;
    id _alternate;
    float _scale;
    BOOL _showAlternate;
    BOOL _flipped;
    int _currentAnimation;
    UITabBar *_tabBar;
    int _buttonTag;
}

- (void)setAlternateImage:(id)arg1;
- (void)animateImage:(float)arg1 withTabBar:(id)arg2 withTag:(int)arg3;
- (id)initWithImage:(id)arg1 alternateImage:(id)arg2;
- (void)setCurrentImage;
- (void)showAlternateImage:(BOOL)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)setImage:(id)arg1;
- (void)dealloc;

@end


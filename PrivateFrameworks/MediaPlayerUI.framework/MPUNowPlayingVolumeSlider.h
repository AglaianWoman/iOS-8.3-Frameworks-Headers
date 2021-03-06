//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MPVolumeSlider.h"

@class UIColor;

@interface MPUNowPlayingVolumeSlider : MPVolumeSlider
{
    UIColor *_maximumTintUsedForTrackImageColor;
    UIColor *_minimumTintUsedForTrackImageColor;
}

- (void)setPlayer:(id)arg1;
- (id)_trackImageWithTintColor:(id)arg1;
- (void)_updateTrackTintForVolumeControlAvailability;
- (void).cxx_destruct;
- (struct CGRect)maximumValueImageRectForBounds:(struct CGRect)arg1;
- (struct CGRect)minimumValueImageRectForBounds:(struct CGRect)arg1;
- (struct CGRect)thumbRectForBounds:(struct CGRect)arg1 trackRect:(struct CGRect)arg2 value:(float)arg3;
- (struct CGRect)trackRectForBounds:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(int)arg2;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)_newVolumeWarningView;
- (void)_availableRoutesDidChangeNotification:(id)arg1;

@end


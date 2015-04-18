//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MPUNowPlayingPlaybackControlsView.h"

@class UIButton;

@interface RUNowPlayingPlaybackControlsView : MPUNowPlayingPlaybackControlsView
{
    UIButton *_infoButton;
    BOOL _isWide;
}

- (BOOL)_shouldAddBottomGap;
- (Class)_transportControlsClass;
- (void)_updateForItemDidChangeAnimated:(BOOL)arg1;
- (void)_updateSizeClass;
- (float)_volumeBottomVerticalInsetPhone;
- (void)_destroyInfoButtonAnimated:(BOOL)arg1;
- (float)_transportControlsLastResortVerticalOffsetPhone;
- (float)_titlesLastResortVerticalOffsetPhone;
- (BOOL)_isRadioItem;
- (struct CGRect)_boundsForCenteringCreateActivityIndicatorView;
- (void)setShowingCreateLoadingIndicator:(BOOL)arg1;
- (void)_infoButtonAction:(id)arg1;
@property(readonly, nonatomic) UIButton *infoButton; // @synthesize infoButton=_infoButton;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)newProgressIndicator;

// Remaining properties
@property(nonatomic) __weak id <RUNowPlayingPlaybackControlsViewDelegate><MPTransportControlsTarget> delegate;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIResponder.h"

@class AVPlayer, NSError;

@interface AVPlayerController : UIResponder
{
    AVPlayer *_player;
    int _status;
    NSError *_error;
}

+ (void)initialize;
- (id)externalPlaybackAirPlayDeviceLocalizedName;
- (int)externalPlaybackType;
- (id)loadedTimeRanges;
- (double)contentDurationWithinEndTimes;
- (double)maxTime;
- (double)minTime;
- (BOOL)hasEnabledVideo;
- (BOOL)hasEnabledAudio;
- (struct CGSize)contentDimensions;
- (BOOL)canSeek;
- (BOOL)canTogglePlayback;
- (BOOL)canPause;
- (BOOL)canScanBackward;
- (BOOL)isPlayingOnExternalScreen;
- (id)currentLegibleMediaSelectionOption;
- (id)currentAudioMediaSelectionOption;
- (BOOL)hasMediaSelectionOptions;
- (void)seekChapterForward:(id)arg1;
- (BOOL)canSeekToEnd;
- (void)seekChapterBackward:(id)arg1;
- (BOOL)canSeekToBeginning;
- (void)endScanningBackward:(id)arg1;
- (void)beginScanningBackward:(id)arg1;
- (void)endScanningForward:(id)arg1;
- (void)beginScanningForward:(id)arg1;
- (BOOL)canScanForward;
- (void)gotoEndOfSeekableRanges:(id)arg1;
- (void)skipBackwardThirtySeconds:(id)arg1;
- (BOOL)hasLiveStreamingContent;
- (void)endScrubbing:(id)arg1;
- (void)beginScrubbing:(id)arg1;
- (void)setPlaying:(BOOL)arg1;
- (BOOL)isPlaying;
- (void)togglePlayback:(id)arg1;
- (void)pause:(id)arg1;
- (void)play:(id)arg1;
- (id)legibleMediaSelectionOptions;
- (id)audioMediaSelectionOptions;
- (BOOL)hasLegibleMediaSelectionOptions;
- (BOOL)hasAudioMediaSelectionOptions;
- (void)seekToEnd:(id)arg1;
- (void)seekToBeginning:(id)arg1;
- (BOOL)canPlay;
- (void)seekToTime:(double)arg1;
- (id)timing;
- (double)contentDuration;
- (void)setCurrentLegibleMediaSelectionOption:(id)arg1;
- (void)setCurrentAudioMediaSelectionOption:(id)arg1;
- (void)setMinTime:(double)arg1;
- (void)setCanPause:(BOOL)arg1;
- (void)setMaxTime:(double)arg1;
- (void)setContentDuration:(double)arg1;
@property(readonly, nonatomic) AVPlayer *player; // @synthesize player=_player;
- (BOOL)allowsExternalPlayback;
- (BOOL)isExternalPlaybackActive;
- (id)seekableTimeRanges;
- (void)setAllowsExternalPlayback:(BOOL)arg1;
- (void)setVolume:(double)arg1;
- (double)volume;
- (id)metadata;
- (void)setRate:(double)arg1;
- (double)rate;
- (BOOL)isLooping;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) int status; // @synthesize status=_status;
- (void).cxx_destruct;
- (BOOL)hasContent;
- (void)seekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;
- (id)initWithPlayer:(id)arg1;
@property(nonatomic) BOOL CALayerDestinationIsTVOut;
@property(nonatomic, getter=isPlayingOnSecondScreen) BOOL playingOnSecondScreen;
- (BOOL)canSeekChapterBackward;
- (BOOL)canSeekChapterForward;
- (void)seekToChapter:(id)arg1;
- (id)contentChapters;
- (void)seekFrameBackward:(id)arg1;
- (BOOL)canSeekFrameBackward;
- (void)seekFrameForward:(id)arg1;
- (BOOL)canSeekFrameForward;
- (void)scanBackward:(id)arg1;
- (void)scanForward:(id)arg1;
- (void)seekByTimeInterval:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;
- (void)seekByTimeInterval:(double)arg1;
- (BOOL)isSeeking;
- (BOOL)hasShareableContent;
- (BOOL)hasTrimmableContent;
- (BOOL)hasContentChapters;
- (void)toggleMuted:(id)arg1;
- (void)changeVolumeToMaximum:(id)arg1;
- (void)changeVolumeToMinimum:(id)arg1;
- (void)decreaseVolume:(id)arg1;
- (void)increaseVolume:(id)arg1;
- (void)setLooping:(BOOL)arg1;
- (void)autoplay:(id)arg1;
- (void)setRateWithThrottling:(double)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPMediaItemCollection;

@interface PLPhotosDefaults : NSObject
{
    BOOL _shouldRepeat;
    BOOL _shouldShuffle;
    BOOL _shouldPlayMusic;
    BOOL _summarizeMomentSections;
    int _transition;
    int _secondsPerSlide;
    MPMediaItemCollection *_musicCollection;
}

+ (int)randomTransition;
+ (id)sharedInstance;
- (void)reloadPhotoDefaultValues;
- (void)_reloadPhotoDefaultValuesAndNotify:(BOOL)arg1;
- (void)setShouldPlayMusic:(BOOL)arg1;
- (int)transitionForAnimationMovingForward:(BOOL)arg1;
- (BOOL)shouldRepeat;
- (BOOL)shouldShuffle;
- (BOOL)shouldPlayMusic;
- (int)secondsPerSlide;
- (int)transition;
- (void)setTransition:(int)arg1;
- (id)init;
- (void)dealloc;
- (BOOL)summarizeMomentSections;
- (id)musicCollection;
- (void)setMusicCollection:(id)arg1;

@end

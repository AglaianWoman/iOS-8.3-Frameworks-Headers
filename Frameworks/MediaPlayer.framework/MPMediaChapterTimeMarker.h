//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPTimeMarker.h>

@class NSArray;

@interface MPMediaChapterTimeMarker : MPTimeMarker
{
    unsigned int _chapterIndex;
    NSArray *_chapters;
    BOOL _hasArtworkAtPlaybackTime;
}

@property(retain, nonatomic) NSArray *chapters; // @synthesize chapters=_chapters;
- (void).cxx_destruct;
@property(nonatomic) BOOL hasArtworkAtPlaybackTime; // @synthesize hasArtworkAtPlaybackTime=_hasArtworkAtPlaybackTime;
@property(nonatomic) unsigned int chapterIndex; // @synthesize chapterIndex=_chapterIndex;

@end


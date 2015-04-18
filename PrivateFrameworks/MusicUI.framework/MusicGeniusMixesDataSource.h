//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MusicUI/MusicQueryDataSource.h>

@class NSMutableArray;

@interface MusicGeniusMixesDataSource : MusicQueryDataSource
{
    NSMutableArray *_mixes;
}

- (id)playbackContextForIndex:(unsigned int)arg1;
- (BOOL)entityIsNowPlayingAtIndex:(unsigned int)arg1;
- (int)editingTypeForEntityAtIndex:(unsigned int)arg1;
- (void)_invalidateCalculatedEntities;
- (id)entities;
- (BOOL)_updateQueryPredicatesAndOrdering;
- (void)deleteEntityAtIndex:(unsigned int)arg1;
- (unsigned int)indexOfEntity:(id)arg1;
- (BOOL)showsIndexBar;
- (BOOL)canSelectEntityAtIndex:(unsigned int)arg1;
- (void).cxx_destruct;
- (BOOL)isEmpty;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryServices/PLAssetContainerListChangeNotification.h>

@class PLAggregateAlbumList;

@interface PLAggregateAlbumListChangeNotification : PLAssetContainerListChangeNotification
{
    PLAggregateAlbumList *_albumList;
    PLAssetContainerListChangeNotification *_note;
    unsigned int _indexOffet;
}

+ (id)notificationForAggregateAlbumList:(id)arg1 fromAlbumListChangeNotification:(id)arg2 indexOffset:(unsigned int)arg3;
- (id)initWithAggregateAlbumList:(id)arg1 fromAlbumListChangeNotification:(id)arg2 indexOffset:(unsigned int)arg3;
- (unsigned int)snapshotIndexForContainedObject:(id)arg1;
- (id)changedObjects;
- (id)changedIndexesRelativeToSnapshot;
- (BOOL)_getOldSet:(id *)arg1 newSet:(id *)arg2;
- (id)changedIndexes;
- (void)enumerateMovesWithBlock:(CDUnknownBlockType)arg1;
- (id)insertedIndexes;
- (id)deletedIndexes;
- (BOOL)shouldReload;
- (id)deletedObjects;
- (id)insertedObjects;
- (struct NSObject *)albumList;
- (id)object;
- (void)dealloc;

@end


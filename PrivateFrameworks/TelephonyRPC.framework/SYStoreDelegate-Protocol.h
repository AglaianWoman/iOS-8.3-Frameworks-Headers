//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSError, SYStore;

@protocol SYStoreDelegate <NSObject>
- (void)syncStore:(SYStore *)arg1 objectDeleted:(id <SYObject>)arg2;
- (void)syncStore:(SYStore *)arg1 objectUpdated:(id <SYObject>)arg2;
- (void)syncStore:(SYStore *)arg1 objectAdded:(id <SYObject>)arg2;

@optional
- (void)syncStoreEnqueuedAllFullSyncMessages:(SYStore *)arg1 context:(NSDictionary *)arg2;
- (void)syncStore:(SYStore *)arg1 encounteredErrorInFullSync:(NSError *)arg2;
- (BOOL)syncStoreShouldDeleteRemoteObjectsOnFailedFullSync:(SYStore *)arg1;
- (int (^)(NSMutableArray *, id *))beginSyncingAllObjectsForStore:(SYStore *)arg1;
- (NSArray *)syncStoreAllObjects:(SYStore *)arg1;
- (void)syncStore:(SYStore *)arg1 sentMessageWithContext:(NSDictionary *)arg2;
- (void)syncStore:(SYStore *)arg1 encounteredError:(NSError *)arg2 context:(NSDictionary *)arg3;
- (BOOL)syncStoreShouldPerformInitialFullSync:(SYStore *)arg1;
- (void)syncStore:(SYStore *)arg1 peerFinishedProcessingMessageWithContext:(NSDictionary *)arg2;
- (void)syncStoreDidUnpair:(SYStore *)arg1;
- (void)syncStoreDidSetupAfterPairing:(SYStore *)arg1;
- (void)syncStoreAllObjectsDeleted:(SYStore *)arg1;
- (void)syncStoreDidCompleteFullSync:(SYStore *)arg1;
- (void)syncStoreDidUpdate:(SYStore *)arg1;
- (void)syncStoreWillUpdate:(SYStore *)arg1 objectCount:(unsigned int)arg2;
- (void)syncStoreWillUpdate:(SYStore *)arg1;
@end

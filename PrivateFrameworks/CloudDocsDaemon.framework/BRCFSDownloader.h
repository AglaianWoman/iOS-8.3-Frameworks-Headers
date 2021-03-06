//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudDocsDaemon/BRCFSSchedulerBase.h>

#import "BRCModule.h"

@class BRCDeadlineScheduler, NSString;

@interface BRCFSDownloader : BRCFSSchedulerBase <BRCModule>
{
    BOOL _initialKickDone;
    BRCDeadlineScheduler *_downloadsDeadlineScheduler;
}

@property(readonly, nonatomic) BRCDeadlineScheduler *downloadsDeadlineScheduler; // @synthesize downloadsDeadlineScheduler=_downloadsDeadlineScheduler;
- (void)sendBatchForSyncContext:(id)arg1 maxRecordsCount:(unsigned int)arg2 sizeHint:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (BOOL)applyThumbnailToItem:(id)arg1 serverItem:(id)arg2 atURL:(id)arg3 applySchedulerState:(int *)arg4;
- (void)scheduleThumbnailDownloadForItem:(id)arg1 serverItem:(id)arg2 applySchedulerState:(int *)arg3;
- (BOOL)hasThumbnailToApplyForItem:(id)arg1;
- (BOOL)applyLosersToItem:(id)arg1 serverItem:(id)arg2 atURL:(id)arg3 applySchedulerState:(int *)arg4;
- (void)evictLosersOnItem:(id)arg1 atURL:(id)arg2 applySchedulerState:(int *)arg3;
- (void)scheduleContentDownloadForItem:(id)arg1 serverItem:(id)arg2;
- (BOOL)makeContentLive:(id)arg1;
- (BOOL)hasAdditionsToApplyForItem:(id)arg1 serverItem:(id)arg2;
- (void)updateContentDownloadForMetaOnlyChange:(id)arg1 fromEtag:(id)arg2 toEtag:(id)arg3;
- (void)addAliasItem:(id)arg1 toDownloadingItem:(id)arg2;
- (void)cancelAndCleanupItemDownloads:(id)arg1;
- (void)rescheduleThrottlesPendingInitialSyncInZone:(id)arg1;
- (void)_sendLosersBatch:(id)arg1 maxRecordsCount:(unsigned int)arg2;
- (void)_sendContentsBatch:(id)arg1 maxRecordsCount:(unsigned int)arg2;
- (void)_sendThumbnailsBatch:(id)arg1 maxRecordsCount:(unsigned int)arg2;
- (void)_retriedEntry:(id)arg1 throttle:(id)arg2 operationID:(id)arg3 skipRetry:(BOOL)arg4;
- (void)_finishedDownloading:(id)arg1 kind:(int)arg2 operationID:(id)arg3 error:(id)arg4;
- (void)scheduleLosersDownloadForItem:(id)arg1 serverItem:(id)arg2 purgeStaleEntries:(BOOL)arg3 applySchedulerState:(int *)arg4;
- (void)cancelAndCleanupItemDownload:(id)arg1 kind:(int)arg2 etag:(id)arg3;
- (BOOL)shouldScheduleLosersEvictionForItem:(id)arg1;
- (void)createThrottleForItem:(id)arg1 state:(int)arg2 kind:(int)arg3 etag:(id)arg4;
- (void)cancelAndCleanupItemDownload:(id)arg1 kind:(int)arg2;
- (BOOL)_hasLosersToDelete:(id)arg1 serverItem:(id)arg2;
- (void)_cancelThrottles:(id)arg1 state:(int)arg2;
- (id)_sanitizeRecord:(id)arg1;
- (id)_zoneForEntry:(id)arg1 kind:(int)arg2 operationID:(id)arg3;
- (void)_fetchStamps:(struct throttle_stamps *)arg1 now:(long long)arg2 throttle:(id)arg3 throttleID:(long long)arg4 kind:(int)arg5 etag:(id)arg6;
- (void)_deleteThrottleID:(long long)arg1 zone:(id)arg2;
- (id)descriptionForThrottleID:(long long)arg1 zone:(id)arg2 now:(long long)arg3 context:(id)arg4;
- (void)_schedule;
- (id)initWithAccountSession:(id)arg1;
- (void)_close;
- (BOOL)isDownloadingItem:(id)arg1;
- (void).cxx_destruct;
- (void)resume;
- (void)suspend;
- (void)cancel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(nonatomic) BOOL isCancelled;
@property(readonly) Class superclass;

@end


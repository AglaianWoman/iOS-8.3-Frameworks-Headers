//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MPUReportingController.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

@interface RUJingleTiltReportingController : MPUReportingController
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    double _flushInterval;
    NSMutableArray *_pendingReportingEvents;
    NSObject<OS_dispatch_source> *_playEventFlushTimerSource;
}

- (void)_schedulePlaybackFlushTimer;
- (void)_flushEvents;
- (void)_addPendingReportingEvents:(id)arg1;
- (void)_cancelPlaybackFlushTimer;
- (id)popPendingReportingEvents;
- (void)_storeBagDidLoadNotification:(id)arg1;
- (void)_updateForLoadedStoreBag:(id)arg1;
- (void)_recordReportingEvents:(id)arg1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

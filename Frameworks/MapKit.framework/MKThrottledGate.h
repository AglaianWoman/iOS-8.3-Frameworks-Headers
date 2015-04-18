//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, VKTimer;

@interface MKThrottledGate : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    int _maxAvailableTickets;
    float _availableTickets;
    float _refreshRate;
    NSMutableArray *_waitingJobs;
    VKTimer *_timer;
}

- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (void)dispatch:(CDUnknownBlockType)arg1;
- (id)initWithMax:(int)arg1 refreshRate:(float)arg2 queue:(id)arg3;
- (BOOL)_replenishAvailableJobsIfNecessary;
- (void)_ensureTimer;
- (BOOL)_dispatchWaitingJobsIfNecessary;
- (void)_timerFired:(id)arg1;

@end

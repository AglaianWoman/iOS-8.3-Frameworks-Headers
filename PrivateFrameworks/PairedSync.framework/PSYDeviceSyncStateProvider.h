//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>;

@interface PSYDeviceSyncStateProvider : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_observers;
    unsigned int _syncState;
    struct _opaque_pthread_mutex_t _syncStateLock;
    int _notifyToken;
    unsigned long long _notifyState;
}

+ (id)sharedSyncStateProvider;
- (void)enumerateObserversWithBlock:(CDUnknownBlockType)arg1;
- (void)deviceSyncStateChangedRemotely;
- (unsigned int)syncState;
- (void)addObserver:(id)arg1;
- (void).cxx_destruct;
- (void)removeObserver:(id)arg1;
- (id)init;

@end


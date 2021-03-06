//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface IDSInternalQueueController : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;
- (void)assertQueueIsCurrent;
- (BOOL)isQueueCurrent;
- (void)performBlock:(CDUnknownBlockType)arg1 waitUntilDone:(BOOL)arg2;
- (void)assertQueueIsNotCurrent;
- (id)queue;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (id)init;
- (void)dealloc;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ACDSTask : NSObject
{
    double _lastAttemptTime;
    double _timeBetweenAttempts;
    int _retryCount;
    int _lastErrorCode;
    NSString *_lastErrorDomain;
}

+ (unsigned int)initialFastStartDataChunkSize;
+ (BOOL)isFastStartEnabled;
+ (void)initialize;
- (void)_handleResponse:(struct __CFHTTPMessage *)arg1 status:(int)arg2 error:(id *)arg3;
- (BOOL)shouldRescheduleWhenCancelled;
- (long)compareEquivalentPriorities:(id)arg1;
- (void)willBeCancelledForError:(id)arg1;
- (id)taskByCoalescingWithTask:(id)arg1;
- (void)attemptCompletedWithError:(id)arg1;
- (void)handleProgressiveBodyLoad:(struct __CFData *)arg1 finished:(BOOL)arg2 service:(id)arg3 error:(id *)arg4;
- (void)handleInitialResponse:(struct __CFHTTPMessage *)arg1 body:(struct __CFData *)arg2 status:(int)arg3 service:(id)arg4 error:(id *)arg5;
- (void)handleResponse:(struct __CFHTTPMessage *)arg1 body:(struct __CFData *)arg2 status:(int)arg3 service:(id)arg4 error:(id *)arg5;
- (BOOL)shouldSuppressPasswordError:(id)arg1;
- (double)nextAttemptTime;
- (BOOL)isReadyToPerform;
- (BOOL)shouldCancelForTask:(id)arg1;
- (id)createNotificationUserInfoDictionaryWithError:(id)arg1;
- (int)serviceTaskType;
- (BOOL)shouldDisplayError:(id)arg1;
- (unsigned int)currentProgressiveDataLength;
- (unsigned int)expectedProgressiveDataLength;
- (BOOL)hasBegunProgressiveLoad;
- (BOOL)isProgressive;
- (int)retryCount;
- (int)priority;
- (void)perform:(CDStruct_618647e5 *)arg1;
- (int)type;
- (id)name;
- (void)dealloc;
- (void)cancel;
- (BOOL)requiresPassword;

@end

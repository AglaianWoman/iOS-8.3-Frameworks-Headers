//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LSUserActivityClientResponseProtocol.h"

@class NSMapTable, NSObject<OS_dispatch_queue>, NSString, NSUUID, NSXPCConnection;

@interface LSUserActivityManager : NSObject <LSUserActivityClientResponseProtocol>
{
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_serverQ;
    BOOL _connectionInitializationSucceeded;
    BOOL _needToSendInitialMessage;
    NSMapTable *_userActivitiesByUUID;
    BOOL _supportsActivityContinuation;
    BOOL _activityContinuationIsEnabled;
    NSUUID *_activeUserActivityUUID;
}

+ (id)defaultManager;
+ (BOOL)userActivityContinuationSupported;
+ (BOOL)shouldSupportActivityContinuation;
- (id)initWithConnection:(id)arg1;
@property(readonly, retain) NSXPCConnection *connection;
- (id)init;
- (void)dealloc;
- (void)sendUserActivityInfoToLSUserActivityd:(id)arg1 makeCurrent:(BOOL)arg2;
- (void)tellDaemonAboutNewLSUserActivity:(id)arg1;
@property(copy) NSUUID *activeUserActivityUUID; // @synthesize activeUserActivityUUID=_activeUserActivityUUID;
- (void)removeUserActivity:(id)arg1;
- (void)makeInactive:(id)arg1;
- (void)makeActive:(id)arg1;
- (BOOL)userActivityIsActive:(id)arg1;
- (void)markUserActivityAsDirty:(id)arg1 forceImmediate:(BOOL)arg2;
- (void)fetchUUID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
@property(retain) NSMapTable *userActivitiesByUUID; // @synthesize userActivitiesByUUID=_userActivitiesByUUID;
@property(readonly) BOOL supportsActivityContinuation; // @synthesize supportsActivityContinuation=_supportsActivityContinuation;
- (id)createByDecodingUserActivity:(id)arg1;
- (id)encodeUserActivity:(id)arg1;
- (void)didReceiveInputStreamWithUUID:(id)arg1 inputStream:(id)arg2 outputStream:(id)arg3;
@property(readonly) BOOL activityContinuationIsEnabled;
- (void)tellClientUserActivityItWasResumed:(id)arg1;
- (void)askClientUserActivityToSave:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)askClientUserActivityToSave:(id)arg1;
- (void)addUserActivity:(id)arg1;
- (id)_findUserActivityForUUID:(id)arg1;
@property(readonly) NSObject<OS_dispatch_queue> *serverQ; // @synthesize serverQ=_serverQ;
- (void)sendInitialMessage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


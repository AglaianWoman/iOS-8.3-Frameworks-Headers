//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GKDiscovery, GKMatch, NSDate, NSDictionary, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSSet;

@interface GKMatchmaker : NSObject
{
    BOOL _nearbyAdvertising;
    BOOL _wasNearbyBrowsing;
    BOOL _nearbyBrowsing;
    CDUnknownBlockType _inviteHandler;
    GKMatch *_match;
    CDUnknownBlockType _inviteeResponseHandler;
    CDUnknownBlockType _recipientResponseHandler;
    NSSet *_invitees;
    NSDictionary *_inviteesByUserID;
    CDUnknownBlockType _nearbyPlayerHandler;
    CDUnknownBlockType _nearbyPlayerIDHandler;
    NSObject<OS_dispatch_queue> *_lookForInviteQueue;
    int _matching;
    NSMutableDictionary *_nearbyPlayers;
    NSDate *_nearbyQueryLastCheckDate;
    GKDiscovery *_nearbyDiscovery;
    NSSet *_nearbyCompatibileHashes;
    NSMutableDictionary *_nearbyInvites;
    double _nearbyQueryAllowance;
}

+ (id)syncQueue;
+ (id)descriptionForNearbyDictionary:(id)arg1;
+ (id)sharedMatchmaker;
@property(retain, nonatomic) GKMatch *match; // @synthesize match=_match;
@property(retain) NSMutableDictionary *nearbyPlayers; // @synthesize nearbyPlayers=_nearbyPlayers;
- (void)stopBrowsingForNearbyPlayers;
- (void)startBrowsingForNearbyPlayersWithReachableHandler:(CDUnknownBlockType)arg1;
- (id)nearbyInviteFromPlayer:(id)arg1;
- (void)localPlayerAcceptedNearbyInvite:(id)arg1;
- (void)removeNearbyInviteFromPlayer:(id)arg1;
- (void)declineNearbyInviteFromDevice:(id)arg1 reason:(int)arg2;
- (void)saveNearbyInvite:(id)arg1 fromPlayer:(id)arg2;
- (void)presentNearbyInvite:(id)arg1 fromDevice:(id)arg2;
- (void)loadPhotoDataDictionaryWithHandler:(CDUnknownBlockType)arg1;
- (void)determineIfShouldRespondToNearbyPlayer:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)sendProfileResponseToDevice:(id)arg1;
- (BOOL)compatibilityMatrix:(id)arg1 includesAppWithBundleID:(id)arg2 version:(id)arg3;
- (void)setNearbyPlayerDeclined:(id)arg1 deviceID:(id)arg2 reason:(int)arg3;
- (void)setNearbyPlayerAccepted:(id)arg1 deviceID:(id)arg2 connectionData:(id)arg3;
- (void)setNearbyPlayerFailed:(id)arg1 deviceID:(id)arg2;
- (id)profileDictionaryForLocalPlayer;
- (id)nearbyDevicesForPlayer:(id)arg1 withState:(int)arg2;
- (int)numberOfNearbyDevicesForPlayer:(id)arg1 withState:(int)arg2;
- (void)generateHashedCompatibiltySet;
- (void)startNearbyAdvertising;
- (id)hashForCurrentGame;
- (int)currentEnvironment;
- (void)setupNearbyDiscovery;
- (void)performSync:(CDUnknownBlockType)arg1;
- (id)_nearbyDeviceWithDeviceID:(id)arg1;
- (void)loadCompatabilityMatrixAsDictionaryWithHandler:(CDUnknownBlockType)arg1;
- (id)hashForBundleID:(id)arg1 version:(id)arg2;
- (BOOL)shouldRespondToNearbyQuery;
- (void)nearbyInviteWasCancelled:(id)arg1 fromDevice:(id)arg2;
- (void)handleNearbyInviteResponse:(id)arg1 fromDevice:(id)arg2;
- (void)handleNearbyInvite:(id)arg1 fromDevice:(id)arg2;
- (void)handleNearbyProfileResponse:(id)arg1 fromDevice:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)handleNearbyProfileQuery:(id)arg1 fromDevice:(id)arg2;
- (void)receivedData:(id)arg1 fromNearbyDeviceID:(id)arg2;
- (void)lostNearbyDeviceID:(id)arg1;
- (void)foundNearbyDeviceID:(id)arg1 discoveryInfo:(id)arg2;
- (void)setNearbyDevice:(id)arg1 reachable:(BOOL)arg2;
- (id)nearbyDeviceWithDeviceID:(id)arg1;
- (void)declineReceivedNearbyInvites;
- (void)cancelSentNearbyInvites;
- (void)stopNearbyAdvertising;
- (void)localPlayerRespondedToNearbyInvite:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *nearbyInvites; // @synthesize nearbyInvites=_nearbyInvites;
@property(retain, nonatomic) NSSet *nearbyCompatibileHashes; // @synthesize nearbyCompatibileHashes=_nearbyCompatibileHashes;
@property(nonatomic) double nearbyQueryAllowance; // @synthesize nearbyQueryAllowance=_nearbyQueryAllowance;
@property(retain, nonatomic) GKDiscovery *nearbyDiscovery; // @synthesize nearbyDiscovery=_nearbyDiscovery;
@property(retain, nonatomic) NSDate *nearbyQueryLastCheckDate; // @synthesize nearbyQueryLastCheckDate=_nearbyQueryLastCheckDate;
@property(nonatomic) BOOL nearbyBrowsing; // @synthesize nearbyBrowsing=_nearbyBrowsing;
@property(nonatomic) BOOL wasNearbyBrowsing; // @synthesize wasNearbyBrowsing=_wasNearbyBrowsing;
@property(nonatomic) BOOL nearbyAdvertising; // @synthesize nearbyAdvertising=_nearbyAdvertising;
@property int matching; // @synthesize matching=_matching;
@property(nonatomic) NSObject<OS_dispatch_queue> *lookForInviteQueue; // @synthesize lookForInviteQueue=_lookForInviteQueue;
@property(copy, nonatomic) CDUnknownBlockType nearbyPlayerIDHandler; // @synthesize nearbyPlayerIDHandler=_nearbyPlayerIDHandler;
@property(copy, nonatomic) CDUnknownBlockType nearbyPlayerHandler; // @synthesize nearbyPlayerHandler=_nearbyPlayerHandler;
@property(copy, nonatomic) CDUnknownBlockType inviteHandler; // @synthesize inviteHandler=_inviteHandler;
- (void)setNearbyPlayerFailed:(id)arg1;
- (void)setNearbyPlayerDeclined:(id)arg1 reason:(int)arg2;
- (void)setNearbyPlayerAccepted:(id)arg1 connectionData:(id)arg2;
- (void)startBrowsingForNearbyPlayersWithHandler:(CDUnknownBlockType)arg1;
- (void)queryActivityWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)queryPlayerGroupActivity:(unsigned int)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)finishMatchmakingForMatch:(id)arg1;
- (void)cancelInviteToPlayer:(id)arg1;
- (void)addPlayersForHostedMatchRequest:(id)arg1 existingPlayerCount:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)addPlayersToMatch:(id)arg1 matchRequest:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)findPlayersForHostedMatchRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)findMatchForRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)matchForInvite:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)finishedAuthenticating;
- (int)responseForDeclineReason:(int)arg1;
@property(retain) NSDictionary *inviteesByUserID; // @synthesize inviteesByUserID=_inviteesByUserID;
- (void)stopNearbyBrowsing;
- (void)startNearbyBrowsing;
- (void)cancelPendingInvitesAndMarkInviteComplete:(BOOL)arg1;
- (void)cancelPendingInviteToPlayer:(id)arg1;
- (void)cancelNearbyInvitesToPlayers:(id)arg1;
- (void)findPlayersForHostedRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)matchWithRequest:(id)arg1 currentMatch:(id)arg2 hostedCurrentPlayerCount:(int)arg3 serverHosted:(BOOL)arg4 rematchID:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)_request:(id)arg1 match:(id)arg2 rematchID:(id)arg3 serverHosted:(BOOL)arg4 playerCount:(int)arg5 connectionData:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)invitePlayersWithRequest:(id)arg1 serverHosted:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)invitePlayersWithRequest:(id)arg1 serverHosted:(BOOL)arg2 onlineConnectionData:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)inviteAnyNearbyPlayersWithRequest:(id)arg1;
- (void)doneMatchmaking;
- (void)reportResponse:(int)arg1 forInvitees:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (BOOL)removeInvitee:(id)arg1;
- (void)matchForRemoteInvite:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)matchForNearbyInvite:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)acceptNearbyInvite:(id)arg1 connectionData:(id)arg2;
- (void)respondToHostedInvite:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) BOOL hasInviteListener;
@property(retain, nonatomic) NSSet *invitees; // @synthesize invitees=_invitees;
- (void)updateNearbyAdvertising;
- (void)setConnectivitySettings:(id)arg1;
- (void)localPlayerAcceptedGameInvite:(id)arg1;
- (void)inviteeDeclinedNotification:(id)arg1;
- (void)inviteeAcceptedNotification:(id)arg1;
- (void)loadConnectivitySettingsWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) CDUnknownBlockType recipientResponseHandler; // @synthesize recipientResponseHandler=_recipientResponseHandler;
@property(copy, nonatomic) CDUnknownBlockType inviteeResponseHandler; // @synthesize inviteeResponseHandler=_inviteeResponseHandler;
- (void)findRematchForMatch:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)registeredListentersChanged;
- (void)lookForInvite;
- (void)applicationDidEnterBackgroundNotification:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)cancel;
- (void)applicationWillTerminateNotification:(id)arg1;
- (void)applicationWillEnterForegroundNotification:(id)arg1;

@end

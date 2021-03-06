//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMAccount, IMChatItem, IMChatRegistry, IMHandle, IMMessage, IMMultiDict, IMScheduledUpdater, IMTimingCollection, NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSString, NSTimer;

@interface IMChat : NSObject
{
    NSString *_guid;
    NSString *_typingGUID;
    NSString *_currentLocationGUID;
    NSString *_identifier;
    IMAccount *_account;
    NSString *_displayName;
    NSString *_roomName;
    NSString *_roomNameWithoutSuffix;
    NSString *_lastAddressedHandleID;
    NSString *_groupID;
    NSDate *_dateCreated;
    NSDate *_dateModified;
    NSMutableDictionary *_unfinishedMessageMap;
    NSArray *_participants;
    NSMutableDictionary *_participantStates;
    id _typingIndicatorTimer;
    IMMessage *_invitationForPendingParticipants;
    NSMutableArray *_messagesPendingJoin;
    NSMutableSet *_guids;
    NSMutableDictionary *_itemMap;
    NSMutableDictionary *_chatProperties;
    NSMutableDictionary *_participantProperties;
    NSArray *_frequentReplies;
    NSArray *_attachments;
    IMTimingCollection *_timingCollection;
    NSMutableArray *_chatItems;
    NSMutableArray *_chatItemsUpdates;
    id <IMChatItemRules> _chatItemRules;
    IMScheduledUpdater *_chatItemsUpdater;
    IMChatItem *_nextStaleChatItem;
    IMMultiDict *_messageActionsMap;
    id <IMChatSendProgressDelegate> _sendProgressDelegate;
    NSTimer *_sendProgressTimer;
    NSMutableDictionary *_sendingItems;
    float _cachedSendProgress;
    int _joinState;
    unsigned char _style;
    unsigned int _numberOfMessagesToKeepLoaded;
    unsigned int _dbFailedCount;
    unsigned int _dbUnreadCount;
    void *_context;
    unsigned int _hasBeenConfigured:1;
    unsigned int _isFirstMessageInvitation:1;
    unsigned int _wasInvitationHandled:1;
    unsigned int _didSendAFinishedMessage:1;
    unsigned int _hasPendingMarkRead:1;
    unsigned int _isUpdatingChatItems:1;
    unsigned int _isRecording:1;
    BOOL _downgradeState;
    BOOL _ignoreDowngradeStatusUpdates;
    BOOL _forceMMS;
    IMScheduledUpdater *_downgradeStateUpdater;
}

+ (void)setChatItemRulesClass:(Class)arg1;
+ (void)_initializeFMF;
+ (Class)chatItemRulesClass;
@property(retain, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
@property(readonly, nonatomic) NSDate *dateCreated; // @synthesize dateCreated=_dateCreated;
- (void)join;
@property(readonly, retain, nonatomic) NSString *persistentID;
- (id)testChatItems;
@property(readonly, nonatomic) BOOL allRecipientsSharingLocation;
@property(readonly, nonatomic) BOOL hasRecipientsSharingLocation;
@property(readonly, retain, nonatomic) NSSet *fmfHandles;
- (void)_sendProgressTimerFired:(id)arg1;
- (float)_progressSending:(unsigned int *)arg1 of:(unsigned int *)arg2;
- (void)_updateSendProgress;
- (void)_scheduleSendProgressTimerIfNeeded;
- (id)chatItemsForItems:(id)arg1;
- (id)chatItemsForMessages:(id)arg1;
- (void)_replaceStaleChatItems;
- (void)_unmapSendingItem:(id)arg1;
- (void)_queueReplaceStaleChatItems;
- (void)_resetSendProgress;
- (BOOL)_hasSendingMessages;
- (void)_typingIndicatorTimedOut:(id)arg1;
- (void)_setTypingIndicatorTimeout;
- (id)loadUnreadMessagesWithLimit:(unsigned int)arg1 fallbackToMessagesUpToGUID:(id)arg2;
- (id)loadMessagesBeforeDate:(id)arg1 limit:(unsigned int)arg2;
- (id)loadMessagesUpToGUID:(id)arg1 limit:(unsigned int)arg2;
@property(readonly, nonatomic) BOOL hasMoreMessagesToLoad;
- (void)_setAttachments:(id)arg1;
- (id)loadMessagesUpToGUID:(id)arg1 date:(id)arg2 limit:(unsigned int)arg3 loadImmediately:(BOOL)arg4;
- (void)_trimMessagesAsNeeded;
- (void)_trimItemsLeavingNumber:(unsigned int)arg1;
- (id)_privateInitWithAccount:(id)arg1 style:(unsigned char)arg2 roomName:(id)arg3 messages:(id)arg4 participants:(id)arg5;
@property(readonly, nonatomic) NSDate *dateModified; // @synthesize dateModified=_dateModified;
@property(retain, nonatomic, setter=_setGUIDs:) NSMutableSet *_guids; // @synthesize _guids;
@property(retain, nonatomic, getter=_nextStaleChatItem, setter=_setNextStaleChatItem:) IMChatItem *nextStaleChatItem; // @synthesize nextStaleChatItem=_nextStaleChatItem;
@property(retain, nonatomic) NSArray *frequentReplies; // @synthesize frequentReplies=_frequentReplies;
- (id)_initWithDictionaryRepresentation:(id)arg1 items:(id)arg2 participantsHint:(id)arg3 accountHint:(id)arg4;
- (void)addPendingParticipants:(id)arg1;
- (void)_invitePendingParticipants;
- (BOOL)canAddParticipants:(id)arg1;
- (BOOL)_hasCommunicatedOnService:(id)arg1;
- (void)setValue:(id)arg1 forProperty:(id)arg2 ofParticipant:(id)arg3;
- (id)valueForProperty:(id)arg1 ofParticipant:(id)arg2;
- (id)allChatProperties;
- (void)_setChatProperties:(id)arg1;
- (void)markMessagesAsRead:(id)arg1;
- (void)markMessageAsRead:(id)arg1;
- (void)updateMessage:(id)arg1 flags:(unsigned long long)arg2;
- (BOOL)canSendMessage:(id)arg1;
- (void)cancelMessage:(id)arg1;
- (void)declineInvitation;
- (void)acceptInvitation;
@property(readonly, nonatomic) BOOL hasUnhandledInvitation;
@property(readonly, nonatomic) NSString *roomNameWithoutSuffix;
- (void)setRoomName:(id)arg1;
@property(readonly, nonatomic) unsigned int overallChatStatus;
- (void)_showErrorMessage:(id)arg1;
- (void)_participant:(id)arg1 statusChanged:(int)arg2;
- (BOOL)_handleIncomingItem:(id)arg1;
- (void)_handleMessageGUIDDeletions:(id)arg1;
- (void)_endTiming;
- (void)_startTiming:(id)arg1;
- (id)_timingCollection;
- (void)_handleHandleStatusChanged:(id)arg1;
- (void)_recomputeOverallChatStatusQuietly:(BOOL)arg1;
- (void)_insertHistoricalMessages:(id)arg1 queryID:(id)arg2 isRefresh:(BOOL)arg3 isHistoryQuery:(BOOL)arg4;
- (BOOL)_shouldAnnouncePeopleJoin;
- (id)_IMUnfinishedMapSenderGUIDToRemove:(id)arg1 requireFinished:(BOOL)arg2;
- (void)_setDBFailedCount:(unsigned int)arg1;
- (void)_setDBUnreadCount:(unsigned int)arg1;
- (id)_messageActionsMap;
- (void)_unmapItem:(id)arg1;
- (void)_mapItem:(id)arg1;
@property(readonly, nonatomic) BOOL _shouldRegisterChat;
- (void)_setupObservation;
- (BOOL)_sanityCheckAccounts;
@property(retain, nonatomic) IMMessage *invitationForPendingParticipants; // @synthesize invitationForPendingParticipants=_invitationForPendingParticipants;
- (void)_inviteParticipants:(id)arg1 reason:(id)arg2;
- (id)_pendingParticipants;
- (id)participantsWithState:(unsigned int)arg1;
- (BOOL)canAddParticipant:(id)arg1;
- (void)_unwatchHandleStatusChangedForHandle:(id)arg1;
- (void)_remapHandle:(id)arg1 toHandle:(id)arg2;
- (void)_addParticipant:(id)arg1;
- (void)setRecipient:(id)arg1 locally:(BOOL)arg2;
- (void)_setAccount:(id)arg1 locally:(BOOL)arg2;
- (id)allPropertiesOfParticipant:(id)arg1;
- (void)_clearUnreadCount;
- (id)_itemsForGUIDs:(id)arg1;
- (void)_markItemsAsRead:(id)arg1;
- (void)_setTimerForReadMessageCache;
- (void)__clearReadMessageCache;
- (BOOL)canSendTransfer:(id)arg1;
- (void)_sendCurrentLocationMessageUsingLocationManager:(id)arg1;
- (void)_setLocalUserIsTyping:(BOOL)arg1 recording:(BOOL)arg2 suppliedGUID:(id)arg3;
@property(readonly, retain, nonatomic) IMChatRegistry *chatRegistry;
- (void)_setJoinState:(int)arg1;
- (void)_setDisplayName:(id)arg1;
- (void)_clearCachedIdentifier;
@property(readonly, nonatomic) NSString *roomName; // @synthesize roomName=_roomName;
- (id)_performQueryWithKey:(id)arg1 loadImmediately:(BOOL)arg2 block:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_setParticipantState:(unsigned int)arg1 forHandle:(id)arg2 quietly:(BOOL)arg3;
- (void)_sendMessage:(id)arg1 adjustingSender:(BOOL)arg2 shouldQueue:(BOOL)arg3;
- (void)_setJoinState:(int)arg1 quietly:(BOOL)arg2;
- (void)_updateTypingIndicatorTimeout;
- (void)_clearTypingIndicatorTimeout;
- (void)_clearIncomingTypingIndicators;
- (void)_replaceChatItemsForItem:(id)arg1 withChatItemsForItem:(id)arg2;
- (void)_insertChatItemsForItem:(id)arg1;
- (void)_mapSendingItem:(id)arg1;
- (BOOL)_isDuplicate:(id)arg1;
- (BOOL)_handleIncomingItem:(id)arg1 shouldQueue:(BOOL)arg2;
- (void)_queueChatItemsUpdate:(CDUnknownBlockType)arg1;
- (void)_removeChatItemsForItem:(id)arg1;
- (id)_itemForGUID:(id)arg1;
- (unsigned int)stateForParticipant:(id)arg1;
- (void)_postNotification:(id)arg1 userInfo:(id)arg2 shouldLog:(BOOL)arg3;
- (void)_removeChatItemsInRange:(struct _NSRange)arg1;
- (id)_performQueryWithKey:(id)arg1 loadImmediately:(BOOL)arg2 block:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) IMMessage *lastIncomingFinishedMessage;
- (void)_updateChatItemsWithReason:(id)arg1 block:(CDUnknownBlockType)arg2 shouldPost:(BOOL)arg3;
- (void)_replaceChatItemsWithChatItemsForItems:(id)arg1 isRefresh:(BOOL)arg2;
- (void)_insertHistoricalMessages:(id)arg1 queryID:(id)arg2 isRefresh:(BOOL)arg3 isHistoryQuery:(BOOL)arg4 limit:(unsigned int)arg5;
@property(nonatomic) unsigned int numberOfMessagesToKeepLoaded;
- (void)_updateChatItemsWithReason:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)_appendChatItemsForItem:(id)arg1;
- (void)_configureLocationShareItem:(id)arg1;
@property(readonly, nonatomic) unsigned int messageFailureCount;
- (void)_postNotification:(id)arg1 userInfo:(id)arg2;
- (id)_initWithGUID:(id)arg1 account:(id)arg2 style:(unsigned char)arg3 roomName:(id)arg4 displayName:(id)arg5 items:(id)arg6 participants:(id)arg7;
- (void)_initialize;
- (void)_buildInitialChatItems:(id)arg1;
- (void)_updateChatItems;
- (void)_watchHandleStatusChangedForHandle:(id)arg1;
@property(readonly, nonatomic) BOOL canHaveMultipleParticipants;
- (void)_accountControllerUpdated:(id)arg1;
- (void)_daemonAlive:(id)arg1;
- (void)_daemonDied:(id)arg1;
- (void)_accountLoggedOut:(id)arg1;
- (id)messageForGUID:(id)arg1;
- (void)updateMessage:(id)arg1;
- (void)_updateDisplayName:(id)arg1;
- (void)_delayedInvalidateDowngradeState;
- (void)_handleIncomingCommand:(id)arg1;
- (void)_handleDeliveredCommand:(id)arg1;
- (void)_clearDowngradeMarkers;
- (void)_updateDowngradeState:(BOOL)arg1 checkAgainInterval:(double)arg2;
- (id)_consecutiveDowngradeAttemptsViaManualDowngrades:(BOOL)arg1;
- (void)_calculateDowngradeStateTimerFired;
- (void)_calculateDowngradeState;
- (void)_setAccount:(id)arg1;
- (void)_setPreviousAccount:(id)arg1 forService:(id)arg2;
- (id)_previousAccountForService:(id)arg1;
- (BOOL)sendDowngradeNotificationTo:(id)arg1;
- (void)_setAndIncrementDowngradeMarkersForManual:(BOOL)arg1;
@property(readonly, retain, nonatomic) NSString *lastAddressedHandleID; // @synthesize lastAddressedHandleID=_lastAddressedHandleID;
- (void)_invalidateDowngradeState;
- (void)_targetToService:(id)arg1 newComposition:(BOOL)arg2;
@property(readonly, nonatomic) BOOL suppressAccountRetargetingForGroupConversation;
@property(readonly, nonatomic) NSString *guid; // @synthesize guid=_guid;
- (void)sendMessage:(id)arg1;
@property(readonly, nonatomic) NSArray *participants; // @synthesize participants=_participants;
@property(readonly, nonatomic) IMAccount *account; // @synthesize account=_account;
@property(nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void)setValue:(id)arg1 forChatProperty:(id)arg2;
- (void)sendDowngradePingForMessage:(id)arg1 manualDowngrade:(BOOL)arg2;
- (void)markAsSpam;
- (void)markChatItemAsSaved:(id)arg1;
- (void)markAllLocationShareItemsAsUnactionable;
- (void)markChatItemAsPlayed:(id)arg1;
- (void)deleteChatItems:(id)arg1;
- (void)updateChatItemsIfNeeded;
- (void)endHoldingUpdatesForAllKeys;
- (BOOL)_chatHasValidAccount:(id)arg1 forService:(id)arg2;
@property(nonatomic) BOOL localUserIsRecording;
@property(nonatomic) BOOL localUserIsTyping;
@property(readonly, nonatomic) NSString *localTypingMessageGUID;
- (BOOL)_accountIsOperational:(id)arg1 forService:(id)arg2;
- (id)loadFrequentRepliesLimit:(unsigned int)arg1 loadImmediately:(BOOL)arg2;
- (id)loadMessagesBeforeDate:(id)arg1 limit:(unsigned int)arg2 loadImmediately:(BOOL)arg3;
- (BOOL)deleteAllHistory;
- (void)removeParticipants:(id)arg1 reason:(id)arg2;
- (void)inviteParticipants:(id)arg1 reason:(id)arg2;
@property(readonly, nonatomic) int joinState; // @synthesize joinState=_joinState;
@property(readonly, nonatomic) BOOL canLeaveChat;
- (BOOL)isDowngraded;
- (id)valueForChatProperty:(id)arg1;
@property(readonly, nonatomic) NSString *chatIdentifier;
@property(readonly, nonatomic) unsigned char chatStyle; // @synthesize chatStyle=_style;
@property(readonly, nonatomic) IMMessage *lastMessage;
@property(readonly, nonatomic) unsigned int unreadMessageCount;
@property(nonatomic) void *contextInfo; // @synthesize contextInfo=_context;
- (void)beginHoldingUpdatesForKey:(id)arg1;
- (void)endHoldingUpdatesForKey:(id)arg1;
- (void)refreshServiceForSending;
@property(readonly, nonatomic) IMMessage *lastIncomingMessage;
- (void)markAllMessagesAsRead;
@property(nonatomic) id <IMChatSendProgressDelegate> sendProgressDelegate;
@property(readonly, nonatomic) BOOL hasRecipientsFollowingLocation;
- (void)leave;
- (void)shareLocationUntilDate:(id)arg1;
- (void)stopSharingLocation;
- (void)sendCurrentLocationMessage;
- (BOOL)canSendCurrentLocationMessage;
- (BOOL)authorizedToSendCurrentLocationMessage;
@property(readonly, nonatomic) BOOL allRecipientsFollowingLocation;
@property(readonly, nonatomic) IMMessage *lastFinishedMessage;
@property(nonatomic) BOOL forceMMS;
- (void)deleteTransfers:(id)arg1;
- (void)loadAttachments:(CDUnknownBlockType)arg1;
- (id)chatItems;
@property(readonly, retain, nonatomic) NSSet *allSiblingFMFHandles;
@property(readonly, nonatomic) BOOL hasSiblingRecipientsSharingLocation;
- (void)stopTrackingParticipantLocations;
- (void)startTrackingParticipantLocations;
@property(readonly, copy, nonatomic) NSArray *attachments;
- (void)remove;
- (void)clear;
- (id)description;
- (id)init;
- (void)dealloc;
@property(readonly, nonatomic) unsigned int messageCount;
@property(retain, nonatomic) IMHandle *recipient;

@end


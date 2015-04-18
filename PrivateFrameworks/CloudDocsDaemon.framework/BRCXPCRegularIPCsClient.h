//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudDocsDaemon/BRCXPCClient.h>

#import "BRProtocol.h"

@class NSString;

@interface BRCXPCRegularIPCsClient : BRCXPCClient <BRProtocol>
{
}

- (void)handleShareURL:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)removeItemFromDisk:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)startOperation:(id)arg1 toCopyShareURLForShare:(id)arg2 appName:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)copyBulkShareIDsAtURLs:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)startOperation:(id)arg1 toDestroySharingInfo:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)startOperation:(id)arg1 toSaveSharingInfo:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)createSharingInfoForURL:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)copyCurrentUserIdentifierWithReply:(CDUnknownBlockType)arg1;
- (void)startOperation:(id)arg1 toCopySharingAccessToken:(id)arg2 wantsPermissions:(BOOL)arg3 reply:(CDUnknownBlockType)arg4;
- (void)startOperation:(id)arg1 toCopySharingWebAuthTokenForContainerID:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)startOperation:(id)arg1 toCopySharingInfoAtURL:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)getiWorkPublishingBadgingStatusAtURL:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getiWorkPublishingInfoAtURL:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setiWorkPublishingInfoAtURL:(id)arg1 publish:(BOOL)arg2 readonly:(BOOL)arg3 reply:(CDUnknownBlockType)arg4;
- (void)getIsContainerWithIDOverQuota:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getContainerLastServerUpdateWithID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getContainerStatusWithID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getApplicationStatusWithPID:(int)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getApplicationStatus:(CDUnknownBlockType)arg1;
- (void)forceConflictForURL:(id)arg1 bookmarkData:(id)arg2 forcedEtag:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)getPublishedURLForItemAtURL:(id)arg1 forStreaming:(BOOL)arg2 requestedTTL:(unsigned int)arg3 reply:(CDUnknownBlockType)arg4;
- (void)getBackReferencingURLForURL:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getBackReferencingContainerIDsForURL:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)resolveBookmarkDataToURL:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getBookmarkDataForURL:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)jetsamCloudDocsAppsWithReply:(CDUnknownBlockType)arg1;
- (void)getMigrationStatusForPrimaryiCloudAccount:(CDUnknownBlockType)arg1;
- (void)setMigrationStatus:(BOOL)arg1 forDSID:(id)arg2 shouldNotify:(BOOL)arg3 reply:(CDUnknownBlockType)arg4;
- (void)getContainersNeedingUpload:(CDUnknownBlockType)arg1;
- (void)currentAccountLogoutWithReply:(CDUnknownBlockType)arg1;
- (void)currentAccountCreateWithID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)resolveConflictWithName:(id)arg1 atURL:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (oneway void)bundleDidAccessExternalDocument:(id)arg1;
- (void)addExternalDocumentReferenceTo:(id)arg1 forPid:(int)arg2 inContainer:(id)arg3 underParent:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)copyLoggedInUserFirstAndLastNameWithReply:(CDUnknownBlockType)arg1;
- (void)didReceiveHandoffRequestForBundleID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getApplicationDocumentUsageInfoForBundleID:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)getTotalApplicationDocumentUsageWithReply:(CDUnknownBlockType)arg1;
- (void)getNonLocalVersionSenderWithReceiver:(id)arg1 documentURL:(id)arg2 includeCachedVersions:(BOOL)arg3 reply:(CDUnknownBlockType)arg4;
- (void)getItemUpdateSenderWithReceiver:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getAttributeValues:(id)arg1 forItemAtURL:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)getNotificationInfoAtURL:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)thumbnailChangedForItemAtURL:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)evictItemAtURL:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)startDownloadItemsAtURLs:(id)arg1 options:(unsigned int)arg2 reply:(CDUnknownBlockType)arg3;
- (void)registerInitialSyncBarrierForID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)deleteAllContentsOfContainerID:(id)arg1 onClient:(BOOL)arg2 onServer:(BOOL)arg3 reply:(CDUnknownBlockType)arg4;
- (oneway void)updateContainerMetadataForID:(id)arg1 bundleID:(id)arg2;
- (void)getContainerURLForID:(id)arg1 forPid:(int)arg2 reply:(CDUnknownBlockType)arg3;
- (void)getContainerURLForID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)presyncContainerWithID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)checkinAskClientIfUsingUbiquity:(BOOL)arg1;
- (void)getContainerForURLFast:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getContainerForURL:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getContainersByID:(CDUnknownBlockType)arg1;
- (void)createContainerWithID:(id)arg1 ownerName:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)waitForFileSystemChangeProcessingWithReply:(CDUnknownBlockType)arg1;
- (void)reclaimAmount:(long long)arg1 withUrgency:(int)arg2 reply:(CDUnknownBlockType)arg3;
- (void)purgeAmount:(long long)arg1 withUrgency:(int)arg2 reply:(CDUnknownBlockType)arg3;
- (void)computePurgableSpaceWithUrgency:(int)arg1 reply:(CDUnknownBlockType)arg2;
- (void)forceSyncContainerID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)log:(const char *)arg1 function:(const char *)arg2 source:(const char *)arg3 line:(int)arg4 message:(id)arg5;
- (void)gatherInformationForPath:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)printStatus:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)performSelfCheck:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)dumpDatabaseTo:(id)arg1 containerID:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)resetBudgets:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setupInstanceWithDict:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)presentAcceptDialogsForShareURL:(id)arg1 reply:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

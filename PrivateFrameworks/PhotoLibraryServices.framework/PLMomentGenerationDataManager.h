//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PLMomentGenerationDataManagement_Private.h"

@class NSDictionary, NSManagedObjectContext, NSString, PLMomentAnalyzer, PLMomentGeneration, PLPhotoLibrary, PLXPCTransaction;

@interface PLMomentGenerationDataManager : NSObject <PLMomentGenerationDataManagement_Private>
{
    PLXPCTransaction *_keepAliveTransaction;
    CDUnknownBlockType _reachabilityBlock;
    void *_addressBook;
    PLMomentGeneration *_generator;
    PLMomentAnalyzer *_analyzer;
    NSDictionary *_generationOptions;
    BOOL _observingReachability;
    BOOL _isLightweightMigrationManager;
    NSManagedObjectContext *_managedObjectContext;
    PLPhotoLibrary *_momentGenerationLibrary;
}

+ (BOOL)isManagerMomentarilyBlessed:(id)arg1;
+ (BOOL)isManagedObjectContextMomentarilyBlessed:(id)arg1;
+ (void)setManagerMomentarilyBlessed:(id)arg1;
+ (id)sharedMomentGenerationDataManager;
- (void)verifyAndRepairOrphanedAssets:(id)arg1;
- (id)replayLogPath;
- (BOOL)wantsMomentReplayLogging;
- (unsigned int)hardGenerationBatchSizeLimit;
- (void)pendingChangesUpdated:(unsigned int)arg1;
- (id)homeAddressDictionary;
- (void)beginObservingNetworkReachabilityChangesWithBlock:(CDUnknownBlockType)arg1;
- (id)allAssetIDsToBeIncludedInMomentsWithError:(id *)arg1;
- (id)allAssetsToBeIncludedInMomentsWithError:(id *)arg1;
- (id)allMomentListsWithInvalidReverseLocationDataForLevel:(short)arg1;
- (id)allMomentListsForLevel:(short)arg1;
- (id)allMomentsWithInvalidReverseLocationData;
- (void)resetOnFailure;
- (id)insertNewMoment;
- (id)insertNewMomentListForGranularityLevel:(short)arg1;
- (Class)momentAssetDataClass;
- (Class)momentDataClass;
- (Class)momentListDataClassForGranularityLevel:(short)arg1;
- (id)findOrCreateYearMomentListForYear:(int)arg1;
- (id)yearMomentListForYear:(int)arg1 wantsEarliest:(BOOL)arg2;
- (id)momentListContainingDate:(id)arg1 forLevel:(short)arg2 wantsEarliest:(BOOL)arg3;
- (id)momentsBetweenDate:(id)arg1 andDate:(id)arg2 sorted:(BOOL)arg3;
- (id)momentsSinceDate:(id)arg1;
- (id)momentListWithUniqueID:(id)arg1 forLevel:(short)arg2 error:(id *)arg3;
- (id)momentWithUniqueID:(id)arg1 error:(id *)arg2;
- (id)assetsWithUniqueIDs:(id)arg1 error:(id *)arg2;
- (id)assetWithUniqueID:(id)arg1 error:(id *)arg2;
- (BOOL)saveAnalysisMetadata:(id)arg1;
- (id)analysisMetadata;
- (BOOL)saveServerVersionInfo:(id)arg1;
- (id)serverVersionInfo;
- (BOOL)isMomentsSupportedOnPlatform;
- (id)generationOptions;
- (void)invalidateLocationDataForAssetsInMoment:(id)arg1;
- (void)insertMomentIntoAllMoments:(id)arg1 atIndex:(unsigned int)arg2;
- (void)removeMomentFromAllMoments:(id)arg1;
- (id)allMomentsInLibrary;
- (void)performBlock:(CDUnknownBlockType)arg1 synchronously:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_currentHomeAddressDictionary;
- (id)_addressDictionaryForABRecord:(void *)arg1 identifier:(int)arg2;
@property(readonly, nonatomic) void *_addressBook;
- (void)_networkReachabilityDidChange:(id)arg1;
- (void)_removeKeepAlive;
- (void)_updateKeepAlive;
- (id)_metadataPath;
- (id)_serverVersionInfoFilePath;
- (id)deletedObjects;
- (id)updatedObjects;
- (id)insertedObjects;
@property(retain, nonatomic) PLPhotoLibrary *momentGenerationLibrary; // @synthesize momentGenerationLibrary=_momentGenerationLibrary;
- (void)setupPhotoLibrary;
- (void)_finalizeInit;
- (void)reloadGenerationOptions;
- (void)stopObservingNetworkReachabilityChanges;
- (id)orphanedAssetIDsWithError:(id *)arg1;
- (id)initWithManagedObjectContextForLightweightMigration:(id)arg1;
- (void)performDataTransaction:(CDUnknownBlockType)arg1 synchronously:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)allMomentsWithError:(id *)arg1;
- (id)generator;
- (void)refreshObject:(id)arg1 mergeChanges:(BOOL)arg2;
- (BOOL)isMomentAnalysisNeeded;
- (void)setMomentAnalysisNeeded:(BOOL)arg1;
- (void)refreshAllObjects;
- (BOOL)hasChanges;
@property(retain, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
- (id)analyzer;
- (BOOL)isNetworkReachable;
- (BOOL)save:(id *)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

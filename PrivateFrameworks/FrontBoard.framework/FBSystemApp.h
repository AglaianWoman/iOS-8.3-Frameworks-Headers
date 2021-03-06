//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIApplication.h"

#import "BKSSystemApplicationDelegate.h"
#import "FBSSceneUpdater.h"
#import "FBSceneClient.h"
#import "FBSceneClientProvider.h"

@class FBSceneClientProviderInvalidationAction, NSMapTable, NSMutableDictionary, NSString;

@interface FBSystemApp : UIApplication <FBSceneClient, FBSSceneUpdater, BKSSystemApplicationDelegate, FBSceneClientProvider>
{
    FBSceneClientProviderInvalidationAction *_invalidationAction;
    NSMutableDictionary *_scenesByIdentifier;
    NSMapTable *_hostsByIdentifier;
    NSMutableDictionary *_initialClientSettingsByIdentifier;
}

+ (BOOL)systemApplicationIsAliveForWatchdog:(id)arg1;
+ (BOOL)systemApplicationShouldWaitForDataMigration:(id)arg1;
+ (void)preFrontBoardInitializationHook;
+ (BOOL)shouldCheckInWithBackboard;
+ (BOOL)shouldFixMainThreadPriority;
+ (BOOL)rendersLocally;
+ (BOOL)registerAsSystemApp;
- (unsigned int)lastExitReason;
- (void)sendActionsToBackboard:(id)arg1;
- (id)fbsSceneWithIdentifier:(id)arg1;
- (void)unregisterHost:(id)arg1;
- (id)registerHost:(id)arg1 withInitialClientSettings:(id)arg2;
- (void)registerInvalidationAction:(id)arg1;
- (void)scene:(id)arg1 didUpdateClientSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4;
- (void)scene:(id)arg1 didDetachContext:(id)arg2;
- (void)scene:(id)arg1 didReceiveUpdateToContext:(id)arg2;
- (void)scene:(id)arg1 didAttachContext:(id)arg2;
- (BOOL)willObserveContextsManually;
- (void)unregisterDelegateForSceneID:(id)arg1;
- (void)registerDelegate:(id)arg1 forSceneID:(id)arg2;
- (void)host:(id)arg1 didReceiveActions:(id)arg2;
- (void)host:(id)arg1 didInvalidateWithTransitionContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)host:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_updateSceneSettingsForScene:(id)arg1 context:(id)arg2;
- (void)endTransaction;
- (void)beginTransaction;
- (BOOL)canOpenURL:(id)arg1;
- (void)resetIdleTimerAndUndim;
- (BOOL)handleDoubleHeightStatusBarTap:(int)arg1;
- (id)_newSceneForWindow:(id)arg1 oldDisplay:(id)arg2 newDisplay:(id)arg3;
- (void)scene:(id)arg1 didReceiveActions:(id)arg2;
- (BOOL)isSuspendedEventsOnly;
- (BOOL)openURL:(id)arg1;
- (BOOL)isSuspendedUnderLock;
- (BOOL)_saveSnapshotWithName:(id)arg1;
- (BOOL)isFrontBoard;
- (id)init;
- (BOOL)isSuspended;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


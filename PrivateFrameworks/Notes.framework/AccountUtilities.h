//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ACAccountStore, NSArray, NSLock, NSObject<OS_dispatch_group>, NoteContext;

@interface AccountUtilities : NSObject
{
    NSArray *_accountIDsEnabledForNotes;
    NoteContext *_noteContext;
    ACAccountStore *_accountStore;
    NSObject<OS_dispatch_group> *_backgroundDispatchGroup;
    NSLock *_updateAccountInfosLock;
}

+ (id)sharedAccountUtilities;
- (void)_accountStoreDidChange:(id)arg1;
@property(retain) NSLock *updateAccountInfosLock; // @synthesize updateAccountInfosLock=_updateAccountInfosLock;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *backgroundDispatchGroup; // @synthesize backgroundDispatchGroup=_backgroundDispatchGroup;
- (id)accountIDsEnabledForNotes;
- (id)accountsEnabledForNotes;
- (void)startKeepingAccountInfosUpToDate;
- (BOOL)localNotesExist;
- (void)updateAccountInfos;
- (id)freshContext;
- (id)defaultStoreSyncIdWithDesiredSyncId:(id)arg1;
- (id)localAccountDisplayName;
@property(retain, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

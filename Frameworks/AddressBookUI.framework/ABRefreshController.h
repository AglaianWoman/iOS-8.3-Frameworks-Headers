//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ACAccountStore, NSMutableDictionary, NSTimer;

@interface ABRefreshController : NSObject
{
    ACAccountStore *_accountStore;
    double _refreshDelay;
    NSMutableDictionary *_accountGroupListsToRefreshByObserver;
    NSMutableDictionary *_contactsFiltersToRefreshByObserver;
    NSTimer *_refreshTimer;
}

+ (id)sharedInstance;
- (id)accountStore;
- (id)init;
- (void)dealloc;
- (void)_resumeAllRefreshes;
- (void)_postponeAllRefreshes;
- (void)_refreshACAccountWithIdentifier:(id)arg1 isUserRequested:(BOOL)arg2;
- (BOOL)_acAccountExistsForIdentifier:(id)arg1;
- (void)startRefreshingOrphanedAccountsWithAddressBook:(void *)arg1 afterDelay:(BOOL)arg2;
- (void)_actuallyRefreshOrphanedAccountsWithAddressBook:(void *)arg1;
- (void)_refreshGroupListForACAccountWithIdentifier:(id)arg1 isUserRequested:(BOOL)arg2;
- (BOOL)canRefreshAccountIdentifier:(id)arg1;
- (void)_addObjectToRefresh:(id)arg1 withObserver:(void *)arg2 toDictionary:(id *)arg3;
- (BOOL)canRefreshContactsFilter:(id)arg1;
- (id)refreshableAccountIdentifiersForContactsFilter:(id)arg1;
- (void)refreshAccountGroupList:(id)arg1;
- (void)refreshContactsFilter:(id)arg1;
- (void)_scheduleRefreshTimerIfNeeded;
- (void)_proceedWithRefresh:(id)arg1;
- (void)_invalidateTimer;
- (void)_setRefreshDelay:(double)arg1;
- (void)startRefreshingOrphanedAccountsWithAddressBook:(void *)arg1;
- (void)scheduleRefreshForContactsFilter:(id)arg1 withObserver:(void *)arg2;
- (BOOL)canRefreshSources:(id)arg1;
- (void)refreshEverythingNow;
- (void)cancelAllScheduledRefreshesWithObserver:(void *)arg1;
- (void)scheduleRefreshForAccountGroupList:(id)arg1 withObserver:(void *)arg2;

@end

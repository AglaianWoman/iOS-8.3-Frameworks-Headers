//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FrontBoard/FBTransaction.h>

#import "FBSynchronizedTransaction.h"
#import "FBSynchronizedTransactionDelegate.h"

@class NSMutableSet, NSString;

@interface FBSynchronizedTransactionGroup : FBTransaction <FBSynchronizedTransaction, FBSynchronizedTransactionDelegate>
{
    BOOL _didCommit;
    BOOL _readyForCommit;
    NSMutableSet *_synchronizedTransactions;
    NSMutableSet *_synchronizedTransactionsAwaitingCommitReadiness;
    NSMutableSet *_synchronizedTransactionsReadyToCommit;
    id <FBSynchronizedTransactionDelegate> _synchronizationDelegate;
}

@property(nonatomic) id <FBSynchronizedTransactionDelegate> synchronizationDelegate; // @synthesize synchronizationDelegate=_synchronizationDelegate;
- (void)synchronizedTransaction:(id)arg1 didCommitSynchronizedTransactions:(id)arg2;
- (void)synchronizedTransaction:(id)arg1 willCommitSynchronizedTransactions:(id)arg2;
- (BOOL)isReadyForSynchronizedCommit;
- (void)performSynchronizedCommit;
- (void)synchronizedTransactionReadyToCommit:(id)arg1;
- (void)addSynchronizedTransaction:(id)arg1;
- (void)_performSynchronizedCommit:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


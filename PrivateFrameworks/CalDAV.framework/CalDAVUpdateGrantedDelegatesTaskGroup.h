//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CoreDAVTaskGroup.h"

#import "CoreDAVPropPatchTaskDelegate.h"
#import "CoreDAVTaskGroupDelegate.h"

@class NSSet, NSString;

@interface CalDAVUpdateGrantedDelegatesTaskGroup : CoreDAVTaskGroup <CoreDAVPropPatchTaskDelegate, CoreDAVTaskGroupDelegate>
{
    int _state;
    NSSet *_addWriteURLs;
    NSSet *_addReadURLs;
    NSSet *_removeURLs;
    NSSet *_updatedWriteURLs;
    NSSet *_updatedReadURLs;
}

- (void)_finishWithError:(id)arg1 state:(int)arg2;
- (void)propPatchTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (void)taskGroup:(id)arg1 didFinishWithError:(id)arg2;
- (void)startTaskGroup;
- (id)initWithAccountInfoProvider:(id)arg1 addWriteURLs:(id)arg2 addReadURLs:(id)arg3 removeURLs:(id)arg4 taskManager:(id)arg5;
- (void)_updateDelegatesWithAllowWrite:(BOOL)arg1;
- (void)_populateUpdatesFromFetched:(id)arg1 allowWrite:(BOOL)arg2;
- (void)_fetchExistingGrantedDelegates;
@property(retain, nonatomic) NSSet *updatedReadURLs; // @synthesize updatedReadURLs=_updatedReadURLs;
@property(retain, nonatomic) NSSet *updatedWriteURLs; // @synthesize updatedWriteURLs=_updatedWriteURLs;
@property(retain, nonatomic) NSSet *removeURLs; // @synthesize removeURLs=_removeURLs;
@property(retain, nonatomic) NSSet *addReadURLs; // @synthesize addReadURLs=_addReadURLs;
@property(retain, nonatomic) NSSet *addWriteURLs; // @synthesize addWriteURLs=_addWriteURLs;
@property(nonatomic) int state; // @synthesize state=_state;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

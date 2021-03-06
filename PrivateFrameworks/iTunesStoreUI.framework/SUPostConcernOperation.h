//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ISOperation.h"

#import "ISStoreURLOperationDelegate.h"

@class NSString, SUConcernItem;

@interface SUPostConcernOperation : ISOperation <ISStoreURLOperationDelegate>
{
    NSString *_commentText;
    SUConcernItem *_concern;
    unsigned long long _itemIdentifier;
}

@property(retain) SUConcernItem *concern; // @synthesize concern=_concern;
- (id)initWithConcern:(id)arg1;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
@property unsigned long long itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
- (id)_httpBody;
@property(retain) NSString *commentText; // @synthesize commentText=_commentText;
- (void)run;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


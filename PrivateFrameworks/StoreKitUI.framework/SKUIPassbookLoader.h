//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PKAddPassesViewControllerDelegate.h"

@class NSOperationQueue, NSString, SKUIClientContext;

@interface SKUIPassbookLoader : NSObject <PKAddPassesViewControllerDelegate>
{
    SKUIClientContext *_clientContext;
    id <SKUIPassbookLoaderDelegate> _delegate;
    int _loadCount;
    NSOperationQueue *_operationQueue;
}

- (void)addPassesViewControllerDidFinish:(id)arg1;
- (void)_didLoadWithPass:(id)arg1 error:(id)arg2;
- (void)_sendDidFinishIfFinished;
- (void)_loadPassWithURL:(id)arg1;
- (void)loadPassWithURL:(id)arg1;
- (id)initWithClientContext:(id)arg1;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void).cxx_destruct;
@property(nonatomic) __weak id <SKUIPassbookLoaderDelegate> delegate; // @synthesize delegate=_delegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

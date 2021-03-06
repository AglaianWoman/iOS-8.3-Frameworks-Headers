//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreHAP/HAPAccessoryServerBrowser.h>

@class NSMutableSet, NSObject<OS_dispatch_queue>;

@interface HAPAccessoryServerBrowserIP : HAPAccessoryServerBrowser
{
    struct BonjourBrowser *_bonjourBrowser;
    NSMutableSet *_discoveredAccessoryServers;
    id <HAPAccessoryServerBrowserDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

- (void)setDelegate:(id)arg1 queue:(id)arg2;
@property(retain, nonatomic) NSMutableSet *discoveredAccessoryServers; // @synthesize discoveredAccessoryServers=_discoveredAccessoryServers;
- (long)_server:(id *)arg1 forBonjourDevice:(id)arg2;
- (void)_invalidateUnpairedAccessoryServers;
- (void)_handleBonjourRemoveWithEventInfo:(id)arg1;
- (void)_handleBonjourAddOrUpdateWithEventInfo:(id)arg1;
- (long)_initializeAndStartBonjourBrowser;
- (void)_handleBonjourBrowserEvent:(unsigned int)arg1 eventInfo:(id)arg2;
- (void)discoverAccessoryServerWithIdentifier:(id)arg1;
- (void)stopDiscoveringAccessoryServers;
- (void)startDiscoveringAccessoryServers;
- (BOOL)_delegateRespondsToSelector:(SEL)arg1;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
- (void).cxx_destruct;
- (id)initWithQueue:(id)arg1;
@property(nonatomic) __weak id <HAPAccessoryServerBrowserDelegate> delegate; // @synthesize delegate=_delegate;

@end


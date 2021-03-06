//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CBCentralManagerDelegate.h"

@class CBCentralManager, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface BTLEBrowser : NSObject <CBCentralManagerDelegate>
{
    NSMutableDictionary *_accessories;
    CBCentralManager *_centralManager;
    struct BTLEBrowserPrivate *_cfBrowser;
    NSObject<OS_dispatch_source> *_lostTimer;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _started;
    struct LogCategory *_ucat;
    CDUnknownFunctionPointerType _eventHandler_f;
    void *_eventHandler_ctx;
}

- (void)_lostTimer;
- (void)_postEventType:(unsigned int)arg1 accessory:(id)arg2;
- (id)initWithCFBrowser:(struct BTLEBrowserPrivate *)arg1;
- (void)_stop:(long)arg1;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)_start;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


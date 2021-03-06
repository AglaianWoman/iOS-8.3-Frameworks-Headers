//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, NSObject<OS_dispatch_queue>, PKDaemonClient;

@interface PKHost : NSObject
{
    NSDictionary *_hostInfoPlist;
    NSMutableDictionary *_activePlugIns;
    NSObject<OS_dispatch_queue> *_hostQueue;
    PKDaemonClient *_client;
}

+ (id)defaultHost;
- (void)cancelPlugInDiscovery:(id)arg1;
- (id)continuouslyDiscoverPlugInsForAttributes:(id)arg1 flags:(unsigned int)arg2 found:(CDUnknownBlockType)arg3;
- (void)discoverPlugInsForAttributes:(id)arg1 flags:(unsigned int)arg2 found:(CDUnknownBlockType)arg3;
@property(retain) PKDaemonClient *client; // @synthesize client=_client;
@property(readonly) NSDictionary *hostInfoPlist; // @synthesize hostInfoPlist=_hostInfoPlist;
- (id)activePlugInForIdentifier:(id)arg1;
@property(retain) NSObject<OS_dispatch_queue> *hostQueue; // @synthesize hostQueue=_hostQueue;
@property(retain) NSMutableDictionary *activePlugIns; // @synthesize activePlugIns=_activePlugIns;
- (id)rewriteDiscoveryAttributes:(id)arg1 flags:(unsigned int)arg2;
- (void)deactivatePlugIn:(id)arg1;
- (void)readyPlugIns:(id)arg1 ready:(CDUnknownBlockType)arg2;
- (void)accessPlugIns:(id)arg1 flags:(unsigned long long)arg2 extensions:(CDUnknownBlockType)arg3;
- (void)activatePlugIn:(id)arg1;
- (void)setExtensionState:(id)arg1 forPlugIn:(id)arg2;
- (void)setElection:(int)arg1 forPlugIn:(id)arg2;
- (void).cxx_destruct;
- (id)init;

@end


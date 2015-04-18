//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ICPTPIPBonjourService : NSObject
{
    id _bonjourServiceProperties;
}

- (void)disconnectClient:(id)arg1;
- (void)unlockDeviceForClient:(id)arg1;
- (void)handleNetServiceError:(CDStruct_1ef3fb1f *)arg1;
- (void)clientTerminated:(id)arg1;
- (int)numClients;
- (int)destroyPTPDIPInstance:(id)arg1;
- (void)dispatchConnectionFromSocket:(int)arg1 withAddress:(struct __CFData *)arg2;
- (BOOL)startService;
- (id)initWithHostPort:(unsigned long)arg1 hostName:(id)arg2 hostGUID:(id)arg3 bonjourServiceType:(id)arg4 bonjourTXTRecords:(id)arg5;
- (id)clientForPID:(unsigned long)arg1;
- (int)createPTPDIPInstanceWithAddress:(struct __CFData *)arg1 fileDescriptor:(int)arg2;
- (int)messagePTPDIPInstance:(id)arg1 withSocket:(int)arg2;
- (id)clientForAddress:(struct __CFData *)arg1;
- (BOOL)createAndPublishNetService;
- (BOOL)createSocket;
- (void)releaseSocket;
- (void)releaseNetService;
- (struct __CFNetService *)publishedService;
- (void)removeClient:(id)arg1;
- (void)addClient:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)dealloc;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNetService;

@interface _HSUnresolvedLibrary : NSObject
{
    int _browserType;
    CDUnknownBlockType _completionHandler;
    NSNetService *_netService;
    struct _DNSServiceRef_t *_resolvingDNSService;
}

- (void)_netServiceDidNotResolve;
- (void)_netServiceDidResolveAddressWithTXTRecordData:(id)arg1 host:(struct hostent *)arg2 port:(unsigned short)arg3;
- (void)_callAndInvalidateCompletionHandlerWithLibrary:(id)arg1;
- (void)_timeoutResolve;
- (void)resolveWithTimeout:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithNSNetService:(id)arg1 browserType:(int)arg2;
- (void).cxx_destruct;
- (void)dealloc;

@end

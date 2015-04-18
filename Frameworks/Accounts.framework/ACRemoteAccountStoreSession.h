//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXPCProxyCreating.h"

@class NSString, NSXPCConnection;

@interface ACRemoteAccountStoreSession : NSObject <NSXPCProxyCreating>
{
    NSXPCConnection *_connection;
    BOOL _hasConfiguredRemoteAccountStore;
    BOOL _notificationsEnabled;
    NSString *_spoofedBundleID;
}

- (id)initWithXPCConnection:(id)arg1;
@property(nonatomic) BOOL notificationsEnabled; // @synthesize notificationsEnabled=_notificationsEnabled;
- (void)disconnect;
- (void).cxx_destruct;
- (void)connect;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) NSString *spoofedBundleID; // @synthesize spoofedBundleID=_spoofedBundleID;
- (void)_configureRemoteAccountStoreIfNecessary;

@end

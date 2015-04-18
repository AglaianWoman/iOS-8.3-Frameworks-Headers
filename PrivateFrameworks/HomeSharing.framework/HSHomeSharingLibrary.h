//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HSConnection, NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface HSHomeSharingLibrary : NSObject
{
    NSObject<OS_dispatch_queue> *_connectionAccessQueue;
    BOOL _requiresPassword;
    BOOL _available;
    BOOL __hasPendingUpdateRequest;
    NSString *_name;
    NSString *_uniqueIdentifier;
    unsigned int _version;
    NSString *_homeSharingGroupID;
    NSURL *_baseURL;
    id <NSObject> _context;
    int _connectionType;
    HSConnection *_connection;
}

@property(readonly, nonatomic, getter=isAvailable) BOOL available; // @synthesize available=_available;
@property(nonatomic) BOOL _hasPendingUpdateRequest; // @synthesize _hasPendingUpdateRequest=__hasPendingUpdateRequest;
- (void)_onQueue_ensureConnection;
- (void)_sendUpdateRequest;
@property(readonly, nonatomic) unsigned int basePlaylistContainerID;
- (id)initWithName:(id)arg1 uniqueIdentifier:(id)arg2 version:(unsigned int)arg3 baseURL:(id)arg4 homeSharingGroupID:(id)arg5 connectionType:(int)arg6;
@property(readonly, nonatomic) int connectionType; // @synthesize connectionType=_connectionType;
@property(retain, nonatomic) HSConnection *connection; // @synthesize connection=_connection;
- (void)disconnect;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned int version; // @synthesize version=_version;
@property(readonly, retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(readonly, copy, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(retain, nonatomic) id <NSObject> context; // @synthesize context=_context;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) BOOL requiresPassword; // @synthesize requiresPassword=_requiresPassword;
- (id)signedRequestFromURLRequest:(id)arg1;
- (id)securityInfoForURL:(id)arg1;
@property(readonly, nonatomic) NSString *deviceGUID;
- (void)sendRequest:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;
- (id)urlForRequest:(id)arg1;
@property(readonly, nonatomic) unsigned int databaseID;
@property(readonly, nonatomic) int connectionState;
@property(readonly, copy, nonatomic) NSString *homeSharingGroupID; // @synthesize homeSharingGroupID=_homeSharingGroupID;
- (void)connectWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

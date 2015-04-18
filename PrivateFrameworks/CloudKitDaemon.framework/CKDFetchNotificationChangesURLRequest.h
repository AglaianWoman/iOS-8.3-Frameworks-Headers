//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray, NSData, NSMutableArray;

@interface CKDFetchNotificationChangesURLRequest : CKDURLRequest
{
    NSMutableArray *_resultChangedNotifications;
    BOOL _moreComing;
    unsigned int _resultsLimit;
    NSData *_resultServerChangeTokenData;
    NSData *_serverChangeTokenData;
}

- (int)operationType;
@property(retain, nonatomic) NSData *resultServerChangeTokenData; // @synthesize resultServerChangeTokenData=_resultServerChangeTokenData;
@property(retain, nonatomic) NSData *serverChangeTokenData; // @synthesize serverChangeTokenData=_serverChangeTokenData;
@property(nonatomic) BOOL moreComing; // @synthesize moreComing=_moreComing;
- (id)initWithServerChangeTokenData:(id)arg1;
@property(readonly, nonatomic) NSArray *resultChangedNotifications; // @synthesize resultChangedNotifications=_resultChangedNotifications;
- (id)requestOperationClasses;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperations;
@property(nonatomic) unsigned int resultsLimit; // @synthesize resultsLimit=_resultsLimit;
- (void).cxx_destruct;

@end

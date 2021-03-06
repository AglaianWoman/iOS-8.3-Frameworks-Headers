//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKDClientContext, CKDDatabaseOperation, NSDate, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSOperationQueue, NSString;

@interface CKDQueuedFetch : NSObject
{
    BOOL _isFinished;
    BOOL _allowsCellularAccess;
    CDUnknownBlockType _completionHandler;
    CKDDatabaseOperation *_fetchOp;
    NSMutableDictionary *_completionHandlersByItemID;
    NSString *_sourceApplicationBundleIdentifier;
    NSString *_sourceApplicationSecondaryIdentifier;
    NSString *_deviceIdentifier;
    NSDate *_startDate;
    NSDate *_lastRequestDate;
    CKDClientContext *_context;
    NSOperationQueue *_operationQueue;
    int _scope;
    int _usesBackgroundSession;
    int _qos;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(nonatomic) int qos; // @synthesize qos=_qos;
@property(retain, nonatomic) NSMutableDictionary *completionHandlersByItemID; // @synthesize completionHandlersByItemID=_completionHandlersByItemID;
@property(readonly, nonatomic) BOOL shouldStart;
- (BOOL)canBeUsedForOperation:(id)arg1;
- (id)initWithOperation:(id)arg1 context:(id)arg2 operationQueue:(id)arg3;
@property(retain, nonatomic) CKDDatabaseOperation *fetchOp; // @synthesize fetchOp=_fetchOp;
- (int)numberOfCallbacks;
@property(retain, nonatomic) NSDate *lastRequestDate; // @synthesize lastRequestDate=_lastRequestDate;
- (void)removeCallbacksForItemWithID:(id)arg1;
- (id)callbacksForItemWithID:(id)arg1;
- (id)fetchOperation;
- (Class)operationInfoClass;
- (void)finishFetchOperationWithError:(id)arg1;
- (void)performCallbacksForItemWithID:(id)arg1 withItem:(id)arg2 error:(id)arg3;
- (id)allItemIDs;
- (id)operationInfo;
- (void)addCallbackForItemWithID:(id)arg1 callback:(CDUnknownBlockType)arg2;
@property(nonatomic) BOOL isFinished; // @synthesize isFinished=_isFinished;
@property(retain, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
- (id)CKPropertiesDescription;
@property(retain, nonatomic) NSString *sourceApplicationSecondaryIdentifier; // @synthesize sourceApplicationSecondaryIdentifier=_sourceApplicationSecondaryIdentifier;
@property(retain, nonatomic) NSString *sourceApplicationBundleIdentifier; // @synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier;
@property(nonatomic) __weak NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(nonatomic) BOOL allowsCellularAccess; // @synthesize allowsCellularAccess=_allowsCellularAccess;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(nonatomic) int usesBackgroundSession; // @synthesize usesBackgroundSession=_usesBackgroundSession;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void).cxx_destruct;
- (void)start;
@property(nonatomic) int scope; // @synthesize scope=_scope;
@property(nonatomic) __weak CKDClientContext *context; // @synthesize context=_context;
- (id)description;

@end


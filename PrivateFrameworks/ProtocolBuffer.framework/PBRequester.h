//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLConnectionDelegate.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableData, NSMutableDictionary, NSRunLoop, NSString, NSThread, NSURL, NSURLConnection, PBDataReader;

@interface PBRequester : NSObject <NSURLConnectionDelegate>
{
    NSURL *_URL;
    id <PBRequesterDelegate> _delegate;
    NSURLConnection *_connection;
    NSRunLoop *_connectionRunLoop;
    NSThread *_startThread;
    NSMutableData *_data;
    PBDataReader *_dataReader;
    unsigned int _lastGoodDataOffset;
    unsigned int _uploadPayloadSize;
    unsigned int _downloadPayloadSize;
    unsigned long long _timeRequestSent;
    unsigned long long _timeResponseReceived;
    int _responseStatusCode;
    NSMutableArray *_requests;
    NSMutableArray *_responses;
    NSMutableArray *_internalRequests;
    NSMutableArray *_internalResponses;
    NSDictionary *_httpResponseHeaders;
    NSMutableDictionary *_httpRequestHeaders;
    double _timeoutSeconds;
    struct __CFRunLoopTimer *_timeoutTimer;
    NSString *_logRequestToFile;
    NSString *_logResponseToFile;
    BOOL _didNotifyRequestCompleted;
    NSArray *_clientCertificates;
    NSDictionary *_connectionProperties;
    BOOL _shouldHandleCookies;
    struct {
        unsigned int ignoresResponse:1;
        unsigned int loading:1;
        unsigned int needsCancel:1;
        unsigned int responseStatusSet:1;
        unsigned int parsedResponseHeader:1;
        unsigned int delegateDidReceiveResponse:1;
        unsigned int delegateDidFinish:1;
        unsigned int delegateDidCancel:1;
        unsigned int delegateDidFailWithError:1;
        unsigned int paused:1;
        unsigned int resuming:1;
    } _flags;
}

+ (BOOL)usesEncodedMessages;
- (BOOL)isPaused;
@property(nonatomic) BOOL shouldHandleCookies; // @synthesize shouldHandleCookies=_shouldHandleCookies;
@property(retain, nonatomic) NSString *logResponseToFile; // @synthesize logResponseToFile=_logResponseToFile;
@property(retain, nonatomic) NSString *logRequestToFile; // @synthesize logRequestToFile=_logRequestToFile;
@property(retain, nonatomic) NSRunLoop *connectionRunLoop; // @synthesize connectionRunLoop=_connectionRunLoop;
- (void)_timeoutTimerFired;
@property(copy, nonatomic) NSDictionary *httpRequestHeaders;
- (id)responseForInternalRequest:(id)arg1;
- (void)addInternalRequest:(id)arg1;
- (id)internalRequests;
- (void)clearRequests;
@property(nonatomic) BOOL ignoresResponse;
- (id)_connectionRunLoop;
- (id)decodeResponseData:(id)arg1;
- (BOOL)_tryParseData;
- (BOOL)readResponsePreamble:(id)arg1;
- (void)_resetTimeoutTimer;
- (void)handleResponse:(id)arg1 forInternalRequest:(id)arg2;
- (id)tryReadResponseData:(id)arg1 forRequest:(id)arg2 forResponseClass:(Class)arg3;
- (void)cancelWithErrorCode:(int)arg1;
- (void)_cancelWithErrorDomain:(id)arg1 errorCode:(int)arg2 userInfo:(id)arg3;
- (void)_failWithErrorDomain:(id)arg1 errorCode:(int)arg2 userInfo:(id)arg3;
@property BOOL needsCancel;
- (void)_cancelNoNotify;
- (void)_serializePayload:(CDUnknownBlockType)arg1;
- (BOOL)_sendPayload:(id)arg1 error:(id *)arg2;
- (void)encodeRequestData:(id)arg1 startRequestCallback:(CDUnknownBlockType)arg2;
- (void)writeRequest:(id)arg1 into:(id)arg2;
- (id)newConnectionWithCFURLRequest:(struct _CFURLRequest *)arg1 delegate:(id)arg2 connectionProperties:(id)arg3;
- (void)_startTimeoutTimer;
@property(retain, nonatomic) NSDictionary *httpResponseHeaders; // @synthesize httpResponseHeaders=_httpResponseHeaders;
- (void)_removeTimeoutTimer;
@property(nonatomic) double timeoutSeconds; // @synthesize timeoutSeconds=_timeoutSeconds;
@property(retain, nonatomic) NSArray *clientCertificates; // @synthesize clientCertificates=_clientCertificates;
@property(readonly, nonatomic) unsigned int requestResponseTime;
@property(readonly, nonatomic) unsigned int downloadPayloadSize; // @synthesize downloadPayloadSize=_downloadPayloadSize;
@property(readonly, nonatomic) unsigned int uploadPayloadSize; // @synthesize uploadPayloadSize=_uploadPayloadSize;
- (void)_logErrorIfNecessary:(id)arg1;
- (void)_logResponsesIfNecessary:(id)arg1;
- (void)_logRequestsIfNecessary:(id)arg1;
- (id)newConnectionWithCFURLRequest:(struct _CFURLRequest *)arg1 delegate:(id)arg2;
- (struct _CFURLRequest *)newCFMutableURLRequestWithURL:(id)arg1;
- (id)requestPreamble;
- (id)_osVersion;
- (id)_applicationID;
- (id)_languageLocale;
- (void)startWithConnectionProperties:(id)arg1;
- (void)setNeedsCancel;
- (void)_failWithError:(id)arg1;
- (void)setHttpRequestHeader:(id)arg1 forKey:(id)arg2;
- (id)initWithURL:(id)arg1 andDelegate:(id)arg2;
- (void)addRequest:(id)arg1;
- (id)responseForRequest:(id)arg1;
@property(readonly, nonatomic) NSArray *requests;
- (void)pause;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void)resume;
- (void)start;
- (void)_cleanup;
- (void)_start;
@property(nonatomic) id <PBRequesterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (void)cancel;
- (id)connection:(id)arg1 willSendRequestForEstablishedConnection:(id)arg2 properties:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSInputStream.h"

@class ASTrafficLogger, NSData;

@interface DAConvertCRtoCRLFStream : NSInputStream
{
    NSData *_mimeData;
    NSData *_preflightData;
    NSData *_postflightData;
    unsigned int _totalLength;
    unsigned int _readOffset;
    BOOL _lastByteCopiedWasCR;
    BOOL _openEventSent;
    unsigned int _streamStatus;
    BOOL _intendToStream;
    id _delegate;
    struct __CFRunLoopSource *_rls;
    CDUnknownFunctionPointerType _clientCallback;
    CDStruct_304912e7 _clientContext;
    ASTrafficLogger *_trafficLogger;
}

- (id)initWithMIMEData:(id)arg1 preflightData:(id)arg2 postflightData:(id)arg3 intendToStream:(BOOL)arg4;
- (id)streamError;
- (void)open;
- (void).cxx_destruct;
- (void)close;
- (id)initWithData:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void)_streamEventTrigger;
- (void)_scheduleCallback;
- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop *)arg1 forMode:(struct __CFString *)arg2;
- (void)_scheduleInCFRunLoop:(struct __CFRunLoop *)arg1 forMode:(struct __CFString *)arg2;
- (BOOL)_setCFClientFlags:(unsigned long)arg1 callback:(CDUnknownFunctionPointerType)arg2 context:(CDStruct_304912e7 *)arg3;
- (BOOL)hasBytesAvailable;
- (BOOL)getBuffer:(char **)arg1 length:(unsigned int *)arg2;
- (int)read:(char *)arg1 maxLength:(unsigned int)arg2;
- (unsigned int)streamStatus;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;

@end

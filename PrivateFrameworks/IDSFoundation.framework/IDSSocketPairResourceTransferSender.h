//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDSFoundation/IDSSocketPairMessage.h>

@class NSDictionary, NSString;

@interface IDSSocketPairResourceTransferSender : IDSSocketPairMessage
{
    NSString *_resourcePath;
    NSDictionary *_metadata;
    NSDictionary *_resourceAttributes;
    BOOL _sentFirstMessage;
    unsigned long long _totalBytes;
    unsigned long long _nextByte;
    BOOL _done;
    int _fileDescriptor;
    unsigned int _maxChunkSize;
    unsigned int _sequenceNumber;
    unsigned short _streamID;
    BOOL _expectsPeerResponse;
    BOOL _wantsAppAck;
    BOOL _compressed;
    NSString *_peerResponseIdentifier;
    NSString *_messageUUID;
}

@property(nonatomic) unsigned int maxChunkSize; // @synthesize maxChunkSize=_maxChunkSize;
@property(readonly, nonatomic) BOOL sentFirstMessage; // @synthesize sentFirstMessage=_sentFirstMessage;
- (id)initWithResourceAtPath:(id)arg1 metadata:(id)arg2 sequenceNumber:(unsigned int)arg3 streamID:(unsigned short)arg4 expectsPeerResponse:(BOOL)arg5 wantsAppAck:(BOOL)arg6 compressed:(BOOL)arg7 peerResponseIdentifier:(id)arg8 messageUUID:(id)arg9;
- (id)readNextBytes;
@property(readonly, retain, nonatomic) NSString *messageUUID; // @synthesize messageUUID=_messageUUID;
@property(nonatomic) unsigned int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(readonly, nonatomic) BOOL isDone; // @synthesize isDone=_done;
- (id)nextMessage;
- (void)reset;
- (id)description;
- (void)dealloc;
- (unsigned char)command;

@end


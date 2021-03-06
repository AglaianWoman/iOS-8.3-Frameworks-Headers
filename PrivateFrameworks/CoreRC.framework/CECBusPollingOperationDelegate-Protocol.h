//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CECBusPollingOperation, CECMessage, NSError;

@protocol CECBusPollingOperationDelegate <NSObject>
- (void)pollingOperationCompleted:(CECBusPollingOperation *)arg1;
- (BOOL)pollingOperation:(CECBusPollingOperation *)arg1 shouldSkipAddress:(unsigned char)arg2;

@optional
- (void)pollingOperation:(CECBusPollingOperation *)arg1 encounteredError:(NSError *)arg2 forMessage:(CECMessage *)arg3;
- (void)pollingOperation:(CECBusPollingOperation *)arg1 deviceNotRespondingAtAddress:(unsigned char)arg2;
@end


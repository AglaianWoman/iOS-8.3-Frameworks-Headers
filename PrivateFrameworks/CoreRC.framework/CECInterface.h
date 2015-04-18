//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreRC/CoreRCInterface.h>

@class NSDictionary;

@interface CECInterface : CoreRCInterface
{
    BOOL _promiscMode;
    unsigned short _addressMask;
    id <CECInterfaceDelegate> _delegate;
    struct CECFrame _lastReceivedFrame;
}

- (BOOL)sendMessage:(id)arg1 error:(id *)arg2;
- (BOOL)sendMessage:(id)arg1 withRetryCount:(unsigned char)arg2 error:(id *)arg3;
@property(readonly, nonatomic) struct CECFrame lastReceivedFrame; // @synthesize lastReceivedFrame=_lastReceivedFrame;
- (BOOL)allocateCECAddress:(unsigned char *)arg1 forDeviceType:(unsigned char)arg2 error:(id *)arg3;
- (BOOL)sendFrame:(struct CECFrame)arg1 error:(id *)arg2;
- (BOOL)setPromiscMode:(BOOL)arg1 error:(id *)arg2;
- (BOOL)setAddressMask:(unsigned short)arg1 error:(id *)arg2;
- (BOOL)errorIsNack:(id)arg1;
- (void)receivedFrame:(struct CECFrame)arg1;
@property(readonly, nonatomic) BOOL promiscMode; // @synthesize promiscMode=_promiscMode;
@property(readonly, nonatomic) unsigned short addressMask; // @synthesize addressMask=_addressMask;
- (BOOL)pingTo:(unsigned char)arg1 acknowledged:(char *)arg2 error:(id *)arg3;
- (BOOL)sendFrame:(struct CECFrame)arg1 withRetryCount:(unsigned char)arg2 error:(id *)arg3;
@property(readonly, nonatomic) NSDictionary *properties; // @dynamic properties;
@property(readonly, nonatomic) BOOL isValid; // @dynamic isValid;
@property(nonatomic) id <CECInterfaceDelegate> delegate; // @synthesize delegate=_delegate;

@end

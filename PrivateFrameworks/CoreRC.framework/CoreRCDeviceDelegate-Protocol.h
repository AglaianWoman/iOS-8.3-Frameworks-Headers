//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CoreRCDevice, CoreRCHIDEvent;

@protocol CoreRCDeviceDelegate <NSObject>

@optional
- (void)device:(CoreRCDevice *)arg1 receivedHIDEvent:(CoreRCHIDEvent *)arg2 fromDevice:(CoreRCDevice *)arg3;
@end


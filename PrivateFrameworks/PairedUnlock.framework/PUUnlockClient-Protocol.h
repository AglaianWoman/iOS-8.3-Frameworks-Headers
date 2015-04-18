//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError;

@protocol PUUnlockClient <NSObject>
- (void)didGetRemoteDeviceHasPasscode:(BOOL)arg1 isLocked:(BOOL)arg2 isUnlockOnly:(BOOL)arg3 error:(NSError *)arg4;
- (void)remoteDeviceDidRemoveLockout:(BOOL)arg1 error:(NSError *)arg2;
- (void)remoteDeviceDidUnlock;
- (void)remoteDeviceDidCompletePasscodeAction:(BOOL)arg1 error:(NSError *)arg2;
- (void)didDisableOnlyRemoteUnlock:(BOOL)arg1 error:(NSError *)arg2;
- (void)didEnableOnlyRemoteUnlock:(BOOL)arg1 error:(NSError *)arg2;
- (void)didUnpairForUnlock:(BOOL)arg1 error:(NSError *)arg2;
- (void)didPairForUnlock:(BOOL)arg1 error:(NSError *)arg2;
@end

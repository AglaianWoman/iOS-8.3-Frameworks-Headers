//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FMDLogger : NSObject
{
    BOOL _logLevelsMaxedOut;
    BOOL _logLocationIndicatorSent;
    BOOL _isInternalBuild;
}

+ (id)sharedInstance;
@property(nonatomic) BOOL isInternalBuild; // @synthesize isInternalBuild=_isInternalBuild;
@property(nonatomic) BOOL logLevelsMaxedOut; // @synthesize logLevelsMaxedOut=_logLevelsMaxedOut;
@property(nonatomic) BOOL logLocationIndicatorSent; // @synthesize logLocationIndicatorSent=_logLocationIndicatorSent;
- (void)logSettingsDidChange;
- (void)maxOutLogging;
- (void)logAtLevel:(int)arg1 facility:(id)arg2 filename:(const char *)arg3 lineNumber:(int)arg4 function:(const char *)arg5 message:(id)arg6;
- (id)init;

@end

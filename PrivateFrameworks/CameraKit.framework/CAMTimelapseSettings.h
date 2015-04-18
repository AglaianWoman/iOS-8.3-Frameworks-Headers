//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CAMTimelapseSettings : NSObject
{
    double _initialCaptureTimeInterval;
    double _maxOutputFPS;
    double _maxOutputLength;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) double initialCaptureTimeInterval; // @synthesize initialCaptureTimeInterval=_initialCaptureTimeInterval;
@property(readonly, nonatomic) int maxFailedStateReadAttempts;
- (double)waitTimeBeforeNextWriteForNumberOfPreviousAttempts:(int)arg1;
@property(readonly, nonatomic) int maxMovieWriteAttempts;
- (long long)minAvailableBytesNeededForCaptureForWidth:(int)arg1 height:(int)arg2;
- (double)outputFPSForFrameCount:(int)arg1;
@property(readonly, nonatomic) int maxOutputFrames;
- (long long)maxMovieFileLengthForWidth:(int)arg1 height:(int)arg2;
- (int)averageMovieBitrateForWidth:(int)arg1 height:(int)arg2;
- (id)outputSettingsPresetForWidth:(int)arg1 height:(int)arg2;
@property(readonly, nonatomic) double maxOutputFPS; // @synthesize maxOutputFPS=_maxOutputFPS;
@property(readonly, nonatomic) double maxOutputLength; // @synthesize maxOutputLength=_maxOutputLength;
- (id)init;

@end

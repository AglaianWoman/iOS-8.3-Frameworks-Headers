//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAssetExportSession, NSString, NSTimer, PFVideoAVObjectBuilder, PLProgressView;

@interface PLVideoRemaker : NSObject
{
    NSString *_trimmedPath;
    double _duration;
    double _trimStartTime;
    double _trimEndTime;
    int _mode;
    AVAssetExportSession *_exportSession;
    float _percentComplete;
    NSTimer *_progressTimer;
    PLProgressView *_progressView;
    id _delegate;
    CDUnknownBlockType _progressHandler;
    PFVideoAVObjectBuilder *__videoAVObjectBuilder;
}

+ (int)getHDRemakerModeForMode:(int)arg1;
+ (long long)approximateByteSizeForMode:(int)arg1 duration:(double)arg2;
+ (int)getSDRemakerModeForMode:(int)arg1;
+ (long long)fileLengthLimitForRemakerMode:(int)arg1;
+ (double)maximumDurationForTrimMode:(int)arg1;
- (double)trimEndTime;
- (double)trimStartTime;
- (void)_didEndRemakingWithTemporaryPath:(id)arg1;
- (void)_removeProgressTimer;
- (void)_resetProgressTimer;
- (id)_fileFormatForURL:(id)arg1;
- (id)messageForRemakingProgress;
@property(readonly, retain, nonatomic) PFVideoAVObjectBuilder *_videoAVObjectBuilder; // @synthesize _videoAVObjectBuilder=__videoAVObjectBuilder;
- (void)_exportCompletedWithSuccess:(BOOL)arg1;
- (id)initWithAVAsset:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
- (id)progressView;
- (int)mode;
- (void)setMode:(int)arg1;
- (void)setDuration:(double)arg1;
- (double)duration;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void)cancel;
- (void)remake;
- (void)setTrimEndTime:(double)arg1;
- (void)setTrimStartTime:(double)arg1;
- (id)initWithManagedAsset:(id)arg1 applyVideoAdjustments:(BOOL)arg2;
- (void)_updateProgress;

@end


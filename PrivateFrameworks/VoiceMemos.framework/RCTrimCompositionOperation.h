//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VoiceMemos/RCTrimTimeRangeOperation.h>

@class NSError, NSObject<OS_dispatch_queue>, NSOperationQueue, NSURL, RCComposition, RCTrimAudioFileOperation;

@interface RCTrimCompositionOperation : RCTrimTimeRangeOperation
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    double _durationOfFragmentsBeingTrimmed;
    double _subTaskProgressAmounts[2];
    double _lastPostedProgress;
    NSOperationQueue *_subOperationQueue;
    RCTrimAudioFileOperation *_trimAudioFileSubOperation;
    BOOL _success;
    NSError *_error;
    RCComposition *_sourceComposition;
    NSURL *_destinationComposedAVURL;
    double _exportedDuration;
}

+ (id)_intermediateTrimmedWaveformURLForFragment:(id)arg1;
+ (id)_intermediateTrimmedAVOutputURLForFragment:(id)arg1;
@property(readonly, copy, nonatomic) NSURL *destinationComposedAVURL; // @synthesize destinationComposedAVURL=_destinationComposedAVURL;
@property(readonly, copy, nonatomic) RCComposition *sourceComposition; // @synthesize sourceComposition=_sourceComposition;
- (void)_performSyncOnSerialQueue:(CDUnknownBlockType)arg1;
- (id)performTrimOnComposedAVURLWithDestinationComposition:(id)arg1;
- (id)performTrimOnFragmentsWithDestinationComposition:(id)arg1;
- (BOOL)_isSaveToCopyOperation;
- (id)initWithSourceComposition:(id)arg1 destinationComposedAVURL:(id)arg2 timeRange:(CDStruct_73a5d3ca)arg3 trimMode:(int)arg4;
- (double)exportedDuration;
- (id)error;
- (void).cxx_destruct;
- (void)main;
- (double)progress;
- (void)cancel;
- (BOOL)success;

@end


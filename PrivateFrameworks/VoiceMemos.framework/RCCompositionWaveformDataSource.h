//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VoiceMemos/RCWaveformDataSource.h>

#import "RCWaveformDataSourceObserver.h"

@class NSObject<OS_dispatch_queue>, NSOperationQueue, NSString, RCComposition, _RCTimeRangeFileInputWaveformDataSource;

@interface RCCompositionWaveformDataSource : RCWaveformDataSource <RCWaveformDataSourceObserver>
{
    NSObject<OS_dispatch_queue> *_searialQueue;
    float _progressOfFinishedFragments;
    float _progressWeightPerFragment;
    _RCTimeRangeFileInputWaveformDataSource *_activeFragmentDataSource;
    BOOL _preferLoadingFragmentWaveforms;
    BOOL _saveGeneratedWaveform;
    BOOL _highlightLastDecomposedFragment;
    RCComposition *_composition;
    NSOperationQueue *_fragmentLoadingOperationQueue;
}

@property(retain, nonatomic) NSOperationQueue *fragmentLoadingOperationQueue; // @synthesize fragmentLoadingOperationQueue=_fragmentLoadingOperationQueue;
@property(nonatomic) BOOL highlightLastDecomposedFragment; // @synthesize highlightLastDecomposedFragment=_highlightLastDecomposedFragment;
@property(nonatomic) BOOL saveGeneratedWaveform; // @synthesize saveGeneratedWaveform=_saveGeneratedWaveform;
- (BOOL)_synchronouslyAppendSegmentsForAVContentURL:(id)arg1 isDecomposedFragment:(BOOL)arg2 sourceTimeRange:(CDStruct_73a5d3ca)arg3 destinationTime:(double)arg4;
- (id)synchronouslyApproximateWaveformSegmentsByReadingCurrentFileAheadTimeRange:(CDStruct_73a5d3ca)arg1;
- (CDStruct_73a5d3ca)timeRangeToHighlight;
- (id)saveableWaveform;
@property(readonly, nonatomic) BOOL preferLoadingFragmentWaveforms; // @synthesize preferLoadingFragmentWaveforms=_preferLoadingFragmentWaveforms;
- (id)initWithComposition:(id)arg1;
- (void)finishLoadingWithCompletionTimeoutDate:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)waveformGeneratorDidFinishLoading:(id)arg1 error:(id)arg2;
- (void)waveformDataSource:(id)arg1 didLoadWaveformSegment:(id)arg2;
- (void)waveformDataSourceDidFinishLoading:(id)arg1;
- (float)loadingProgress;
- (void).cxx_destruct;
- (double)duration;
- (void)startLoading;
@property(readonly, nonatomic) RCComposition *composition; // @synthesize composition=_composition;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


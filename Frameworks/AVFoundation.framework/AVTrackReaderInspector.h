//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVFoundation/AVAssetTrackInspector.h>

@class AVWeakReference;

@interface AVTrackReaderInspector : AVAssetTrackInspector
{
    struct OpaqueFigFormatReader *_formatReader;
    struct OpaqueFigTrackReader *_trackReader;
    int _trackID;
    unsigned long _mediaType;
    AVWeakReference *_weakReferenceToAsset;
}

- (long long)totalSampleDataLength;
- (void)finalize;
- (id)extendedLanguageTag;
- (int)trackID;
- (id)mediaType;
- (id)commonMetadata;
- (float)nominalFrameRate;
- (struct CGAffineTransform)preferredTransform;
- (CDStruct_e83c9415)timeRange;
- (id)formatDescriptions;
- (struct CGSize)naturalSize;
- (id)languageCode;
- (struct CGSize)dimensions;
- (id)asset;
- (BOOL)isEnabled;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (int)layer;
- (void)dealloc;
- (unsigned long)_figMediaType;
- (void *)_valueAsCFTypeForProperty:(struct __CFString *)arg1;
- (BOOL)isExcludedFromAutoselectionInTrackGroup;
- (int)alternateGroupID;
- (id)segmentForTrackTime:(CDStruct_1b6d18a9)arg1;
- (id)segments;
- (CDStruct_1b6d18a9)minSampleDuration;
- (id)loudnessInfo;
- (float)estimatedDataRate;
- (BOOL)requiresFrameReordering;
- (BOOL)isSelfContained;
- (struct OpaqueFigTrackReader *)_figTrackReader;
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long)arg3;
- (id)metadataForFormat:(id)arg1;
- (id)availableMetadataFormats;
- (int)naturalTimeScale;
- (float)preferredVolume;

@end

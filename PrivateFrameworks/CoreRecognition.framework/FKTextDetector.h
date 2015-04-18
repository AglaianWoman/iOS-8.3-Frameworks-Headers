//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FKTextDetector : NSObject
{
    BOOL _detectDiacritics;
    BOOL _returnSubFeatures;
    BOOL _createFeaturesForAllConcomps;
    BOOL _measureTime;
    BOOL _enableBinarizerFiltering;
    int _minimumCharacterHeight;
    CDStruct_7f413479 *_session;
    int _thresholdingAlgorithm;
    int _binarizerLimit;
    double _timeTransform;
    double _timeBinarizer;
    double _timeConcomps;
    double _timeSequences;
    double _timeRecognizer;
}

@property(nonatomic) int binarizerLimit; // @synthesize binarizerLimit=_binarizerLimit;
@property(nonatomic) BOOL enableBinarizerFiltering; // @synthesize enableBinarizerFiltering=_enableBinarizerFiltering;
@property(nonatomic) BOOL measureTime; // @synthesize measureTime=_measureTime;
@property(nonatomic) BOOL createFeaturesForAllConcomps; // @synthesize createFeaturesForAllConcomps=_createFeaturesForAllConcomps;
@property(nonatomic) int thresholdingAlgorithm; // @synthesize thresholdingAlgorithm=_thresholdingAlgorithm;
@property(nonatomic) int minimumCharacterHeight; // @synthesize minimumCharacterHeight=_minimumCharacterHeight;
- (id)detectFeaturesInBuffer:(struct __CVBuffer *)arg1 error:(id *)arg2;
- (void)translatePropertiesToOptions;
@property(nonatomic) BOOL returnSubFeatures; // @synthesize returnSubFeatures=_returnSubFeatures;
@property(nonatomic) double timeRecognizer; // @synthesize timeRecognizer=_timeRecognizer;
@property(nonatomic) double timeSequences; // @synthesize timeSequences=_timeSequences;
@property(nonatomic) BOOL detectDiacritics; // @synthesize detectDiacritics=_detectDiacritics;
@property(nonatomic) double timeConcomps; // @synthesize timeConcomps=_timeConcomps;
@property(nonatomic) double timeBinarizer; // @synthesize timeBinarizer=_timeBinarizer;
@property(nonatomic) double timeTransform; // @synthesize timeTransform=_timeTransform;
- (id)detectFeaturesInBuffer:(struct __CVBuffer *)arg1 withRegionOfInterest:(struct CGRect)arg2 error:(id *)arg3;
- (id)initWithDimensions:(struct CGSize)arg1;
@property(nonatomic) CDStruct_7f413479 *session; // @synthesize session=_session;
- (void)dealloc;

@end

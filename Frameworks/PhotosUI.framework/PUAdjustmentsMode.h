//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, PLPhotoEditMutableModel, PUPhotoEditValuesCalculator, UIImage;

@interface PUAdjustmentsMode : NSObject
{
    BOOL _toggleable;
    BOOL _useAccurateStatistics;
    PLPhotoEditMutableModel *_photoEditModel;
    PUPhotoEditValuesCalculator *_valuesCalculator;
    PUAdjustmentsMode *_supermode;
    NSArray *_submodes;
    int __modeType;
}

+ (id)newVisibleModesWithPhotoEditModel:(id)arg1 valuesCalculator:(id)arg2;
@property(readonly, nonatomic) PLPhotoEditMutableModel *photoEditModel; // @synthesize photoEditModel=_photoEditModel;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *localizedName;
@property(nonatomic, getter=isEnabled) BOOL enabled;
- (id)description;
@property(nonatomic) BOOL useAccurateStatistics; // @synthesize useAccurateStatistics=_useAccurateStatistics;
- (BOOL)_needsStatistics;
- (void)_setRelativeLevel:(float)arg1;
- (void)_ensureStatisticsAreReady;
- (float)_relativeLevelInModel:(id)arg1;
- (float)_relativeLevel;
- (float)_referenceLevelOfType:(int)arg1;
@property(readonly, nonatomic) int _modeType; // @synthesize _modeType=__modeType;
- (id)initWithModeType:(int)arg1 toggleable:(BOOL)arg2 photoEditModel:(id)arg3 valuesCalculator:(id)arg4;
@property(copy, nonatomic) NSArray *submodes; // @synthesize submodes=_submodes;
@property(nonatomic) __weak PUAdjustmentsMode *supermode; // @synthesize supermode=_supermode;
- (id)initWithModeType:(int)arg1 photoEditModel:(id)arg2 valuesCalculator:(id)arg3;
- (void)copyLevelsFromModel:(id)arg1;
- (void)setAbsoluteLevel:(float)arg1 forRenderer:(id)arg2;
- (id)adjustmentsModeWithModel:(id)arg1;
- (float)identityLevel;
- (float)maximumLevel;
- (float)minimumLevel;
- (float)baseLevelForRenderer:(id)arg1;
- (float)absoluteLevelForRenderer:(id)arg1;
@property(readonly, nonatomic) int sliderStyle;
- (BOOL)levelsAreEqualInModel:(id)arg1;
@property(readonly, nonatomic) PUPhotoEditValuesCalculator *valuesCalculator; // @synthesize valuesCalculator=_valuesCalculator;
@property(readonly, nonatomic, getter=isToggleable) BOOL toggleable; // @synthesize toggleable=_toggleable;
@property(readonly, nonatomic) UIImage *icon;

@end


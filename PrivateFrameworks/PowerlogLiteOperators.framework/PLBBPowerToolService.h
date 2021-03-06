//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PLService.h"

@class NSDate, NSMutableArray, PLEntryNotificationOperatorComposition, PLNSNotificationOperatorComposition, PLTelephonyConnection;

@interface PLBBPowerToolService : PLService
{
    unsigned char _exclusionMask;
    BOOL _sendAWD;
    BOOL _doesCurrPackageHasProblem;
    BOOL _doesPrevPackageHasProblem;
    BOOL _isUIAlertEnabled;
    PLEntryNotificationOperatorComposition *_audioEventCallback;
    PLEntryNotificationOperatorComposition *_displayEventCallback;
    PLEntryNotificationOperatorComposition *_hotspotEventCallback;
    PLEntryNotificationOperatorComposition *_bbHwOtherCallback;
    PLEntryNotificationOperatorComposition *_msgLiteCallback;
    PLEntryNotificationOperatorComposition *_wcdmaRRCCallback;
    PLEntryNotificationOperatorComposition *_lteRRCCallback;
    PLEntryNotificationOperatorComposition *_telActivityCallback;
    PLNSNotificationOperatorComposition *_dailyTaskNotification;
    NSMutableArray *_startExclusionPeriods;
    NSMutableArray *_endExclusionPeriods;
    NSDate *_samplingDate;
    PLTelephonyConnection *_connection;
    int _gPerepherialMax;
    NSDate *_notToRemoveDate;
    double _elapsedDenumerator;
    double _totalNormalARMUtility;
    double _gArmUtil;
}

+ (id)entryArmUtil;
+ (id)entryCauseHelperDefinition;
+ (id)entryCauseDefinition;
+ (id)entryAggregateDefinitions;
+ (id)entryEventPointDefinitions;
+ (void)load;
@property BOOL sendAWD; // @synthesize sendAWD=_sendAWD;
@property(retain) PLEntryNotificationOperatorComposition *telActivityCallback; // @synthesize telActivityCallback=_telActivityCallback;
@property(retain) PLEntryNotificationOperatorComposition *lteRRCCallback; // @synthesize lteRRCCallback=_lteRRCCallback;
@property(retain) PLEntryNotificationOperatorComposition *wcdmaRRCCallback; // @synthesize wcdmaRRCCallback=_wcdmaRRCCallback;
@property(retain) PLEntryNotificationOperatorComposition *msgLiteCallback; // @synthesize msgLiteCallback=_msgLiteCallback;
@property(retain) PLEntryNotificationOperatorComposition *bbHwOtherCallback; // @synthesize bbHwOtherCallback=_bbHwOtherCallback;
@property(retain) PLEntryNotificationOperatorComposition *hotspotEventCallback; // @synthesize hotspotEventCallback=_hotspotEventCallback;
@property(retain) PLEntryNotificationOperatorComposition *audioEventCallback; // @synthesize audioEventCallback=_audioEventCallback;
- (double)percentageHistogramFromArray:(id)arg1;
- (BOOL)containsExclusionsAfterCleanupWithDate:(id)arg1;
- (BOOL)isPackageTimeValidWithEntry:(id)arg1;
@property int gPerepherialMax; // @synthesize gPerepherialMax=_gPerepherialMax;
- (double)calculateMaxPerepherialPercentageWithEntry:(id)arg1;
- (id)analazeCauseResultsReturnCause:(struct CauseDurations *)arg1;
- (void)analazeIntervalWithSnapshot:(struct CauseSnapshot *)arg1 withDuration:(struct CauseDurations *)arg2 withInterval:(double)arg3 withEntry:(id)arg4;
- (void)resetStructuresWithSnapshot:(struct CauseSnapshot *)arg1 withDuration:(struct CauseDurations *)arg2;
- (id)findCauseWithEntry:(id)arg1;
@property double gArmUtil; // @synthesize gArmUtil=_gArmUtil;
@property double totalNormalARMUtility; // @synthesize totalNormalARMUtility=_totalNormalARMUtility;
@property BOOL doesPrevPackageHasProblem; // @synthesize doesPrevPackageHasProblem=_doesPrevPackageHasProblem;
@property(retain) NSDate *samplingDate; // @synthesize samplingDate=_samplingDate;
- (void)handleProblemWithEntry:(id)arg1;
@property BOOL isUIAlertEnabled; // @synthesize isUIAlertEnabled=_isUIAlertEnabled;
- (BOOL)doesCurrPeriodHaveProblem:(id)arg1;
@property double elapsedDenumerator; // @synthesize elapsedDenumerator=_elapsedDenumerator;
- (void)collectExtraDataForPackage:(id)arg1;
- (BOOL)isPackageValidWithEntry:(id)arg1;
@property(retain) NSMutableArray *endExclusionPeriods; // @synthesize endExclusionPeriods=_endExclusionPeriods;
@property(retain) NSMutableArray *startExclusionPeriods; // @synthesize startExclusionPeriods=_startExclusionPeriods;
@property unsigned char exclusionMask; // @synthesize exclusionMask=_exclusionMask;
- (void)handleExclusionWithState:(BOOL)arg1 withExclusion:(unsigned char)arg2;
@property BOOL doesCurrPackageHasProblem; // @synthesize doesCurrPackageHasProblem=_doesCurrPackageHasProblem;
- (void)writeToHelperTable:(id)arg1 WithValue:(double)arg2 withDate:(id)arg3;
@property(retain) NSDate *notToRemoveDate; // @synthesize notToRemoveDate=_notToRemoveDate;
- (void)setupInitExclusions;
- (void)submitAWD;
- (void)telActivityCallback:(id)arg1;
- (void)lteRRCCallback:(id)arg1;
- (void)wcdmaRRCCallback:(id)arg1;
- (void)msgLiteCallback:(id)arg1;
- (void)handleMavBBHwOtherCallback:(id)arg1;
- (void)handleHotspotCallback:(id)arg1;
- (void)handleAudioCallback:(id)arg1;
- (void)resetAllCounters:(id)arg1;
@property(retain) PLNSNotificationOperatorComposition *dailyTaskNotification; // @synthesize dailyTaskNotification=_dailyTaskNotification;
@property(retain) PLEntryNotificationOperatorComposition *displayEventCallback; // @synthesize displayEventCallback=_displayEventCallback;
- (void)handleDisplayCallback:(id)arg1;
- (void)initOperatorDependancies;
@property __weak PLTelephonyConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (id)init;

@end


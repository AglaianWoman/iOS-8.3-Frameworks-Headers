//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HKObjectType, NSString;

@protocol HDHealthDataCollector <NSObject>
@property BOOL disabled;
- (NSString *)dataCollectorDiagnosticDescription;
- (void)updateHistoricalData;
- (void)collectionStoppedForType:(HKObjectType *)arg1;
- (void)updateCollectionInterval:(double)arg1 forType:(HKObjectType *)arg2;
- (void)collectionStartedForType:(HKObjectType *)arg1 collectionInterval:(double)arg2;
@end

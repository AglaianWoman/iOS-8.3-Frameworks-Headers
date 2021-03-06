//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FUChartDataSetDataSource.h"

@class NSArray, NSString;

@interface FUChartDataGroup : NSObject <FUChartDataSetDataSource>
{
    id <FUChartDataGroupDataSource> _dataSource;
    NSArray *_dataSets;
}

@property(retain, nonatomic) NSArray *dataSets; // @synthesize dataSets=_dataSets;
- (void)removeDataPointFromSetAtIndex:(unsigned int)arg1 pointIndex:(unsigned int)arg2;
- (void)addDataPointWithXValue:(float)arg1 yValue:(float)arg2 setIndex:(unsigned int)arg3;
- (void)reloadDataPointInSetAtIndex:(unsigned int)arg1 pointIndex:(unsigned int)arg2;
- (void)reloadDataInSetAtIndex:(unsigned int)arg1;
- (unsigned int)numberOfDataSets;
- (id)_getLabelsForSetAtIndex:(unsigned int)arg1;
- (id)_getPointsForSetAtIndex:(unsigned int)arg1;
- (id)_getPointForSetAtIndex:(unsigned int)arg1 pointIndex:(unsigned int)arg2;
- (unsigned int)_getNumberOfDataPointsInSetAtIndex:(unsigned int)arg1;
- (void)_reloadDataSet:(id)arg1;
- (id)_dataSetAtIndexCreateIfNecessary:(unsigned int)arg1;
- (unsigned int)_getNumberOfDataSets;
- (id)labelsForSet:(id)arg1;
- (id)dataPointsForSet:(id)arg1;
- (id)dataSet:(id)arg1 chartPointForIndex:(unsigned int)arg2;
- (unsigned int)numberOfDataPointsForDataSet:(id)arg1;
- (id)maxXValue;
- (id)minXValue;
- (id)maxYValue;
- (id)minYValue;
- (id)dataSetAtIndex:(unsigned int)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <FUChartDataGroupDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, copy) NSString *description;
- (void)reloadData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


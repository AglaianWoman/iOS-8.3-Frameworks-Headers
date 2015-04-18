//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTimer;

@interface ActivityCounts : NSObject
{
    struct {
        double xagg;
        double yagg;
        double zagg;
        int numSamples;
    } calorieFeature;
    id <CoreActivityActivityDelegate> _delegate;
    int _epoch_count;
    NSTimer *_calorieComputeTimer;
}

- (void)stopCalorieUpdates;
- (void)startCalorieUpdates;
@property(nonatomic) int epoch_count; // @synthesize epoch_count=_epoch_count;
- (double)myiir:(double)arg1 x:(double *)arg2 y:(double *)arg3 nCoef:(unsigned int)arg4 aCoef:(const double *)arg5 bCoef:(const double *)arg6;
@property(retain, nonatomic) NSTimer *calorieComputeTimer; // @synthesize calorieComputeTimer=_calorieComputeTimer;
- (void)computeCalories;
- (void)handleAccelData:(double)arg1 y:(double)arg2 z:(double)arg3;
- (void).cxx_destruct;
@property(nonatomic) __weak id <CoreActivityActivityDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;

@end

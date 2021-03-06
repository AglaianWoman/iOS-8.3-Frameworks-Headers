//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BWZoomDelayBuffer;

@interface BWZoomCommandHandler : NSObject
{
    int _zoomLock;
    float _appliedZoomFactor;
    float _lastRequestedZoomFactor;
    BOOL _zoomFactorServiced;
    BWZoomDelayBuffer *_zoomDelayBuffer;
    BOOL _clientCanCompensateForDelay;
    id <BWZoomCompletionDelegate> _zoomCompletionDelegate;
    CDStruct_1b6d18a9 _lastFramePTS;
    CDStruct_1b6d18a9 _rampStartTime;
    float _rampCurrentVelocity;
    float _rampAcceleration;
    float _rampStartFactor;
    float _rampStartVelocity;
    float _rampTargetFactor;
    float _rampTargetVelocity;
    int _rampCommandID;
    BOOL _rampActive;
}

+ (void)initialize;
@property(nonatomic) id <BWZoomCompletionDelegate> zoomCompletionDelegate; // @synthesize zoomCompletionDelegate=_zoomCompletionDelegate;
- (void)updateAppliedZoomFactorForDelayedISPAppliedZoomFactor:(float)arg1;
- (float)updateZoomModelForNextFrameWithPTS:(CDStruct_1b6d18a9)arg1;
- (void)setTypicalISPZoomDelay:(unsigned int)arg1 clientCanCompensateForDelay:(BOOL)arg2;
- (void)rampToVideoZoomFactor:(float)arg1 withRate:(float)arg2 commandID:(int)arg3;
@property(readonly) float appliedZoomFactor;
@property float requestedZoomFactor;
- (void)_activateRampMode:(BOOL)arg1;
- (float)_zoomFactorForRampAtPTS:(CDStruct_1b6d18a9)arg1;
- (id)init;
- (void)dealloc;

@end


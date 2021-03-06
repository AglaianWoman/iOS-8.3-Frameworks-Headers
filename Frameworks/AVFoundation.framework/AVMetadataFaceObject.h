//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVFoundation/AVMetadataObject.h>

#import "NSCopying.h"

@class AVMetadataFaceObjectInternal;

@interface AVMetadataFaceObject : AVMetadataObject <NSCopying>
{
    AVMetadataFaceObjectInternal *_internal;
}

+ (id)faceObjectWithFigEmbeddedCaptureDeviceFaceDictionary:(id)arg1 input:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)dealloc;
@property(readonly) float yawAngle;
@property(readonly) BOOL hasYawAngle;
@property(readonly) float rollAngle;
@property(readonly) BOOL hasRollAngle;
- (id)initWithFigEmbeddedCaptureDeviceFaceDictionary:(id)arg1 input:(id)arg2;
- (id)initWithFaceID:(int)arg1 hasRollAngle:(BOOL)arg2 rollAngle:(float)arg3 hasYawAngle:(BOOL)arg4 yawAngle:(float)arg5 time:(CDStruct_1b6d18a9)arg6 duration:(CDStruct_1b6d18a9)arg7 bounds:(struct CGRect)arg8 optionalInfoDict:(id)arg9 originalMetadataObject:(id)arg10 sourceCaptureInput:(id)arg11;
- (struct CGRect)rightEyeBounds;
- (BOOL)hasRightEyeBounds;
- (struct CGRect)leftEyeBounds;
- (BOOL)hasLeftEyeBounds;
- (int)smileConfidence;
- (BOOL)hasSmileConfidence;
- (int)rightEyeClosedConfidence;
- (BOOL)hasRightEyeClosedConfidence;
- (int)leftEyeClosedConfidence;
- (BOOL)hasLeftEyeClosedConfidence;
- (id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(struct CGAffineTransform)arg2 isVideoMirrored:(BOOL)arg3 rollAdjustment:(float)arg4;
- (id)initWithType:(id)arg1 time:(CDStruct_1b6d18a9)arg2 duration:(CDStruct_1b6d18a9)arg3 bounds:(struct CGRect)arg4 originalMetadataObject:(id)arg5 sourceCaptureInput:(id)arg6;
- (id)initWithFaceID:(int)arg1 hasRollAngle:(BOOL)arg2 rollAngle:(float)arg3 hasYawAngle:(BOOL)arg4 yawAngle:(float)arg5 time:(CDStruct_1b6d18a9)arg6 duration:(CDStruct_1b6d18a9)arg7 bounds:(struct CGRect)arg8;
@property(readonly) int faceID;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SceneKit/SCNGeometry.h>

@class UIBezierPath;

@interface SCNShape : SCNGeometry
{
    id _reserved;
    float _chamferRadius;
    float _extrusionDepth;
    float _discretizedStraightLineMaxLength;
    struct UIBezierPath *_chamferProfile;
    int _primitiveType;
    int _chamferMode;
    struct UIBezierPath *_path;
}

+ (BOOL)supportsSecureCoding;
+ (id)shapeWithPath:(id)arg1 extrusionDepth:(float)arg2;
+ (id)SCNJSExportProtocol;
- (int)primitiveType;
@property(copy, nonatomic) UIBezierPath *path;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)copy;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)_customDecodingOfSCNShape:(id)arg1;
- (void)_customEncodingOfSCNShape:(id)arg1;
- (id)initWithShapeGeometryRef:(struct __C3DShapeGeometry *)arg1;
@property(nonatomic) int chamferMode;
- (id)initPresentationShapeGeometryWithShapeGeometryRef:(struct __C3DShapeGeometry *)arg1;
- (float)discretizedStraightLineMaxLength;
- (void)setDiscretizedStraightLineMaxLength:(float)arg1;
- (CDStruct_f4e8402e)params;
@property(copy, nonatomic) UIBezierPath *chamferProfile;
@property(nonatomic) float extrusionDepth;
@property(nonatomic) float chamferRadius;
- (void)_syncObjCModel:(struct __C3DShapeGeometry *)arg1;
- (void)setPrimitiveType:(int)arg1;
- (struct __C3DGeometry *)__createCFObject;
- (BOOL)getBoundingSphereCenter:(struct SCNVector3 *)arg1 radius:(float *)arg2;
- (BOOL)getBoundingBoxMin:(struct SCNVector3 *)arg1 max:(struct SCNVector3 *)arg2;
- (id)presentationGeometry;
- (struct __C3DAnimationChannel *)copyAnimationChannelForKeyPath:(id)arg1;

@end

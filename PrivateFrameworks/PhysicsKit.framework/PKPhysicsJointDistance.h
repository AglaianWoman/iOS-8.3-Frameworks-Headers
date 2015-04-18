//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhysicsKit/PKPhysicsJoint.h>

@interface PKPhysicsJointDistance : PKPhysicsJoint
{
    struct b2DistanceJointDef _jointDef;
    struct b2DistanceJoint *_joint;
    struct CGPoint _anchorA;
    struct CGPoint _anchorB;
}

+ (id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 localAnchorA:(struct CGPoint)arg3 localAnchorB:(struct CGPoint)arg4;
+ (id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 anchorA:(struct CGPoint)arg3 anchorB:(struct CGPoint)arg4;
- (void)create;
@property(nonatomic) BOOL collideConnected;
- (id)initWithBodyA:(id)arg1 bodyB:(id)arg2 anchorA:(struct CGPoint)arg3 anchorB:(struct CGPoint)arg4;
- (id)initWithBodyA:(id)arg1 bodyB:(id)arg2 localAnchorA:(struct CGPoint)arg3 localAnchorB:(struct CGPoint)arg4;
- (struct b2JointDef *)_jointDef;
- (void)set_joint:(struct b2Joint *)arg1;
- (struct b2Joint *)_joint;
- (id).cxx_construct;
@property(nonatomic) float frequency;
@property(nonatomic) float damping;
@property(nonatomic) float length;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

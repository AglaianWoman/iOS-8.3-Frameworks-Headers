//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SceneKit/SCNAction.h>

@interface SCNActionPerformSelector : SCNAction
{
    SEL _selector;
    id _target;
}

+ (BOOL)supportsSecureCoding;
+ (id)perfromSelector:(SEL)arg1 onTarget:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)reversedAction;
- (void)updateWithTarget:(id)arg1 forTime:(double)arg2;
- (BOOL)isCustom;

@end


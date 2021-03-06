//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/OADShade.h>

@interface OADLinearShade : OADShade
{
    float mAngle;
    BOOL mIsAngleOverridden;
    BOOL mScaled;
    BOOL mIsScaledOverridden;
}

+ (id)defaultProperties;
- (id)initWithDefaults;
- (BOOL)isScaledOverridden;
- (BOOL)isAngleOverridden;
- (float)angle;
- (void)setAngle:(float)arg1;
- (void)setScaled:(BOOL)arg1;
- (BOOL)scaled;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end


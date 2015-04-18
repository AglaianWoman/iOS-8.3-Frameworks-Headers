//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/_UIBarItemAppearanceStorage.h>

@class NSMutableDictionary, NSValue, UIColor, _UIBarBackButtonItemAppearanceStorage;

@interface _UIBarButtonItemAppearanceStorage : _UIBarItemAppearanceStorage
{
    NSMutableDictionary *backgroundImages;
    NSMutableDictionary *miniBackgroundImages;
    UIColor *tintColor;
    NSValue *titlePositionOffset;
    NSValue *miniTitlePositionOffset;
    NSMutableDictionary *backgroundVerticalAdjustmentsForBarMetrics;
    _UIBarBackButtonItemAppearanceStorage *backButtonAppearance;
}

@property(retain, nonatomic) NSValue *backButtonTitlePositionOffset;
@property(retain, nonatomic) NSValue *miniBackButtonTitlePositionOffset;
- (void)setBackButtonBackgroundVerticalAdjustment:(float)arg1 forBarMetrics:(int)arg2;
- (float)backButtonBackgroundVerticalAdjustmentForBarMetrics:(int)arg1;
- (id)anyBackButtonBackgroundImage;
@property(retain, nonatomic) NSValue *titlePositionOffset; // @synthesize titlePositionOffset;
@property(retain, nonatomic) NSValue *miniTitlePositionOffset; // @synthesize miniTitlePositionOffset;
- (void)setBackgroundVerticalAdjustment:(float)arg1 forBarMetrics:(int)arg2;
- (float)backgroundVerticalAdjustmentForBarMetrics:(int)arg1;
- (id)anyBackgroundImage;
- (void)setBackButtonBackgroundImage:(id)arg1 forState:(unsigned int)arg2 isMini:(BOOL)arg3;
- (id)backButtonBackgroundImageForState:(unsigned int)arg1 isMini:(BOOL)arg2;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned int)arg2 style:(int)arg3 isMini:(BOOL)arg4;
- (id)backgroundImageForState:(unsigned int)arg1 style:(int)arg2 isMini:(BOOL)arg3;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor;
- (void)dealloc;

@end

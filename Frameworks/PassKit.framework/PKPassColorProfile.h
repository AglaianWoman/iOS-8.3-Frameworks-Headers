//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIColor;

@interface PKPassColorProfile : NSObject
{
    float _backgroundLightness;
    float _foregroundLightness;
    float _labelLightness;
    PKPassColorProfile *_stripProfile;
    UIColor *_backgroundColor;
    UIColor *_foregroundColor;
    UIColor *_labelColor;
    UIColor *_highlightColor;
    float _overlayDarkeningAlpha;
    float _regularDarkeningAlpha;
    float _overlayLighteningAlpha;
    float _regularLighteningAlpha;
}

+ (id)profileForDisplayProfile:(id)arg1;
@property(readonly, nonatomic) UIColor *labelColor; // @synthesize labelColor=_labelColor;
@property(readonly, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property(readonly, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void)dealloc;
@property(readonly, nonatomic) float regularLighteningAlpha; // @synthesize regularLighteningAlpha=_regularLighteningAlpha;
@property(readonly, nonatomic) float overlayLighteningAlpha; // @synthesize overlayLighteningAlpha=_overlayLighteningAlpha;
@property(readonly, nonatomic) float regularDarkeningAlpha; // @synthesize regularDarkeningAlpha=_regularDarkeningAlpha;
@property(readonly, nonatomic) float overlayDarkeningAlpha; // @synthesize overlayDarkeningAlpha=_overlayDarkeningAlpha;
- (int)_sizeForGlyph:(id)arg1;
- (int)_sizeForFont:(id)arg1;
- (void)_calculateColorsWithBackgroundColor:(id)arg1 foregroundColor:(id)arg2 labelColor:(id)arg3;
- (id)_imageForGlyph:(id)arg1 color:(id)arg2;
- (id)_initWithBackgroundColor:(id)arg1 foregroundColor:(id)arg2 labelColor:(id)arg3;
- (id)foregroundColorOverStrip:(BOOL)arg1;
- (id)labelColorOverStrip:(BOOL)arg1;
- (id)foregroundImageForGlyph:(id)arg1;
- (id)labelAttributesForFont:(id)arg1;
- (id)foregroundAttributesForFont:(id)arg1;
@property(readonly, nonatomic) BOOL isLight;
- (id)labelImageForGlyph:(id)arg1;

@end


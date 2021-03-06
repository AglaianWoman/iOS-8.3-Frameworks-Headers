//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoBoothEffects/PBFilter.h>

@interface PBMirrorFilter : PBFilter
{
    float lastInputX;
    float lastInputY;
    float lastInputAngle;
    _Bool firstTime;
    float inputOrientation;
    struct CGPoint inputPoint;
}

@property float inputOrientation; // @synthesize inputOrientation;
- (void)applyParametersToCIFilter:(BOOL)arg1 extent:(struct CGRect)arg2;
- (BOOL)needsWrapMirror;
- (id)ciFilterName;
@property struct CGPoint inputPoint; // @synthesize inputPoint;
- (void)setDefaults;

@end


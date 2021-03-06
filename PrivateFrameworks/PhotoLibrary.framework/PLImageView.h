//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@class NSString, PLPhotoTilePlaceholderView, PLTiledLayer, PLVideoView, UILabel, UIView;

@interface PLImageView : UIImageView
{
    NSString *_name;
    UIView *_borderView;
    PLVideoView *_videoView;
    PLPhotoTilePlaceholderView *_placeholderView;
    UIView *_leftAccessoryView;
    UIView *_bottomRightAccessoryView;
    struct CGSize _leftAccessoryViewOffset;
    UILabel *_textBadge;
    unsigned int _shadowEnabled:1;
    unsigned int _suppressShadowDrawing:1;
    unsigned int _borderViewIsVisible:1;
    unsigned int _drawsBorder:1;
    float _aspectRatio;
    double _lastBorderAlphaTime;
    double _lastShadowAlphaTime;
    float _transitionProgress;
    BOOL _edgeAntialiasingEnabled;
    PLTiledLayer *_fullSizeImageTiledLayer;
    int _fullSizeImageOrientation;
    BOOL _showsPlaceholder;
    float _accessoryViewsAlpha;
    float _placeholderScale;
}

+ (BOOL)shouldDrawShadows;
+ (id)textBadgeForString:(id)arg1 photoSize:(struct CGSize)arg2;
+ (struct CGSize)badgeOffset;
+ (void)initialize;
@property(readonly, nonatomic) struct CGSize placeholderSize;
@property(nonatomic) BOOL drawsBorder;
- (id)textBadgeString;
@property(nonatomic) float placeholderScale; // @synthesize placeholderScale=_placeholderScale;
@property(nonatomic) float accessoryViewsAlpha; // @synthesize accessoryViewsAlpha=_accessoryViewsAlpha;
@property(retain, nonatomic) UIView *bottomRightAccessoryView; // @synthesize bottomRightAccessoryView=_bottomRightAccessoryView;
@property(nonatomic) struct CGSize leftAccessoryViewOffset; // @synthesize leftAccessoryViewOffset=_leftAccessoryViewOffset;
@property(retain, nonatomic) UIView *leftAccessoryView; // @synthesize leftAccessoryView=_leftAccessoryView;
@property(nonatomic, getter=isDimmed) BOOL dimmed;
@property(nonatomic) float borderAndAccessoriesAlpha;
- (void)parentDidLayout;
- (void)setBottomRightAccessoryView:(id)arg1 animated:(BOOL)arg2;
- (void)setLeftAccessoryView:(id)arg1 animated:(BOOL)arg2;
- (void)_updatePlaceholderLayout;
- (void)_updatePlaceholderAlpha;
- (void)_setShadowEnabled:(BOOL)arg1 force:(BOOL)arg2;
- (struct CGAffineTransform)_transformForFullSizeImageTiledLayer;
- (void)_updateShadowPath;
- (struct CGRect)_bottomRightAccessoryViewFrame;
- (struct CGRect)_leftAccessoryViewFrame;
- (void)renderSnapshotInContext:(struct CGContext *)arg1;
- (void)setTextBadgeString:(id)arg1;
@property(nonatomic, getter=isShadowEnabled) BOOL shadowEnabled;
- (void)setShowsPlaceholder:(BOOL)arg1;
@property(readonly, nonatomic) BOOL showsPlaceholder; // @synthesize showsPlaceholder=_showsPlaceholder;
- (void)setFullSizeImageJPEGData:(id)arg1 size:(struct CGSize)arg2 orientation:(int)arg3;
@property(nonatomic, getter=isBorderAndAccessoriesVisible) BOOL borderAndAccessoriesVisible;
- (void)updateFullSizeImageVisibleArea;
- (void)setBorderAndAccessoriesAlpha:(float)arg1 forced:(BOOL)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 allowRounding:(BOOL)arg2;
@property(nonatomic) float transitionProgress; // @synthesize transitionProgress=_transitionProgress;
- (void)setEdgeAntialiasingEnabled:(BOOL)arg1;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setImage:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) PLVideoView *videoView;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MPUMarqueeView, NSDictionary, NSString, UIImage, UIImageView, UILabel;

@interface MPUNowPlayingTitlesView : UIView
{
    MPUMarqueeView *_titleMarqueeView;
    MPUMarqueeView *_detailMarqueeView;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UIImageView *_explicitImageView;
    BOOL _needsLabelUpdate;
    BOOL _explicit;
    int _style;
    NSDictionary *_titleTextAttributes;
    NSDictionary *_detailTextAttributes;
    NSString *_albumText;
    NSString *_artistText;
    NSString *_stationNameText;
    float _textMargin;
    float _titleLeading;
    NSString *_titleText;
    UIImage *_explicitImage;
    struct UIEdgeInsets _titleMarqueeEdgeInsets;
    struct UIEdgeInsets _detailMarqueeEdgeInsets;
}

+ (Class)labelClass;
@property(nonatomic, getter=isExplicit) BOOL explicit; // @synthesize explicit=_explicit;
@property(copy, nonatomic) NSString *artistText; // @synthesize artistText=_artistText;
- (void)resetMarqueePositions;
@property(copy, nonatomic) NSString *stationNameText; // @synthesize stationNameText=_stationNameText;
@property(nonatomic) struct UIEdgeInsets detailMarqueeEdgeInsets; // @synthesize detailMarqueeEdgeInsets=_detailMarqueeEdgeInsets;
@property(nonatomic) struct UIEdgeInsets titleMarqueeEdgeInsets; // @synthesize titleMarqueeEdgeInsets=_titleMarqueeEdgeInsets;
@property(retain, nonatomic) UIImage *explicitImage; // @synthesize explicitImage=_explicitImage;
@property(nonatomic) float titleLeading; // @synthesize titleLeading=_titleLeading;
@property(nonatomic) float textMargin; // @synthesize textMargin=_textMargin;
@property(copy, nonatomic) NSString *albumText; // @synthesize albumText=_albumText;
- (id)_detailMarqueeView;
- (id)_titleMarqueeView;
@property(readonly, nonatomic) float titleBaselineOffsetFromBottom;
- (void)setMarqueeEnabled:(BOOL)arg1 withOptions:(long long)arg2;
@property(nonatomic, getter=isMarqueeEnabled) BOOL marqueeEnabled;
- (void)_updateAttributedTitleLabel;
@property(retain, nonatomic) NSDictionary *detailTextAttributes; // @synthesize detailTextAttributes=_detailTextAttributes;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
- (void).cxx_destruct;
- (id)initWithStyle:(int)arg1;
- (id)_titleLabel;
@property(nonatomic) int style; // @synthesize style=_style;
@property(retain, nonatomic) NSDictionary *titleTextAttributes; // @synthesize titleTextAttributes=_titleTextAttributes;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)_detailLabel;

@end


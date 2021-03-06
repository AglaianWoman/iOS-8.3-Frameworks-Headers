//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class MPUArtworkView, NSArray, NSString, UILabel, UIView;

@interface MPUAutolayoutTableViewCell : UITableViewCell
{
    UIView *_contentLayoutGuide;
    UIView *_labelLayoutGuide;
    UIView *_artworkLayoutGuide;
    UILabel *_textLabel;
    UILabel *_detailTextLabel;
    MPUArtworkView *_artworkView;
    UIView *_expansionView;
    NSArray *_layoutGuideConstraints;
    NSArray *_labelHorizontalLayoutConstraints;
    NSArray *_labelVerticalLayoutConstraints;
    NSArray *_artworkLayoutConstraints;
    NSArray *_expansionConstraints;
    BOOL _expanded;
    BOOL _alignsSeparatorInsetsWithLabels;
    BOOL _skipSeparatorInsetUpdates;
    NSString *_textLabelFontStyle;
    NSString *_detailTextLabelFontStyle;
    float _detailTextLabelFirstLineLeading;
    float _artworkMaxWidth;
    struct UIEdgeInsets _labelContentViewInsets;
    struct UIEdgeInsets _artworkInsets;
}

+ (Class)labelClass;
+ (Class)artworkViewClass;
@property(nonatomic) BOOL skipSeparatorInsetUpdates; // @synthesize skipSeparatorInsetUpdates=_skipSeparatorInsetUpdates;
@property(readonly, nonatomic) id artworkLayoutGuide; // @synthesize artworkLayoutGuide=_artworkLayoutGuide;
@property(readonly, nonatomic) id labelLayoutGuide; // @synthesize labelLayoutGuide=_labelLayoutGuide;
@property(readonly, nonatomic) id contentLayoutGuide; // @synthesize contentLayoutGuide=_contentLayoutGuide;
@property(nonatomic) struct UIEdgeInsets labelContentViewInsets; // @synthesize labelContentViewInsets=_labelContentViewInsets;
@property(copy, nonatomic) NSString *detailTextLabelFontStyle; // @synthesize detailTextLabelFontStyle=_detailTextLabelFontStyle;
@property(nonatomic) float detailTextLabelFirstLineLeading; // @synthesize detailTextLabelFirstLineLeading=_detailTextLabelFirstLineLeading;
@property(copy, nonatomic) NSString *textLabelFontStyle; // @synthesize textLabelFontStyle=_textLabelFontStyle;
@property(nonatomic) float artworkMaxWidth; // @synthesize artworkMaxWidth=_artworkMaxWidth;
@property(nonatomic) struct UIEdgeInsets artworkInsets; // @synthesize artworkInsets=_artworkInsets;
@property(nonatomic) BOOL alignsSeparatorInsetsWithLabels; // @synthesize alignsSeparatorInsetsWithLabels=_alignsSeparatorInsetsWithLabels;
- (void)_invalidateLabelConstraints;
- (void)_invalidateExpansionConstraints;
- (void)_invalidateArtworkConstraints;
@property(readonly, nonatomic) MPUArtworkView *artworkView;
- (struct UIEdgeInsets)separatorInsetWhenExpanded:(BOOL)arg1;
- (id)viewsToCenterVerticallyInContentView;
@property(readonly, nonatomic) UIView *expansionView;
- (void)_updateVisibleViews;
- (void).cxx_destruct;
- (void)setNeedsUpdateConstraints;
@property(nonatomic, getter=isExpanded) BOOL expanded; // @synthesize expanded=_expanded;
- (void)updateConstraints;
@property(readonly, nonatomic) UILabel *detailTextLabel;
@property(readonly, nonatomic) UILabel *textLabel;
- (void)prepareForReuse;
- (void)updateConstraintsIfNeeded;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;

@end


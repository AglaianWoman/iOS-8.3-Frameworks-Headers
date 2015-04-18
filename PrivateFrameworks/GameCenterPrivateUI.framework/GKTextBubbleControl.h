//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterPrivateUI/GKBaseBubbleWithTextControl.h>

@class GKLabel, GKTextStyle, NSAttributedString, NSString;

@interface GKTextBubbleControl : GKBaseBubbleWithTextControl
{
    BOOL _smallText;
    NSString *_text;
    GKTextStyle *_overrideTextStyle;
    GKLabel *_textLabel;
    GKLabel *_textStyle;
}

@property(nonatomic) BOOL smallText; // @synthesize smallText=_smallText;
@property(retain, nonatomic) GKTextStyle *overrideTextStyle; // @synthesize overrideTextStyle=_overrideTextStyle;
- (void)updateTextFieldsFor3DScaling;
- (void)_updateTextLabel;
@property(retain, nonatomic) GKLabel *textStyle; // @synthesize textStyle=_textStyle;
@property(retain, nonatomic) GKLabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) NSAttributedString *attributedText;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

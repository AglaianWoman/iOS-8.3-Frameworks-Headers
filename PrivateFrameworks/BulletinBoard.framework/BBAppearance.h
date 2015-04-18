//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BBUniquableObject.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class BBColor, BBImage, NSString;

@interface BBAppearance : NSObject <BBUniquableObject, NSSecureCoding, NSCopying>
{
    NSString *_title;
    BBColor *_titleColor;
    BBImage *_image;
    BBColor *_color;
    int _style;
    NSString *_viewClassName;
}

+ (id)appearanceWithTitle:(id)arg1;
+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *viewClassName; // @synthesize viewClassName=_viewClassName;
@property(copy, nonatomic) BBColor *titleColor; // @synthesize titleColor=_titleColor;
- (id)uniqueIdentifier;
@property(copy, nonatomic) BBColor *color; // @synthesize color=_color;
@property(nonatomic) int style; // @synthesize style=_style;
@property(copy, nonatomic) BBImage *image; // @synthesize image=_image;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

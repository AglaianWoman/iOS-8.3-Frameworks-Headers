//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BBUniquableObject.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class BBAction, BBImage, NSData, NSString;

@interface BBButton : NSObject <BBUniquableObject, NSCopying, NSSecureCoding>
{
    NSString *_title;
    BBImage *_image;
    BBAction *_action;
    NSString *_identifier;
}

+ (id)buttonWithTitle:(id)arg1 glyphData:(id)arg2 action:(id)arg3 identifier:(id)arg4;
+ (id)buttonWithTitle:(id)arg1 action:(id)arg2;
+ (void)_removeButtonFromCache:(id)arg1;
+ (id)_possiblyCachedButtonForInitializedButton:(id)arg1;
+ (id)buttonWithTitle:(id)arg1 image:(id)arg2 action:(id)arg3 identifier:(id)arg4;
+ (id)buttonWithTitle:(id)arg1 action:(id)arg2 identifier:(id)arg3;
+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSData *glyphData;
- (id)uniqueIdentifier;
@property(copy, nonatomic) BBAction *action; // @synthesize action=_action;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) BBImage *image; // @synthesize image=_image;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


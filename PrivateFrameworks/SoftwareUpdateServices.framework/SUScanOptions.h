//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSMutableSet, NSSet, NSString;

@interface SUScanOptions : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    BOOL _forced;
    NSMutableSet *_types;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic, getter=isForced) BOOL forced; // @synthesize forced=_forced;
- (BOOL)findsAnyUpdate;
- (void)removeType:(int)arg1;
- (BOOL)containsType:(int)arg1;
@property(retain, nonatomic) NSSet *types; // @synthesize types=_types;
- (void)clearTypes;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)addType:(int)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSDictionary, NSMutableSet, NSSet;

@interface SKUIPageComponentContext : NSObject <NSCopying>
{
    NSDictionary *_componentDictionary;
    NSArray *_ineligibleGratisIdentifiers;
    NSDictionary *_items;
    int _layoutStyle;
    double _pageGenerationTime;
    NSDictionary *_platformKeyProfileOverrides;
    NSMutableSet *_unavailableItems;
}

@property(copy, nonatomic) NSDictionary *platformKeyProfileOverrides; // @synthesize platformKeyProfileOverrides=_platformKeyProfileOverrides;
@property(nonatomic) int layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property(copy, nonatomic) NSArray *ineligibleGratisIdentifiers; // @synthesize ineligibleGratisIdentifiers=_ineligibleGratisIdentifiers;
@property(copy, nonatomic) NSDictionary *componentDictionary; // @synthesize componentDictionary=_componentDictionary;
@property(readonly, copy, nonatomic) NSSet *allUnavailableItemIdentifiers; // @synthesize allUnavailableItemIdentifiers=_unavailableItems;
- (void)setUnavailableItemIdentifiers:(id)arg1;
- (id)itemForItemIdentifier:(id)arg1;
- (BOOL)isUnavailableItemIdentifier:(id)arg1;
- (void)addUnavailableItemIdentifiers:(id)arg1;
@property(readonly, nonatomic) double pageGenerationTime; // @synthesize pageGenerationTime=_pageGenerationTime;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *items; // @synthesize items=_items;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

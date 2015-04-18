//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

@interface PUCollectionViewData : NSObject
{
    int _cachedPageCount;
    struct CGRect _currentContentBounds;
    NSMutableArray *_itemLayoutAttributes;
    NSMutableDictionary *_itemLayoutAttributesByIndexPath;
}

- (void).cxx_destruct;
- (void)invalidate;
- (id)init;
@property(readonly, nonatomic) NSMutableDictionary *itemLayoutAttributesByIndexPath; // @synthesize itemLayoutAttributesByIndexPath=_itemLayoutAttributesByIndexPath;
@property(readonly, nonatomic) NSMutableArray *itemLayoutAttributes; // @synthesize itemLayoutAttributes=_itemLayoutAttributes;
@property(nonatomic) struct CGRect currentContentBounds; // @synthesize currentContentBounds=_currentContentBounds;
@property(readonly, nonatomic) int cachedPageCount; // @synthesize cachedPageCount=_cachedPageCount;
- (BOOL)hasReferenceIndexPath;

@end

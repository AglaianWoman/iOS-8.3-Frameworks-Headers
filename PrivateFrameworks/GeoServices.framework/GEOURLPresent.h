//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOURLOptions, NSMutableArray;

@interface GEOURLPresent : PBCodable <NSCopying>
{
    NSMutableArray *_items;
    GEOURLOptions *_options;
}

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)clearItems;
@property(readonly, nonatomic) BOOL hasOptions;
- (id)initWithDirectionsOptions:(id)arg1;
- (id)initWithOptions:(id)arg1;
- (id)itemAtIndex:(unsigned int)arg1;
- (unsigned int)itemsCount;
@property(retain, nonatomic) GEOURLOptions *options; // @synthesize options=_options;
- (id)dictionaryRepresentation;
- (void)addItem:(id)arg1;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end


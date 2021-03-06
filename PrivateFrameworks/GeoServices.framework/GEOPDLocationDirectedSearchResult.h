//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOMapRegion, NSMutableArray;

@interface GEOPDLocationDirectedSearchResult : PBCodable <NSCopying>
{
    NSMutableArray *_disambiguationLabels;
    GEOMapRegion *_displayMapRegion;
}

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(retain, nonatomic) NSMutableArray *disambiguationLabels; // @synthesize disambiguationLabels=_disambiguationLabels;
@property(retain, nonatomic) GEOMapRegion *displayMapRegion; // @synthesize displayMapRegion=_displayMapRegion;
@property(readonly, nonatomic) BOOL hasDisplayMapRegion;
- (id)disambiguationLabelAtIndex:(unsigned int)arg1;
- (void)clearDisambiguationLabels;
- (unsigned int)disambiguationLabelsCount;
- (void)addDisambiguationLabel:(id)arg1;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end


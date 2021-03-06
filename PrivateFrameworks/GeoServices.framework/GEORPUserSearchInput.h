//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOLatLng, GEOPDAutocompleteEntry, GEOPDPlace, NSString;

@interface GEORPUserSearchInput : PBCodable <NSCopying>
{
    GEOPDAutocompleteEntry *_autocompleteEntry;
    GEOLatLng *_coordinate;
    int _origin;
    GEOPDPlace *_place;
    NSString *_searchString;
    NSString *_singleLineAddressString;
    struct {
        unsigned int origin:1;
    } _has;
}

@property(retain, nonatomic) GEOLatLng *coordinate; // @synthesize coordinate=_coordinate;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(retain, nonatomic) NSString *singleLineAddressString; // @synthesize singleLineAddressString=_singleLineAddressString;
@property(nonatomic) BOOL hasOrigin;
@property(readonly, nonatomic) BOOL hasAutocompleteEntry;
@property(readonly, nonatomic) BOOL hasSingleLineAddressString;
@property(retain, nonatomic) GEOPDAutocompleteEntry *autocompleteEntry; // @synthesize autocompleteEntry=_autocompleteEntry;
@property(readonly, nonatomic) BOOL hasPlace;
@property(retain, nonatomic) GEOPDPlace *place; // @synthesize place=_place;
@property(readonly, nonatomic) BOOL hasCoordinate;
@property(retain, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
- (id)dictionaryRepresentation;
@property(nonatomic) int origin; // @synthesize origin=_origin;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
@property(readonly, nonatomic) BOOL hasSearchString;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, NSString;

@interface GEOCategory : PBCodable <NSCopying>
{
    long long _geoOntologyId;
    NSString *_alias;
    int _level;
    NSMutableArray *_localizedNames;
    struct {
        unsigned int geoOntologyId:1;
    } _has;
}

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(nonatomic) long long geoOntologyId; // @synthesize geoOntologyId=_geoOntologyId;
@property(nonatomic) BOOL hasGeoOntologyId;
- (id)localizedNamesAtIndex:(unsigned int)arg1;
- (void)clearLocalizedNames;
@property(retain, nonatomic) NSMutableArray *localizedNames; // @synthesize localizedNames=_localizedNames;
- (unsigned int)localizedNamesCount;
- (id)initWithPlaceDataCategory:(id)arg1;
- (void)addLocalizedNames:(id)arg1;
@property(retain, nonatomic) NSString *alias; // @synthesize alias=_alias;
- (id)dictionaryRepresentation;
@property(nonatomic) int level; // @synthesize level=_level;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end


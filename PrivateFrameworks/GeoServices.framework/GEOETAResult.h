//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOPlaceSearchResponse, NSMutableArray;

@interface GEOETAResult : PBCodable <NSCopying>
{
    unsigned int _distance;
    unsigned int _historicTravelTime;
    unsigned int _liveTravelTime;
    GEOPlaceSearchResponse *_placeSearchResponse;
    NSMutableArray *_sortedETAs;
    int _status;
    struct {
        unsigned int distance:1;
        unsigned int historicTravelTime:1;
        unsigned int liveTravelTime:1;
        unsigned int status:1;
    } _has;
}

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(nonatomic) unsigned int distance; // @synthesize distance=_distance;
@property(retain, nonatomic) NSMutableArray *sortedETAs; // @synthesize sortedETAs=_sortedETAs;
@property(retain, nonatomic) GEOPlaceSearchResponse *placeSearchResponse; // @synthesize placeSearchResponse=_placeSearchResponse;
@property(nonatomic) unsigned int liveTravelTime; // @synthesize liveTravelTime=_liveTravelTime;
@property(readonly, nonatomic) BOOL hasPlaceSearchResponse;
@property(nonatomic) BOOL hasLiveTravelTime;
- (id)sortedETAAtIndex:(unsigned int)arg1;
- (void)clearSortedETAs;
- (unsigned int)sortedETAsCount;
- (void)addSortedETA:(id)arg1;
@property(nonatomic) unsigned int historicTravelTime; // @synthesize historicTravelTime=_historicTravelTime;
@property(nonatomic) BOOL hasHistoricTravelTime;
@property(nonatomic) BOOL hasDistance;
@property(nonatomic) BOOL hasStatus;
@property(nonatomic) int status; // @synthesize status=_status;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end


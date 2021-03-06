//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOPDPlace, GEOPlace, GEORPMapLocation, NSMutableArray, NSString;

@interface GEORPProblemContext : PBCodable <NSCopying>
{
    CDStruct_612aec5b _sessionId;
    unsigned long long _originatingAuxiliaryControlIndex;
    NSMutableArray *_auxiliaryControls;
    NSMutableArray *_directionsRequests;
    NSMutableArray *_directionsResponses;
    NSString *_lastSearchString;
    GEORPMapLocation *_mapLocation;
    GEOPlace *_originalPlace;
    int _pinType;
    GEOPDPlace *_place;
    NSString *_tileStateLog;
    NSMutableArray *_visibleTileSets;
    struct {
        unsigned int sessionId:1;
        unsigned int originatingAuxiliaryControlIndex:1;
        unsigned int pinType:1;
    } _has;
}

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(retain, nonatomic) NSMutableArray *visibleTileSets; // @synthesize visibleTileSets=_visibleTileSets;
@property(nonatomic) unsigned long long originatingAuxiliaryControlIndex; // @synthesize originatingAuxiliaryControlIndex=_originatingAuxiliaryControlIndex;
@property(retain, nonatomic) NSMutableArray *auxiliaryControls; // @synthesize auxiliaryControls=_auxiliaryControls;
@property(retain, nonatomic) NSString *lastSearchString; // @synthesize lastSearchString=_lastSearchString;
@property(retain, nonatomic) NSMutableArray *directionsResponses; // @synthesize directionsResponses=_directionsResponses;
@property(retain, nonatomic) NSMutableArray *directionsRequests; // @synthesize directionsRequests=_directionsRequests;
@property(retain, nonatomic) NSString *tileStateLog; // @synthesize tileStateLog=_tileStateLog;
@property(retain, nonatomic) GEORPMapLocation *mapLocation; // @synthesize mapLocation=_mapLocation;
@property(retain, nonatomic) GEOPlace *originalPlace; // @synthesize originalPlace=_originalPlace;
@property(nonatomic) int pinType; // @synthesize pinType=_pinType;
@property(nonatomic) BOOL hasOriginatingAuxiliaryControlIndex;
@property(readonly, nonatomic) BOOL hasLastSearchString;
@property(readonly, nonatomic) BOOL hasTileStateLog;
@property(readonly, nonatomic) BOOL hasMapLocation;
@property(readonly, nonatomic) BOOL hasOriginalPlace;
@property(nonatomic) BOOL hasPinType;
@property(nonatomic) BOOL hasSessionId;
@property(nonatomic) CDStruct_612aec5b sessionId; // @synthesize sessionId=_sessionId;
- (id)auxiliaryControlAtIndex:(unsigned int)arg1;
- (void)clearAuxiliaryControls;
- (unsigned int)auxiliaryControlsCount;
- (id)directionsResponseAtIndex:(unsigned int)arg1;
- (void)clearDirectionsResponses;
- (unsigned int)directionsResponsesCount;
- (id)directionsRequestAtIndex:(unsigned int)arg1;
- (void)clearDirectionsRequests;
- (unsigned int)directionsRequestsCount;
- (id)visibleTileSetAtIndex:(unsigned int)arg1;
- (void)clearVisibleTileSets;
- (unsigned int)visibleTileSetsCount;
- (void)addAuxiliaryControl:(id)arg1;
- (void)addDirectionsResponse:(id)arg1;
- (void)addDirectionsRequest:(id)arg1;
- (void)addVisibleTileSet:(id)arg1;
@property(readonly, nonatomic) BOOL hasPlace;
@property(retain, nonatomic) GEOPDPlace *place; // @synthesize place=_place;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end


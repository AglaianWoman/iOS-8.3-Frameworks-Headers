//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class CKDPLocationBound, CKDPLocationCoordinate;

@interface CKDPLocation : PBCodable <NSCopying>
{
    CKDPLocationBound *_bounds;
    CKDPLocationCoordinate *_coordinate;
}

@property(retain, nonatomic) CKDPLocationCoordinate *coordinate; // @synthesize coordinate=_coordinate;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasBounds;
@property(readonly, nonatomic) BOOL hasCoordinate;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
@property(retain, nonatomic) CKDPLocationBound *bounds; // @synthesize bounds=_bounds;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface GEORPPlaceProblem : PBCodable <NSCopying>
{
    unsigned int _componentIndex;
    unsigned int _componentValueIndex;
    struct {
        unsigned int componentIndex:1;
        unsigned int componentValueIndex:1;
    } _has;
}

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(nonatomic) unsigned int componentValueIndex; // @synthesize componentValueIndex=_componentValueIndex;
@property(nonatomic) unsigned int componentIndex; // @synthesize componentIndex=_componentIndex;
@property(nonatomic) BOOL hasComponentValueIndex;
@property(nonatomic) BOOL hasComponentIndex;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

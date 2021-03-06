//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface GEORPFeatureHandle : PBCodable <NSCopying>
{
    CDStruct_1ef3fb1f *_styleAttributes;
    unsigned int _styleAttributesCount;
    unsigned int _styleAttributesSpace;
    unsigned int _featureIndex;
    unsigned int _featureTileX;
    unsigned int _featureTileY;
    unsigned int _featureTileZ;
    unsigned int _identifier;
    int _style;
    int _type;
    struct {
        unsigned int featureIndex:1;
        unsigned int featureTileX:1;
        unsigned int featureTileY:1;
        unsigned int featureTileZ:1;
        unsigned int identifier:1;
        unsigned int style:1;
        unsigned int type:1;
    } _has;
}

@property(nonatomic) BOOL hasStyle;
@property(nonatomic) unsigned int featureIndex; // @synthesize featureIndex=_featureIndex;
@property(readonly, nonatomic) CDStruct_1ef3fb1f *styleAttributes;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(nonatomic) BOOL hasType;
@property(nonatomic) unsigned int featureTileZ; // @synthesize featureTileZ=_featureTileZ;
@property(nonatomic) unsigned int featureTileY; // @synthesize featureTileY=_featureTileY;
@property(nonatomic) unsigned int featureTileX; // @synthesize featureTileX=_featureTileX;
- (void)setStyleAttributes:(CDStruct_1ef3fb1f *)arg1 count:(unsigned int)arg2;
@property(nonatomic) BOOL hasFeatureTileZ;
@property(nonatomic) BOOL hasFeatureTileY;
@property(nonatomic) BOOL hasFeatureTileX;
@property(nonatomic) BOOL hasFeatureIndex;
- (void)addStyleAttribute:(CDStruct_1ef3fb1f)arg1;
- (CDStruct_1ef3fb1f)styleAttributeAtIndex:(unsigned int)arg1;
@property(nonatomic) BOOL hasIdentifier;
- (void)clearStyleAttributes;
@property(readonly, nonatomic) unsigned int styleAttributesCount;
- (id)dictionaryRepresentation;
@property(nonatomic) int style; // @synthesize style=_style;
@property(nonatomic) unsigned int identifier; // @synthesize identifier=_identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) int type; // @synthesize type=_type;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end


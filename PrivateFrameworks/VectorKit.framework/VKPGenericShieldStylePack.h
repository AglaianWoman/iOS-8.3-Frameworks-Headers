//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray;

@interface VKPGenericShieldStylePack : PBCodable <NSCopying>
{
    NSMutableArray *_genericShields;
    NSMutableArray *_textureAtlas;
}

- (id)genericShieldAtIndex:(unsigned int)arg1;
- (void)clearGenericShields;
- (unsigned int)genericShieldsCount;
- (id)textureAtlasAtIndex:(unsigned int)arg1;
- (void)clearTextureAtlas;
- (unsigned int)textureAtlasCount;
- (void)addGenericShield:(id)arg1;
- (void)addTextureAtlas:(id)arg1;
@property(retain, nonatomic) NSMutableArray *genericShields; // @synthesize genericShields=_genericShields;
@property(retain, nonatomic) NSMutableArray *textureAtlas; // @synthesize textureAtlas=_textureAtlas;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end


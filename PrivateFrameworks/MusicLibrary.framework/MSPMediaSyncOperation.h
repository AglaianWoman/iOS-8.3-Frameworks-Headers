//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class MIPAlbum, MIPArtist, MIPGenre, MIPMediaItem, MIPMultiverseIdentifier, MIPPlaylist, MIPSeries;

@interface MSPMediaSyncOperation : PBCodable <NSCopying>
{
    MIPAlbum *_album;
    MIPArtist *_artist;
    MIPGenre *_genre;
    MIPMediaItem *_mediaItem;
    MIPMultiverseIdentifier *_multiverseId;
    int _operationType;
    MIPPlaylist *_playlist;
    MIPSeries *_series;
    struct {
        unsigned int operationType:1;
    } _has;
}

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(retain, nonatomic) MIPAlbum *album; // @synthesize album=_album;
@property(retain, nonatomic) MIPPlaylist *playlist; // @synthesize playlist=_playlist;
@property(retain, nonatomic) MIPMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(retain, nonatomic) MIPMultiverseIdentifier *multiverseId; // @synthesize multiverseId=_multiverseId;
@property(nonatomic) int operationType; // @synthesize operationType=_operationType;
@property(readonly, nonatomic) BOOL hasPlaylist;
@property(readonly, nonatomic) BOOL hasMediaItem;
@property(readonly, nonatomic) BOOL hasMultiverseId;
@property(nonatomic) BOOL hasOperationType;
@property(retain, nonatomic) MIPGenre *genre; // @synthesize genre=_genre;
@property(readonly, nonatomic) BOOL hasGenre;
@property(readonly, nonatomic) BOOL hasAlbum;
@property(retain, nonatomic) MIPSeries *series; // @synthesize series=_series;
@property(retain, nonatomic) MIPArtist *artist; // @synthesize artist=_artist;
@property(readonly, nonatomic) BOOL hasSeries;
@property(readonly, nonatomic) BOOL hasArtist;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSData;

@interface CKDPPackageManifestHeader : PBCodable <NSCopying>
{
    NSData *_signature;
    int _version;
    struct {
        unsigned int version:1;
    } _has;
}

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(nonatomic) BOOL hasVersion;
- (void)mergeFrom:(id)arg1;
@property(retain, nonatomic) NSData *signature; // @synthesize signature=_signature;
@property(readonly, nonatomic) BOOL hasSignature;
- (void).cxx_destruct;
@property(nonatomic) int version; // @synthesize version=_version;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end


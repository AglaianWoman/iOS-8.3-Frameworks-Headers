//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, NSString;

@interface GEOPDEntity : PBCodable <NSCopying>
{
    NSMutableArray *_altFaxs;
    NSMutableArray *_altTelephones;
    NSMutableArray *_altUrls;
    NSString *_fax;
    NSMutableArray *_localizedCategorys;
    NSMutableArray *_names;
    NSMutableArray *_spokenNames;
    NSString *_telephone;
    int _type;
    NSString *_url;
    BOOL _isDisputed;
    BOOL _isPermanentlyClosed;
    struct {
        unsigned int type:1;
        unsigned int isDisputed:1;
        unsigned int isPermanentlyClosed:1;
    } _has;
}

+ (id)entityForPlaceData:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(nonatomic) BOOL hasType;
@property(retain, nonatomic) NSMutableArray *altUrls; // @synthesize altUrls=_altUrls;
@property(retain, nonatomic) NSMutableArray *altFaxs; // @synthesize altFaxs=_altFaxs;
@property(retain, nonatomic) NSString *fax; // @synthesize fax=_fax;
@property(nonatomic) BOOL hasIsPermanentlyClosed;
@property(nonatomic) BOOL isPermanentlyClosed; // @synthesize isPermanentlyClosed=_isPermanentlyClosed;
@property(readonly, nonatomic) BOOL hasFax;
- (id)localizedCategoryAtIndex:(unsigned int)arg1;
- (void)clearLocalizedCategorys;
- (unsigned int)localizedCategorysCount;
- (void)clearSpokenNames;
- (id)nameAtIndex:(unsigned int)arg1;
- (void)clearNames;
- (id)altUrlAtIndex:(unsigned int)arg1;
- (void)clearAltUrls;
- (unsigned int)altUrlsCount;
- (id)altFaxAtIndex:(unsigned int)arg1;
- (void)clearAltFaxs;
- (unsigned int)altFaxsCount;
- (id)altTelephoneAtIndex:(unsigned int)arg1;
- (void)clearAltTelephones;
- (unsigned int)altTelephonesCount;
- (void)addLocalizedCategory:(id)arg1;
- (void)addSpokenName:(id)arg1;
- (void)addName:(id)arg1;
- (void)addAltUrl:(id)arg1;
- (void)addAltFax:(id)arg1;
- (void)addAltTelephone:(id)arg1;
@property(retain, nonatomic) NSMutableArray *localizedCategorys; // @synthesize localizedCategorys=_localizedCategorys;
@property(retain, nonatomic) NSMutableArray *spokenNames; // @synthesize spokenNames=_spokenNames;
@property(retain, nonatomic) NSMutableArray *names; // @synthesize names=_names;
@property(retain, nonatomic) NSMutableArray *altTelephones; // @synthesize altTelephones=_altTelephones;
- (id)spokenNameAtIndex:(unsigned int)arg1;
- (unsigned int)spokenNamesCount;
- (id)bestLocalizedName;
- (unsigned int)namesCount;
@property(readonly, nonatomic) BOOL hasUrl;
@property(nonatomic) BOOL hasIsDisputed;
@property(nonatomic) BOOL isDisputed; // @synthesize isDisputed=_isDisputed;
@property(retain, nonatomic) NSString *telephone; // @synthesize telephone=_telephone;
@property(readonly, nonatomic) BOOL hasTelephone;
- (id)dictionaryRepresentation;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) int type; // @synthesize type=_type;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end

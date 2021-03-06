//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, NSString;

@interface CKDPSubscriptionNotificationAlert : PBCodable <NSCopying>
{
    NSString *_actionLocKey;
    NSString *_launchImage;
    NSMutableArray *_localizedArguments;
    NSString *_localizedKey;
    NSString *_soundName;
    NSString *_text;
}

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(retain, nonatomic) NSString *launchImage; // @synthesize launchImage=_launchImage;
@property(retain, nonatomic) NSString *actionLocKey; // @synthesize actionLocKey=_actionLocKey;
@property(retain, nonatomic) NSMutableArray *localizedArguments; // @synthesize localizedArguments=_localizedArguments;
@property(retain, nonatomic) NSString *localizedKey; // @synthesize localizedKey=_localizedKey;
@property(readonly, nonatomic) BOOL hasSoundName;
@property(readonly, nonatomic) BOOL hasLaunchImage;
@property(readonly, nonatomic) BOOL hasActionLocKey;
@property(readonly, nonatomic) BOOL hasLocalizedKey;
- (id)localizedArgumentsAtIndex:(unsigned int)arg1;
- (void)clearLocalizedArguments;
- (unsigned int)localizedArgumentsCount;
- (void)addLocalizedArguments:(id)arg1;
@property(retain, nonatomic) NSString *soundName; // @synthesize soundName=_soundName;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly, nonatomic) BOOL hasText;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end


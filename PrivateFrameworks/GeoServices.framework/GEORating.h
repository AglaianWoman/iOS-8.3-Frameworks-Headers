//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, NSString;

@interface GEORating : PBCodable <NSCopying>
{
    double _maxScore;
    double _score;
    int _numberOfRatings;
    int _numberOfReviews;
    NSString *_provider;
    NSMutableArray *_reviews;
    NSString *_uRL;
    struct {
        unsigned int maxScore:1;
        unsigned int score:1;
        unsigned int numberOfRatings:1;
        unsigned int numberOfReviews:1;
    } _has;
}

@property(nonatomic) BOOL hasScore;
@property(nonatomic) double score; // @synthesize score=_score;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)initWithSampleSizeForUserRatingScore:(unsigned int)arg1 normalizedUserRatingScore:(float)arg2;
- (id)initWithPlaceDataRating:(id)arg1 reviews:(id)arg2;
@property(nonatomic) int numberOfReviews; // @synthesize numberOfReviews=_numberOfReviews;
@property(retain, nonatomic) NSMutableArray *reviews; // @synthesize reviews=_reviews;
@property(nonatomic) int numberOfRatings; // @synthesize numberOfRatings=_numberOfRatings;
@property(nonatomic) BOOL hasNumberOfReviews;
@property(readonly, nonatomic) BOOL hasProvider;
@property(nonatomic) BOOL hasNumberOfRatings;
@property(nonatomic) BOOL hasMaxScore;
@property(nonatomic) double maxScore; // @synthesize maxScore=_maxScore;
- (id)reviewAtIndex:(unsigned int)arg1;
- (void)clearReviews;
- (unsigned int)reviewsCount;
- (void)addReview:(id)arg1;
@property(retain, nonatomic) NSString *provider; // @synthesize provider=_provider;
@property(retain, nonatomic) NSString *uRL; // @synthesize uRL=_uRL;
@property(readonly, nonatomic) BOOL hasURL;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end


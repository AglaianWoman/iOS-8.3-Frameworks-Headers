//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SGIdentityName : NSObject
{
    NSString *_privFullName;
    NSString *_firstname;
    NSString *_surname;
    NSString *_middlename;
    NSString *_prefix;
    NSString *_suffix;
}

+ (id)nameWithString:(id)arg1;
+ (void)initialize;
@property(readonly, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
@property(readonly, nonatomic) NSString *fullName;
@property(readonly, nonatomic) NSString *suffix; // @synthesize suffix=_suffix;
@property(readonly, nonatomic) NSString *middlename; // @synthesize middlename=_middlename;
@property(readonly, nonatomic) NSString *firstname; // @synthesize firstname=_firstname;
- (id)segmentWesternNameWithNameParts:(id)arg1 andPrefix:(id)arg2;
- (id)initWithWesternName:(id)arg1;
- (id)initWithSpanishName:(id)arg1;
- (id)initWithVietnameseName:(id)arg1;
- (id)initWithKoreanName:(id)arg1;
- (id)initWithJapaneseName:(id)arg1;
- (id)initWithChineseName:(id)arg1;
- (id)toSGName;
@property(readonly, nonatomic) NSString *surname; // @synthesize surname=_surname;
- (void).cxx_destruct;
- (id)initWithString:(id)arg1;

@end

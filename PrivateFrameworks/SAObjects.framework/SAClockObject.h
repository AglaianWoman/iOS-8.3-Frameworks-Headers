//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSNumber, NSString;

@interface SAClockObject : SADomainObject
{
}

+ (id)objectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)object;
@property(copy, nonatomic) NSString *countryCode;
@property(copy, nonatomic) NSString *unlocalizedCountryName;
@property(copy, nonatomic) NSString *unlocalizedCityName;
@property(copy, nonatomic) NSNumber *alCityId;
@property(copy, nonatomic) NSString *timezoneId;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)encodedClassName;
@property(copy, nonatomic) NSNumber *longitude;
@property(copy, nonatomic) NSNumber *latitude;
- (id)groupIdentifier;
@property(copy, nonatomic) NSString *cityName;
@property(copy, nonatomic) NSString *countryName;

@end


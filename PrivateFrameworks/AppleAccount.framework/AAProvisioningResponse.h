//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppleAccount/AAAuthenticationResponse.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@interface AAProvisioningResponse : AAAuthenticationResponse
{
    NSDictionary *_icloud;
}

@property(readonly, nonatomic) NSString *appleID;
@property(readonly, nonatomic) NSArray *provisionedDataclasses;
@property(readonly, nonatomic) NSString *primaryEmail;
@property(readonly, nonatomic) NSString *iCloudAuthToken;
@property(readonly, nonatomic) NSString *lastName;
@property(readonly, nonatomic) NSString *firstName;
@property(readonly, nonatomic) NSString *fmipAuthToken;
@property(readonly, nonatomic) NSNumber *primaryEmailVerified;
@property(readonly, nonatomic) NSArray *appleIDAliases;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;
@property(readonly, nonatomic) NSDictionary *dataclassProperties;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSData, NSString;

@interface CKDTokenRegistrationURLRequest : CKDURLRequest
{
    NSData *_token;
    NSString *_bundleID;
    NSString *_apsEnvironmentString;
}

- (int)operationType;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (id)initWithToken:(id)arg1 bundleID:(id)arg2;
- (id)requestOperationClasses;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperations;
- (BOOL)requiresTokenRegistration;
- (id)flowControlKey;
@property(retain, nonatomic) NSString *apsEnvironmentString; // @synthesize apsEnvironmentString=_apsEnvironmentString;
@property(retain, nonatomic) NSData *token; // @synthesize token=_token;
- (void).cxx_destruct;

@end


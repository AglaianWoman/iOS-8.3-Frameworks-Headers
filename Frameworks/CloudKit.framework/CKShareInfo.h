//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class CKShareID, NSData, NSString;

@interface CKShareInfo : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_container;
    int _environment;
    CKShareID *_shareID;
    NSString *_etag;
    int _participantType;
    int _participantStatus;
    int _participantPermission;
    NSString *_ownerFirstName;
    NSString *_ownerLastName;
    NSString *_iWorkDocumentName;
    NSData *_protectedFullToken;
    NSData *_publicToken;
    NSData *_privateToken;
    NSData *_publicProtectionData;
    NSString *_publicProtectionEtag;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) int participantPermission; // @synthesize participantPermission=_participantPermission;
@property(nonatomic) int participantStatus; // @synthesize participantStatus=_participantStatus;
@property(retain, nonatomic) NSData *privateToken; // @synthesize privateToken=_privateToken;
@property(nonatomic) int participantType; // @synthesize participantType=_participantType;
@property(retain, nonatomic) NSString *ownerLastName; // @synthesize ownerLastName=_ownerLastName;
@property(retain, nonatomic) NSString *ownerFirstName; // @synthesize ownerFirstName=_ownerFirstName;
@property(retain, nonatomic) NSString *publicProtectionEtag; // @synthesize publicProtectionEtag=_publicProtectionEtag;
@property(retain, nonatomic) NSData *publicProtectionData; // @synthesize publicProtectionData=_publicProtectionData;
@property(retain, nonatomic) NSData *protectedFullToken; // @synthesize protectedFullToken=_protectedFullToken;
@property(retain, nonatomic) NSData *publicToken; // @synthesize publicToken=_publicToken;
@property(retain, nonatomic) NSString *iWorkDocumentName; // @synthesize iWorkDocumentName=_iWorkDocumentName;
- (id)ckShortDescription;
@property(nonatomic) int environment; // @synthesize environment=_environment;
- (id)CKPropertiesDescription;
@property(retain, nonatomic) CKShareID *shareID; // @synthesize shareID=_shareID;
@property(retain, nonatomic) NSString *etag; // @synthesize etag=_etag;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *container; // @synthesize container=_container;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

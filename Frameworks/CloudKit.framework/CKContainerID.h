//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface CKContainerID : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_containerIdentifier;
    int _environment;
}

+ (BOOL)supportsSecureCoding;
- (id)initWithDictionaryRepresentation:(id)arg1;
@property(readonly, nonatomic) NSString *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
- (id)CKPropertiesDescription;
- (id)initWithContainerIdentifier:(id)arg1 environment:(int)arg2;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) int environment; // @synthesize environment=_environment;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


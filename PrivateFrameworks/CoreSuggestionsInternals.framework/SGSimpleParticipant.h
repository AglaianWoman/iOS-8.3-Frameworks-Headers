//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class SGIdentityKey;

@interface SGSimpleParticipant : NSObject <NSCopying>
{
    unsigned int _role;
    SGIdentityKey *_identityKey;
}

+ (id)participantWithKey:(id)arg1 roleType:(unsigned int)arg2;
- (BOOL)isEqualToSimpleParticipant:(id)arg1;
@property(retain, nonatomic) SGIdentityKey *identityKey; // @synthesize identityKey=_identityKey;
- (id)initWithKey:(id)arg1 roleType:(unsigned int)arg2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
@property(nonatomic) unsigned int role; // @synthesize role=_role;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPMediaPredicate.h>

#import "MPPProtobufferCoding.h"

@class NSSet, NSString;

@interface _MPMediaSearchStringPredicate : MPMediaPredicate <MPPProtobufferCoding>
{
    NSString *_searchString;
    NSSet *_properties;
}

+ (id)predicateWithSearchString:(id)arg1 forProperties:(id)arg2;
@property(copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(copy, nonatomic) NSSet *properties; // @synthesize properties=_properties;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_ML3PredicateForEntityClass:(Class)arg1;
- (id)ML3PredicateForTrack;
- (id)ML3PredicateForContainer;
- (id)protobufferEncodableObject;
- (id)initWithProtobufferDecodableObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


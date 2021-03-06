//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLContainerChange.h>

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface CPLAlbumChange : CPLContainerChange <NSSecureCoding, NSCopying>
{
    NSString *_keyAssetIdentifier;
    BOOL _albumSortAscending;
    unsigned int _albumType;
    NSString *_name;
    int _position;
    NSString *_parentIdentifier;
    unsigned int _albumSortType;
}

@property(nonatomic) BOOL albumSortAscending; // @synthesize albumSortAscending=_albumSortAscending;
@property(nonatomic) unsigned int albumSortType; // @synthesize albumSortType=_albumSortType;
@property(nonatomic) unsigned int albumType; // @synthesize albumType=_albumType;
@property(copy, nonatomic) NSString *parentIdentifier; // @synthesize parentIdentifier=_parentIdentifier;
- (id)propertiesDescription;
- (void)setRelatedIdentifier:(id)arg1;
- (id)relatedIdentifier;
- (id)translateToClientChangeUsingIDMapping:(id)arg1 error:(id *)arg2;
- (id)translateToCloudChangeUsingIDMapping:(id)arg1 error:(id *)arg2;
- (id)identifiersForMapping;
- (void).cxx_destruct;
@property(nonatomic) int position; // @synthesize position=_position;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;

@end


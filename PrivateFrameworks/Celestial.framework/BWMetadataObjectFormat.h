//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Celestial/BWFormat.h>

@class NSArray;

@interface BWMetadataObjectFormat : BWFormat
{
    NSArray *_metadataIdentifiers;
}

+ (id)formatWithMetadataIdentifiers:(id)arg1;
+ (void)initialize;
- (unsigned long)mediaType;
- (id)_initWithMetadataIdentifiers:(id)arg1;
- (id)debugDescription;
- (id)description;
- (void)dealloc;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CompassAtlasManifest;

@interface CompassAtlas : NSObject
{
    unsigned int _texName;
    CompassAtlasManifest *_manifest;
    struct CGSize _size;
}

- (CDStruct_3ec5fddd)metadataForImageNamed:(id)arg1;
- (id)initWithImageData:(char *)arg1 manifest:(id)arg2;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)dealloc;
- (void)bind;

@end

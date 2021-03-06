//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEOResourceManifestTileGroupObserver.h"
#import "NSXMLParserDelegate.h"

@class GEOAltitudeManifestReserved, NSString;

@interface GEOAltitudeManifest : NSObject <NSXMLParserDelegate, GEOResourceManifestTileGroupObserver>
{
    GEOAltitudeManifestReserved *_reserved;
}

+ (id)sharedManager;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (unsigned int)versionForRegion:(unsigned int)arg1;
- (id)tripIdsForRegion:(unsigned int)arg1;
- (id)tourIdsForRegion:(unsigned int)arg1;
- (id)nameForRegion:(unsigned int)arg1;
- (BOOL)isValidTourId:(unsigned long long)arg1;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parseManifest:(id)arg1;
- (void)_reloadManifest;
- (id)availableRegions;
- (BOOL)parseXml:(id)arg1;
- (id)initWithoutObserver;
- (void)commonInit;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEOResourceManifestTileGroupObserver.h"

@class NSArray, NSLock, NSMapTable, NSString, VKGenericShieldGenerator, VKResourceManager;

@interface VKShieldManager : NSObject <GEOResourceManifestTileGroupObserver>
{
    struct _GEOGenericContainer<md::ShieldCacheKey, VKShieldArtwork *, std::__1::hash<md::ShieldCacheKey>, std::__1::equal_to<md::ShieldCacheKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0, geo::GEOGenericContainerLockingTag, detail::_default_pointer_type> _artworkPool;
    struct _GEOGenericContainer<md::GenericShieldCacheKey, VKShieldArtwork *, std::__1::hash<md::GenericShieldCacheKey>, std::__1::equal_to<md::GenericShieldCacheKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0, geo::GEOGenericContainerLockingTag, detail::_default_pointer_type> _genericArtworks;
    unsigned int _tileGroupIdentifier;
    VKResourceManager *_resourceManager;
    VKGenericShieldGenerator *_genericShieldGenerator;
    NSArray *_nonRegionalResourceNames;
    NSMapTable *_atlases;
    NSLock *_atlasesLock;
    NSMapTable *_indexes;
    NSLock *_indexesLock;
}

+ (id)sharedManager;
- (id)imageForShieldType:(long long)arg1 shieldText:(id)arg2 contentScale:(float)arg3 size:(int)arg4 idiom:(int)arg5 colors:(CDStruct_aed172a0 *)arg6 featureType:(unsigned int)arg7;
- (id)artworkForShieldType:(long long)arg1 textLength:(unsigned int)arg2 contentScale:(float)arg3 size:(int)arg4 idiom:(int)arg5 colors:(CDStruct_aed172a0 *)arg6 featureType:(unsigned int)arg7;
- (id)artworkForShieldType:(long long)arg1 textLength:(unsigned int)arg2 contentScale:(float)arg3 size:(int)arg4 idiom:(int)arg5 mapRect:(CDStruct_90e2a262)arg6 colors:(CDStruct_aed172a0 *)arg7 featureType:(unsigned int)arg8;
- (id)_atlasForName:(id)arg1;
- (id)_indexForName:(id)arg1;
- (id)_nonRegionalIndexesAndPacks;
- (id)artworkForShieldName:(id)arg1 textLength:(unsigned int)arg2 contentScale:(float)arg3 resourceNames:(id)arg4 size:(int)arg5 idiom:(int)arg6 numberOfLines:(unsigned int)arg7 colors:(CDStruct_aed172a0 *)arg8;
- (id)artworkForShieldType:(long long)arg1 textLength:(unsigned int)arg2 contentScale:(float)arg3 resourceNames:(id)arg4 style:(id)arg5 size:(int)arg6 idiom:(int)arg7 numberOfLines:(unsigned int)arg8 colors:(CDStruct_aed172a0 *)arg9 featureType:(unsigned int)arg10;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (id)initWithTileGroupIdentifier:(unsigned int)arg1 resourceManager:(id)arg2;
- (void).cxx_destruct;
- (void)purge;
- (id).cxx_construct;
- (void)_didReceiveMemoryWarning:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

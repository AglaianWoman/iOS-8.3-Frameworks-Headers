//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PLSMetadataUtilities : NSObject
{
}

+ (id)allAlbumsDetailsWriteToPath:(id)arg1;
+ (id)allAssetsDetailsWriteToPath:(id)arg1 includingLocal:(BOOL)arg2 includingFingerprints:(BOOL)arg3 forAlbumTitled:(id)arg4;
+ (id)_nameForAdjustmentType:(int)arg1;
+ (id)_detailsForAlbum:(id)arg1;
+ (BOOL)_writeDetails:(id)arg1 forEntityNamed:(id)arg2 toFilepath:(id)arg3 withDefaultFilename:(id)arg4;
+ (void)_writeJSONForAssets:(id)arg1 toFile:(id)arg2;
+ (id)_detailsForAsset:(id)arg1 includingLocal:(BOOL)arg2 includingFingerprints:(BOOL)arg3;
+ (id)_allAlbumsInPhotoLibrary:(id)arg1;
+ (void)_writeData:(id)arg1 toFile:(id)arg2;

@end

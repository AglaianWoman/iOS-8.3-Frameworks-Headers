//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUI/PUPhotosGridViewController.h>

@class PHAssetCollection, PUPhotosPanoramaViewControllerSpec, PUSectionedGridLayout;

@interface PUPhotosPanoramaViewController : PUPhotosGridViewController
{
    PUPhotosPanoramaViewControllerSpec *_panoramaSpec;
    PHAssetCollection *_userPanoAlbum;
}

- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)arg1;
@property(retain, nonatomic) PUPhotosPanoramaViewControllerSpec *panoramaSpec; // @synthesize panoramaSpec=_panoramaSpec;
- (void)updatePhotoViewContent:(id)arg1 withThumbnailImage:(id)arg2;
- (void)rotatePhotoViewToHorizontalIfNeeded:(id)arg1 withAsset:(id)arg2;
@property(retain, nonatomic) PHAssetCollection *userPanoAlbum; // @synthesize userPanoAlbum=_userPanoAlbum;
- (BOOL)_hasScrollableContent;
- (id)imageRequestOptionsForAsset:(id)arg1 pixelSize:(inout struct CGSize *)arg2;
- (void)_updatePhotoDecorationForCell:(id)arg1 animated:(BOOL)arg2;
- (void)configureGlobalFooterView:(id)arg1;
- (BOOL)wantsGlobalFooter;
- (BOOL)canBeginStackCollapseTransition;
- (void)updateLayoutMetrics;
- (id)newGridLayout;
- (void)configureGridCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (int)cellFillMode;
- (void)configureSupplementaryView:(id)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3 animated:(BOOL)arg4;
- (id)initWithSpec:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) PUSectionedGridLayout *mainGridLayout;

@end


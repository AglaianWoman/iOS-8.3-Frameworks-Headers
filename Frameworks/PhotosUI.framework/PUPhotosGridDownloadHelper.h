//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, PUPhotosGridViewController, PUResourceDownloadRequest;

@interface PUPhotosGridDownloadHelper : NSObject
{
    PUResourceDownloadRequest *_currentResourceDownloadRequest;
    NSString *_currentGridProgressIdentifier;
    CDUnknownBlockType _currentDownloadSuccessHandler;
    PUPhotosGridViewController *_gridViewController;
}

- (void).cxx_destruct;
- (void)_updateDownloadProgress;
- (void)_downloadForRequest:(id)arg1 didCompleteWithSuccess:(BOOL)arg2 canceled:(BOOL)arg3 error:(id)arg4;
- (void)_startDownloadingRequiredResourcesForRequest:(id)arg1 inCollection:(id)arg2;
@property(readonly, nonatomic) __weak PUPhotosGridViewController *gridViewController; // @synthesize gridViewController=_gridViewController;
- (void)handleDownloadOfAsset:(id)arg1 inCollection:(id)arg2 withSuccessHandler:(CDUnknownBlockType)arg3;
- (void)cancelCurrentAssetDownload;
- (id)initWithGridViewController:(id)arg1;

@end

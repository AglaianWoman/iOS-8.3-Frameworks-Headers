//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL, SKUIItem, SKUIStorePageSectionsViewController;

@protocol SKUIStorePageSectionsDelegate <NSObject>

@optional
- (void)sectionsViewControllerDidDismissOverlayController:(SKUIStorePageSectionsViewController *)arg1;
- (BOOL)sectionsViewController:(SKUIStorePageSectionsViewController *)arg1 showStorePageForURL:(NSURL *)arg2;
- (BOOL)sectionsViewController:(SKUIStorePageSectionsViewController *)arg1 showProductPageForItem:(SKUIItem *)arg2;
- (void)sectionsViewControllerDidScroll:(SKUIStorePageSectionsViewController *)arg1;
@end


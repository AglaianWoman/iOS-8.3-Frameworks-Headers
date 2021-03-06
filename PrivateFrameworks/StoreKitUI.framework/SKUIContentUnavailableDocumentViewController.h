//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewController.h>

#import "SKUIArtworkRequestDelegate.h"
#import "SKUIDocumentViewController.h"
#import "SKUILayoutCacheDelegate.h"

@class NSString, SKUIContentUnavailableTemplateElement, SKUIContentUnavailableView, SKUILayoutCache, SKUIViewElementLayoutContext;

@interface SKUIContentUnavailableDocumentViewController : SKUIViewController <SKUIArtworkRequestDelegate, SKUILayoutCacheDelegate, SKUIDocumentViewController>
{
    SKUIContentUnavailableView *_contentUnavailableView;
    SKUIViewElementLayoutContext *_layoutContext;
    SKUIContentUnavailableTemplateElement *_templateElement;
    SKUILayoutCache *_textLayoutCache;
}

- (void)_reloadContentUnavailableView:(id)arg1 width:(float)arg2;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)initWithTemplateElement:(id)arg1;
- (void)layoutCacheDidFinishBatch:(id)arg1;
- (void)documentDidUpdate:(id)arg1;
- (id)_layoutContext;
- (struct UIEdgeInsets)_contentInsets;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


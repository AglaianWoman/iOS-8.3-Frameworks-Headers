//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SUClientInterfaceDelegatePrivate.h"

@class IKAppContext, NSArray, NSBundle, NSDictionary, NSMapTable, NSMutableArray, NSString, SKUIApplicationController, SKUILocalizedStringDictionary, SKUIStoreDialogController, SKUIURL, SKUIURLBag, SSURLBag, SSVPlatformContext, SUClientInterface;

@interface SKUIClientContext : NSObject <SUClientInterfaceDelegatePrivate>
{
    NSString *_additionalPurchaseParameters;
    SKUIApplicationController *_applicationController;
    NSBundle *_bundle;
    SUClientInterface *_clientInterface;
    NSDictionary *_configurationDictionary;
    SKUIStoreDialogController *_dialogController;
    SKUILocalizedStringDictionary *_localizedStrings;
    NSString *_metricsConfigurationIdentifier;
    NSMapTable *_metricsPageContexts;
    NSMutableArray *_navigationHistory;
    NSString *_navigationHistoryPersistenceKey;
    NSString *_purchaseAffiliateIdentifier;
    SKUIURL *_purchaseReferrerURL;
    int _purchaseURLBagType;
    IKAppContext *_scriptAppContext;
    NSString *_storeFrontIdentifier;
    SKUIURLBag *_urlBag;
    int _userInterfaceIdiomOverride;
}

+ (id)_configurationDictionaryWithBagDictionary:(id)arg1;
+ (id)_cachePathForStoreFrontIdentifier:(id)arg1;
+ (id)defaultContext;
@property(nonatomic) int userInterfaceIdiomOverride; // @synthesize userInterfaceIdiomOverride=_userInterfaceIdiomOverride;
@property(retain, nonatomic, getter=_scriptAppContext, setter=_setScriptAppContext:) IKAppContext *_scriptAppContext; // @synthesize _scriptAppContext;
@property(copy, nonatomic) SKUIURL *purchaseReferrerURL; // @synthesize purchaseReferrerURL=_purchaseReferrerURL;
@property(copy, nonatomic) NSString *navigationHistoryPersistenceKey; // @synthesize navigationHistoryPersistenceKey=_navigationHistoryPersistenceKey;
@property(copy, nonatomic) NSString *metricsConfigurationIdentifier; // @synthesize metricsConfigurationIdentifier=_metricsConfigurationIdentifier;
- (void)loadValueForConfigurationKey:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)tabBarItemsForStyle:(int)arg1;
- (void)pushNavigationHistoryPageIdentifier:(id)arg1;
@property(readonly, nonatomic) NSArray *navigationHistory;
- (id)_navigationHistory;
@property(nonatomic, getter=_applicationController, setter=_setApplicationController:) __weak SKUIApplicationController *_applicationController; // @synthesize _applicationController;
- (void)_setValue:(id)arg1 forConfigurationKey:(id)arg2;
- (id)localizedAlertWithError:(id)arg1;
- (id)newLegacyStorePageViewControllerForURLResponse:(id)arg1;
- (void)sendOnPageResponseWithDocument:(id)arg1 data:(id)arg2 URLResponse:(id)arg3 performanceMetrics:(id)arg4;
- (id)metricsPageContextForViewController:(id)arg1;
- (void)sendOnXEventWithDictionary:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) SSURLBag *URLBag;
- (void)getDefaultMetricsControllerWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)localizedStringForKey:(id)arg1 inTable:(id)arg2;
@property(readonly, nonatomic) SSVPlatformContext *platformContext;
- (id)valueForConfigurationKey:(id)arg1;
- (void)customizePurchase:(id)arg1;
- (id)scriptInterfaceForClientInterface:(id)arg1;
- (void)clientInterface:(id)arg1 presentDialog:(id)arg2;
- (void)clientInterface:(id)arg1 dispatchXEvent:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)clientInterface:(id)arg1 dispatchOnPageResponseWithData:(id)arg2 response:(id)arg3;
- (id)initWithConfigurationDictionary:(id)arg1;
- (void)setMetricsPageContext:(id)arg1 forViewController:(id)arg2;
- (void)_setPurchaseURLBagType:(int)arg1;
- (void)_setPurchaseAffiliateIdentifier:(id)arg1;
- (void)_setAdditionalPurchaseParameters:(id)arg1;
@property(readonly, nonatomic) SUClientInterface *clientInterface; // @synthesize clientInterface=_clientInterface;
- (void).cxx_destruct;
- (id)localizedStringForKey:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
@property(readonly, nonatomic) NSString *storeFrontIdentifier; // @synthesize storeFrontIdentifier=_storeFrontIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SKUICacheCoding.h"

@class NSDictionary, NSMutableDictionary, NSString;

@interface SKUIItemOffer : NSObject <SKUICacheCoding>
{
    NSString *_actionParameters;
    NSString *_buttonText;
    NSString *_confirmationText;
    long long _fileSize;
    NSString *_fileSizeText;
    NSString *_offerTypeString;
    float _price;
    NSString *_variantIdentifier;
}

@property(readonly, nonatomic) NSString *confirmationText; // @synthesize confirmationText=_confirmationText;
@property(readonly, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(readonly, nonatomic) NSString *actionParameters; // @synthesize actionParameters=_actionParameters;
- (void)_addActionParameterWithName:(id)arg1 value:(id)arg2;
@property(readonly, nonatomic) NSDictionary *lookupDictionary;
@property(readonly, nonatomic) NSString *fileSizeText;
- (id)initWithRedownloadToken:(id)arg1;
- (id)initWithOfferDictionary:(id)arg1;
- (id)initWithLookupDictionary:(id)arg1;
- (id)initWithButtonText:(id)arg1;
- (void)_setFileSizeWithFlavors:(id)arg1;
- (void)_setFileSizeWithAssets:(id)arg1;
@property(readonly, nonatomic) NSMutableDictionary *cacheRepresentation;
- (id)initWithCacheRepresentation:(id)arg1;
@property(readonly, nonatomic) NSString *variantIdentifier; // @synthesize variantIdentifier=_variantIdentifier;
@property(readonly, nonatomic) long long fileSize; // @synthesize fileSize=_fileSize;
- (void).cxx_destruct;
@property(readonly, nonatomic) float price; // @synthesize price=_price;
@property(readonly, nonatomic) int offerType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


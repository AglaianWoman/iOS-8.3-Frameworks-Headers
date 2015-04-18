//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString, PFUbiquityLocation;

@interface PFUbiquityExportContext : NSObject
{
    NSMutableDictionary *_storeNameToStoreExportContext;
    NSMutableDictionary *_ubiquityRootPathToStack;
    NSString *_localPeerID;
    PFUbiquityLocation *_ubiquityRootLocation;
    BOOL _useLocalStorage;
}

- (id)description;
- (void)dealloc;
@property(nonatomic) BOOL useLocalStorage; // @synthesize useLocalStorage=_useLocalStorage;
- (id)storeExportContextForStore:(id)arg1;
- (id)storeExportContextForStoreName:(id)arg1;
- (id)initWithLocalPeerID:(id)arg1 andUbiquityRootLocation:(id)arg2;
@property(readonly, nonatomic) NSString *localPeerID; // @synthesize localPeerID=_localPeerID;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SKUICacheCoding.h"

@class NSDictionary, NSMutableDictionary, NSString, NSURL;

@interface SKUIArtwork : NSObject <SKUICacheCoding>
{
    int _height;
    NSURL *_url;
    NSString *_urlString;
    int _width;
}

- (id)initWithURL:(id)arg1 size:(struct CGSize)arg2;
@property(readonly, nonatomic, getter=_lookupDictionary) NSDictionary *_lookupDictionary;
- (id)initWithArtworkDictionary:(id)arg1;
@property(readonly, nonatomic) NSMutableDictionary *cacheRepresentation;
- (id)initWithCacheRepresentation:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *URL;
@property(readonly, nonatomic) int height; // @synthesize height=_height;
@property(readonly, nonatomic) int width; // @synthesize width=_width;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) struct CGSize size;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


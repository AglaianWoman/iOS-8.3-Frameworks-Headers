//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, PHAsset;

@interface PHAssetPTPProperties : NSObject
{
    PHAsset *_asset;
    NSString *_exifTimestampString;
    NSString *_importSessionID;
}

@property(readonly, nonatomic) NSString *importSessionID; // @synthesize importSessionID=_importSessionID;
@property(readonly, nonatomic) __weak PHAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *exifTimestampString; // @synthesize exifTimestampString=_exifTimestampString;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2;

@end


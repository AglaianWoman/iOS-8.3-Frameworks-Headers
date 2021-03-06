//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ICCameraFile, NSDictionary, NSString;

@interface PLCameraImportItemRepresentation : NSObject
{
    ICCameraFile *_cameraFile;
    NSDictionary *_metadata;
    BOOL _canRequestMetadata;
    BOOL _canRequestThumbnail;
    NSString *_path;
    BOOL _inDatabase;
}

- (id)fileExtension;
- (BOOL)isAudio;
- (BOOL)isJPEG;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(nonatomic) BOOL inDatabase; // @synthesize inDatabase=_inDatabase;
@property(retain, nonatomic) ICCameraFile *cameraFile; // @synthesize cameraFile=_cameraFile;
- (BOOL)isRaw;
@property(nonatomic) BOOL canRequestMetadata; // @synthesize canRequestMetadata=_canRequestMetadata;
- (id)initWithCameraFile:(id)arg1;
- (BOOL)isInDatabaseForce:(BOOL)arg1;
- (BOOL)isMovie;
@property(nonatomic) BOOL canRequestThumbnail; // @synthesize canRequestThumbnail=_canRequestThumbnail;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)description;
- (void)dealloc;

@end


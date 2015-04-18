//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableData, NSString;

@interface PTPStorageInfoDataset : NSObject
{
    unsigned short _storageType;
    unsigned short _filesystemType;
    unsigned short _accessCapability;
    unsigned long long _maxCapacity;
    unsigned long long _freeSpaceInBytes;
    unsigned long _freeSpaceInImages;
    NSString *_storageDescription;
    NSString *_volumeLabel;
    NSMutableData *_content;
    BOOL _dirty;
    BOOL _readOnlyObject;
}

- (void)setContent:(id)arg1;
- (void)setVolumeLabel:(id)arg1;
- (id)volumeLabel;
- (void)setStorageDescription:(id)arg1;
- (id)storageDescription;
- (void)setFreeSpaceInImages:(unsigned long)arg1;
- (unsigned long)freeSpaceInImages;
- (void)setFreeSpaceInBytes:(unsigned long long)arg1;
- (unsigned long long)freeSpaceInBytes;
- (void)setAccessCapability:(unsigned short)arg1;
- (void)setFilesystemType:(unsigned short)arg1;
- (unsigned short)filesystemType;
- (void)setStorageType:(unsigned short)arg1;
- (unsigned short)storageType;
- (void)updateContent;
- (unsigned short)accessCapability;
- (id)initWithMutableData:(id)arg1;
- (unsigned long long)maxCapacity;
- (void)setMaxCapacity:(unsigned long long)arg1;
- (id)content;
- (id)initWithData:(id)arg1;
- (id)description;
- (id)init;
- (void)dealloc;

@end

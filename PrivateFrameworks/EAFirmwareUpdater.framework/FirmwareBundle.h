//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface FirmwareBundle : NSObject
{
    NSString *_bundleDescription;
    NSData *_firmwareImage;
    NSData *_hash;
    NSData *_certificate;
    NSData *_signature;
    unsigned int _productIDCode;
    unsigned int _firmwareImageBaseAddress;
    unsigned int _firmwareImageSize;
}

+ (id)defaultBundlePath;
@property(readonly) unsigned int firmwareImageSize; // @synthesize firmwareImageSize=_firmwareImageSize;
@property(readonly) unsigned int firmwareImageBaseAddress; // @synthesize firmwareImageBaseAddress=_firmwareImageBaseAddress;
@property(readonly) NSData *firmwareImage; // @synthesize firmwareImage=_firmwareImage;
- (id)initWithBundleName:(id)arg1;
- (void)parseSRECLine:(id)arg1 intoImage:(id)arg2;
- (id)parseResourceFileIntoData:(id)arg1;
- (id)parseMSP430TXTFile:(id)arg1 withDefaultByteValue:(unsigned char)arg2;
- (id)parseSRECFile:(id)arg1 withDefaultByteValue:(unsigned char)arg2;
- (void)parseFileName:(id)arg1 intoPath:(id *)arg2 andExtension:(id *)arg3;
@property(readonly) unsigned int productIDCode; // @synthesize productIDCode=_productIDCode;
- (id)initWithBundlePath:(id)arg1;
@property(readonly) NSData *certificate; // @synthesize certificate=_certificate;
@property(readonly) NSData *signature; // @synthesize signature=_signature;
- (id)initWithBundle:(id)arg1;
- (id)description;
@property(readonly) NSData *hash; // @synthesize hash=_hash;
- (void)dealloc;

@end


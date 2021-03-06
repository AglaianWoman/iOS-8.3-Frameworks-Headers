//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface VMUClassInfo : NSObject <NSCoding>
{
    CDUnknownBlockType _reader;
    unsigned long long _remoteIsa;
    unsigned long long _specificInstance;
    unsigned int _remotePointerSize;
    unsigned int _ivarCount;
    unsigned int _superclassOffset;
    unsigned int _instanceSize;
    unsigned int _ro_flags;
    unsigned int _rw_flags;
    struct objc_ivar **_localIvarList;
    int *_ivarScanSizes;
    unsigned int _remoteType;
    NSString *_remoteClassName;
    NSString *_remoteBinaryName;
    VMUClassInfo *_superclassLayout;
    const char *_weakLayout;
    const char *_strongLayout;
    const char *_extendedLayout;
    char *_scanMap;
    BOOL _hasSpecificLayout;
}

+ (id)descriptionForTypeEncoding:(const char *)arg1 ivarName:(const char *)arg2;
+ (id)classInfoWithClassName:(id)arg1 binaryName:(id)arg2 type:(int)arg3;
+ (void)initialize;
@property(readonly) VMUClassInfo *superclassInfo; // @synthesize superclassInfo=_superclassLayout;
@property(readonly) unsigned long long specificInstance; // @synthesize specificInstance=_specificInstance;
@property(readonly) unsigned int instanceSize; // @synthesize instanceSize=_instanceSize;
@property(readonly) BOOL isMetaClass;
@property(readonly) NSString *shortIvarDescription;
- (struct objc_ivar *)ivarWithOffset:(unsigned long long)arg1;
- (void)scanObject:(unsigned long long)arg1 ofSize:(unsigned int)arg2 withBlock:(CDUnknownBlockType)arg3;
- (id)initWithIsaPointer:(unsigned int)arg1 symbolicator:(struct _CSTypeRef)arg2;
- (id)initWithRealizedClass:(unsigned long long)arg1 infoMap:(id)arg2 symbolicator:(struct _CSTypeRef)arg3 type:(int)arg4 memoryReader:(CDUnknownBlockType)arg5;
@property(readonly) NSString *fullIvarDescription;
- (void)enumerateIvarsWithBlock:(CDUnknownBlockType)arg1;
- (void)setMemoryReader:(CDUnknownBlockType)arg1;
- (void)_setExtendedLayout:(const char *)arg1;
- (id)_specificCopy:(unsigned long long)arg1 instanceSize:(unsigned int)arg2 superclassOffset:(unsigned int)arg3;
- (void)enumerateKnownSublayoutsForObject:(unsigned long long)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)_instanceSpecificInfoForObject:(unsigned long long)arg1 pointerSize:(unsigned int)arg2 reader:(CDUnknownBlockType)arg3;
- (void)enumerateScanLocationsToSize:(unsigned int)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)instanceSpecificInfoForObject:(unsigned long long)arg1;
- (id)_ivarDescription:(unsigned int)arg1 withSpacing:(unsigned int)arg2;
- (void)_logDescriptionWithSuperclasses:(BOOL)arg1 indentation:(int)arg2 toLogger:(CDUnknownBlockType)arg3;
@property(readonly) BOOL hasCppConstructorOrDestructor;
@property(readonly) int infoType;
@property(readonly) unsigned long long remoteIsa; // @synthesize remoteIsa=_remoteIsa;
- (id)initWithClass:(unsigned long long)arg1 infoMap:(id)arg2 symbolicator:(struct _CSTypeRef)arg3 type:(int)arg4 memoryReader:(CDUnknownBlockType)arg5;
@property(readonly) NSString *binaryName; // @synthesize binaryName=_remoteBinaryName;
- (void)_setClassNameWithAddress:(unsigned long long)arg1;
- (id)_initWithClass:(unsigned long long)arg1 realizedOnly:(BOOL)arg2 infoMap:(id)arg3 symbolicator:(struct _CSTypeRef)arg4 type:(int)arg5 memoryReader:(CDUnknownBlockType)arg6;
@property(readonly) BOOL isRootClass;
- (void)_parseIvarsAndLayouts;
- (const char *)_copyRemoteLayout:(unsigned long long)arg1;
- (struct objc_ivar *)_copyRemoteIvarAt:(unsigned long long)arg1;
@property(readonly) BOOL isRealized;
- (unsigned long long)_readRemotePointerAt:(unsigned long long)arg1;
@property(readonly, nonatomic) BOOL hasSpecificLayout;
- (void)_processARRLayout:(const char *)arg1 scanType:(int)arg2;
@property(readonly) BOOL isARR;
- (void)_processExtendedLayout:(const char *)arg1;
- (void)_faultScanMap;
- (int)_readRemoteIntAt:(unsigned long long)arg1;
- (const char *)_copyRemoteStringAt:(unsigned long long)arg1;
- (id)initWithClassName:(id)arg1 binaryName:(id)arg2 type:(int)arg3;
@property(readonly) NSString *typeName;
@property(readonly) NSString *className; // @synthesize className=_remoteClassName;
- (id)type;
- (id)debugDescription;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end


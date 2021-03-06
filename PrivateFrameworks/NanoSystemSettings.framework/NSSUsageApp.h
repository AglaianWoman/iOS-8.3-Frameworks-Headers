//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString;

@interface NSSUsageApp : NSObject <NSSecureCoding>
{
    NSString *_name;
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    unsigned long long _staticSize;
    unsigned long long _dynamicSize;
    unsigned long long _dataSize;
    unsigned long long _totalSize;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) unsigned long long dataSize; // @synthesize dataSize=_dataSize;
@property(nonatomic) unsigned long long dynamicSize; // @synthesize dynamicSize=_dynamicSize;
@property(nonatomic) unsigned long long staticSize; // @synthesize staticSize=_staticSize;
@property(retain, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(nonatomic) unsigned long long totalSize; // @synthesize totalSize=_totalSize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


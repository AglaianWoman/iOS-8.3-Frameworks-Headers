//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface _NS128bitWrapper : NSObject <NSCopying>
{
    struct _double_quad_uint {
        unsigned long long high64;
        unsigned long long low64;
    } bits;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithBytes:(char *)arg1;

@end


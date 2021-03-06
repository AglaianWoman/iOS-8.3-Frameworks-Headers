//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class HKUnit;

@interface HKQuantity : NSObject <NSSecureCoding, NSCopying>
{
    double _value;
    HKUnit *_unit;
}

+ (id)quantityWithUnit:(id)arg1 doubleValue:(double)arg2;
+ (BOOL)supportsSecureCoding;
- (double)doubleValueForUnit:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (int)compare:(id)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isCompatibleWithUnit:(id)arg1;
@property(readonly, nonatomic, getter=_unit) HKUnit *unit; // @synthesize unit=_unit;
- (id)_initWithUnit:(id)arg1 doubleValue:(double)arg2;
- (id)_quantityByAddingQuantity:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreData/NSKnownKeysMappingStrategy.h>

@interface NSKnownKeysMappingStrategy1 : NSKnownKeysMappingStrategy
{
    int _cd_rc;
    void *_table;
    unsigned long _length;
    id _reserved1;
    id *_keys;
}

+ (id)alloc;
+ (BOOL)supportsSecureCoding;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
+ (BOOL)accessInstanceVariablesDirectly;
- (oneway void)release;
- (unsigned int)fastIndexForKnownKey:(id)arg1;
- (unsigned int)indexForKey:(id)arg1;
- (id)initForKeys:(id)arg1;
- (id *)keys;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)length;
- (id)description;
- (unsigned int)hash;
- (unsigned int)retainCount;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (id)allKeys;
- (id)retain;
- (void)_coreDealloc:(BOOL)arg1;
- (void)_coreCreationForKeys:(const id *)arg1 count:(unsigned long)arg2;
- (struct __CFArray *)_makeBranchTableForKeys:(const char **)arg1 count:(unsigned long)arg2;
- (id)initForKeys:(id *)arg1 count:(unsigned int)arg2;
- (Class)classForArchiver;

@end

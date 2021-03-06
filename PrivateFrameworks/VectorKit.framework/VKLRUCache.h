//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSFastEnumeration.h"

@interface VKLRUCache : NSObject <NSFastEnumeration>
{
    unsigned int _reservedCapacity;
    unsigned int _maximumCapacity;
    unsigned int _count;
    void *_table;
    id _head;
    id _tail;
    id <VKLRUCacheDelegate> _delegate;
}

@property(readonly, nonatomic) unsigned int maximumCapacity; // @synthesize maximumCapacity=_maximumCapacity;
@property(readonly, nonatomic) unsigned int reservedCapacity; // @synthesize reservedCapacity=_reservedCapacity;
- (void)removeObjectsMatchingPredicate:(CDUnknownBlockType)arg1;
- (id)objectWithoutPromotingForKey:(const struct VKCacheKey *)arg1;
- (id)contentsDescription;
- (void)consistencyCheck;
- (void)insertNodeAtHead:(id)arg1;
- (void)evictIfNecessary;
- (void)dropTail;
- (void)removeNode:(id)arg1;
- (void)setReservedCapacity:(unsigned int)arg1 maximumCapacity:(unsigned int)arg2;
- (id)initWithReservedCapacity:(unsigned int)arg1 maximumCapacity:(unsigned int)arg2;
- (void)setObject:(id)arg1 forKey:(const struct VKCacheKey *)arg2;
- (id)objectForKey:(const struct VKCacheKey *)arg1;
- (void)purge;
@property(nonatomic) id <VKLRUCacheDelegate> delegate; // @synthesize delegate=_delegate;
- (id)description;
- (void)removeAllObjects;
- (id)init;
@property(readonly, nonatomic) unsigned int count; // @synthesize count=_count;
- (void)dealloc;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PLCloudResourceNode, PLPhotoLibrary;

@interface PLCloudResourceRange : NSObject
{
    unsigned short _category;
    PLPhotoLibrary *_photoLibrary;
    PLCloudResourceNode *_rootNode;
    unsigned short _qualityClass;
}

- (void)enumerateResourcesWithBlock:(CDUnknownBlockType)arg1;
- (id)cloudResourceAtIndex:(unsigned int)arg1;
- (id)cloudResourcesInRange:(struct _NSRange)arg1;
- (void)assignSuccessorNode:(id)arg1;
- (void)removeTreeNode:(id)arg1;
- (void)removeRebalance:(id)arg1;
- (void)insertionRebalanceCaseFive:(id)arg1;
- (void)insertionRebalanceCaseFour:(id)arg1;
- (void)insertionRebalanceCaseOne:(id)arg1;
- (void)insertionRebalanceCaseThree:(id)arg1;
- (void)insertionRebalanceCaseTwo:(id)arg1;
- (id)lowestCommonAncestorBetween:(id)arg1 and:(id)arg2;
@property(readonly, nonatomic) unsigned short qualityClass;
- (unsigned long long)totalSizeInRange:(struct _NSRange)arg1;
- (BOOL)removeCloudResource:(id)arg1;
- (void)insertCloudResource:(id)arg1;
- (id)initWithBudgetingCategory:(unsigned short)arg1 qualityClass:(unsigned short)arg2 photoLibrary:(id)arg3;
@property(readonly, nonatomic) unsigned long long totalSize;
@property(readonly, nonatomic) unsigned long long totalCount;
@property(readonly, nonatomic) unsigned short category;
- (void)dealloc;

@end

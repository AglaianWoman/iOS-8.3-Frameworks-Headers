//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface EDPivotDataField : NSObject
{
    long mBaseField;
    unsigned long mBaseItem;
    unsigned long mFieldId;
    unsigned long mNumFmtId;
    NSString *mName;
    int mFormat;
}

+ (id)pivotDataField;
- (void)setShowDataAs:(int)arg1;
- (int)showDataAs;
- (void)setFieldId:(unsigned long)arg1;
- (unsigned long)fieldId;
- (void)setBaseItem:(unsigned long)arg1;
- (unsigned long)baseItem;
- (void)setBaseField:(long)arg1;
- (long)baseField;
- (void)setNumFmtId:(unsigned long)arg1;
- (unsigned long)numFmtId;
- (id)name;
- (void)setName:(id)arg1;
- (id)init;
- (void)dealloc;

@end


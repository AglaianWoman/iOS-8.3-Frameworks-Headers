//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

@interface OITSUHTMLTable : NSObject
{
    NSMutableDictionary *_columnAttributes;
    NSMutableDictionary *_rowClasses;
    NSMutableDictionary *_cellAttributes;
    NSMutableArray *_columnHeaders;
    NSMutableArray *_rows;
    unsigned int _rowClassStride;
}

+ (id)htmlTable;
+ (id)_attributesStringFromAttributes:(id)arg1;
+ (id)_keyForCell:(unsigned int)arg1:(unsigned int)arg2;
@property(nonatomic) unsigned int rowClassStride; // @synthesize rowClassStride=_rowClassStride;
- (void)deleteColumnWithTitle:(id)arg1;
- (void)enumerateRowsUsingBlock:(CDUnknownBlockType)arg1;
- (void)setCellAttributes:(id)arg1 rowIndex:(unsigned int)arg2 columnIndex:(unsigned int)arg3;
- (void)setCellMarkup:(id)arg1 atRowIndex:(unsigned int)arg2 columnIndex:(unsigned int)arg3;
- (void)setColumnHeaders:(id)arg1;
- (void)setRowClass:(id)arg1 atRowIndex:(unsigned int)arg2;
- (void)setColumnClasses:(id)arg1;
- (void)addRowWithCellText:(id)arg1;
- (id)markup;
@property(readonly, nonatomic) unsigned int lastRowIndex;
- (unsigned int)indexOfColumnWithTitle:(id)arg1;
- (void)setClass:(id)arg1 ofColumnIndex:(unsigned int)arg2;
- (void)addRowWithCellMarkup:(id)arg1;
- (id)init;
@property(readonly, nonatomic) unsigned int count;
- (void)dealloc;

@end

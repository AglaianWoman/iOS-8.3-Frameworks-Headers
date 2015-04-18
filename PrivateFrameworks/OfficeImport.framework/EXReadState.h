//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/OAVReadState.h>

@class CXNamespace, ECColumnWidthConvertor, EDReference, EDResources, EDSheet, EDWorkbook, EXOAVState, EXOfficeArtState, NSMutableArray, NSMutableDictionary, OCPPackagePart, TCImportTracing;

@interface EXReadState : OAVReadState
{
    unsigned int mCurrentSheetIndex;
    EDSheet *mCurrentSheet;
    unsigned long mCellStyleXfsOffset;
    double mDefaultColumnWidth;
    double mDefaultRowHeight;
    OCPPackagePart *mCurrentPart;
    OCPPackagePart *mWorkbookPart;
    struct map<long, unsigned int, std::__1::less<long>, std::__1::allocator<std::__1::pair<const long, unsigned int>>> mSharedFormulasMap;
    NSMutableArray *mArrayedFormulas;
    EDReference *mSheetDimension;
    EXOfficeArtState *mOfficeArtState;
    EXOAVState *mOAVState;
    _Bool mMaxColumnsWarned;
    _Bool mMaxRowsWarned;
    _Bool mIsPredefinedTableStylesRead;
    NSMutableDictionary *mReferenceForCommentTextBox;
    _Bool mIsPredefinedDxfsBeingRead;
    struct _xmlNs *mRelationshipNS;
    ECColumnWidthConvertor *mColumnWidthConvertor;
    NSMutableArray *mLegacyDrawables;
    EDWorkbook *mWorkbook;
    EDResources *mResources;
    id <TCCancelDelegate> mCancelDelegate;
    TCImportTracing *mTracing;
    CXNamespace *mEXSpreadsheetMLNamespace;
    CXNamespace *mEXSpreadsheetDrawingNamespace;
    CXNamespace *mEXSpreadsheetRelationsNamespace;
    unsigned int mCurrentRowMinColumnIndex;
    unsigned int mCurrentRowMaxColumnIndex;
}

- (id)resources;
- (void)setResources:(id)arg1;
@property(retain, nonatomic) CXNamespace *EXSpreadsheetRelationsNamespace; // @synthesize EXSpreadsheetRelationsNamespace=mEXSpreadsheetRelationsNamespace;
- (struct _xmlNs *)relationshipNameSpaceForWorkbook;
- (unsigned int)currentSheetIndex;
@property(retain, nonatomic) CXNamespace *EXSpreadsheetDrawingNamespace; // @synthesize EXSpreadsheetDrawingNamespace=mEXSpreadsheetDrawingNamespace;
@property(retain, nonatomic) CXNamespace *EXSpreadsheetMLNamespace; // @synthesize EXSpreadsheetMLNamespace=mEXSpreadsheetMLNamespace;
- (void)setTextBox:(id)arg1 author:(id)arg2 forReference:(id)arg3;
- (void)setSheetDimension:(id)arg1;
- (void)relationshipNameSpaceForWorkbook:(struct _xmlNs *)arg1;
- (id)textBoxForReference:(id)arg1;
- (id)authorForReference:(id)arg1;
- (void)setPredefinedDxfsBeingRead:(_Bool)arg1;
- (void)setPredefinedTableStylesRead:(_Bool)arg1;
- (_Bool)isPredefinedTableStylesRead;
- (_Bool)isPredefinedDxfsBeingRead;
- (id)currentPart;
- (id)legacyDrawables;
- (void)setCurrentPart:(id)arg1;
- (id)workbookPart;
- (void)resetForNewSheet;
- (void)setCurrentRowMaxColumnIndex:(unsigned int)arg1;
- (void)setCurrentRowMinColumnIndex:(unsigned int)arg1;
- (id)sheetDimension;
- (id)initWithWorkbookPart:(id)arg1 cancelDelegate:(id)arg2 tracing:(id)arg3;
- (unsigned int)sharedBaseFormulaIndexWithIndex:(long)arg1;
- (void)addSharedBaseFormulaIndex:(unsigned int)arg1 withIndex:(long)arg2;
- (id)arrayedFormulas;
- (void)setCellStyleXfsOffset:(unsigned long)arg1;
- (unsigned long)cellStyleXfsOffset;
- (unsigned int)currentRowMaxColumnIndex;
- (unsigned int)currentRowMinColumnIndex;
- (void)setDefaultRowHeight:(double)arg1;
- (void)setDefaultColumnWidth:(double)arg1;
- (void)reportWorksheetWarning:(struct TCTaggedMessageStructure *)arg1;
- (void)setCurrentSheetIndex:(unsigned int)arg1;
- (void)setOfficeArtState:(id)arg1;
@property(readonly, nonatomic) id <TCCancelDelegate> cancelDelegate; // @synthesize cancelDelegate=mCancelDelegate;
- (id)officeArtState;
- (id)oavState;
- (void)setupNSForXMLFormat:(int)arg1;
- (void)reportWarning:(struct TCTaggedMessageStructure *)arg1;
- (void)setCurrentSheet:(id)arg1;
- (void)setWorkbook:(id)arg1;
- (double)defaultRowHeight;
- (double)defaultColumnWidth;
- (id)columnWidthConvertor;
- (id)workbook;
- (id)currentSheet;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)isCancelled;
- (void)dealloc;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

#import "TDElementAttributes.h"

@class TDThemeDirection, TDThemeDrawingLayer, TDThemeElement, TDThemeIdiom, TDThemePart, TDThemePresentationState, TDThemeSize, TDThemeState, TDThemeUISizeClass, TDThemeValue;

@interface TDRenditionKeySpec : NSManagedObject <TDElementAttributes>
{
    unsigned int _dimension1;
    unsigned int _dimension2;
    unsigned int _scaleFactor;
    unsigned int _subtype;
    unsigned int _nameIdentifier;
    unsigned int _memoryClass;
    unsigned int _graphicsClass;
    struct _renditionkeytoken _stackScratchKey[16];
    struct _renditionkeytoken *_scratchKey;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
- (int)attributeCount;
- (unsigned int)graphicsClass;
- (unsigned int)memoryClass;
- (const struct _renditionkeyfmt *)keyFormat;
- (unsigned int)dimension2;
- (unsigned int)dimension1;
- (id)keyDescription;
- (void)setAttributesFromRenditionKey:(const struct _renditionkeytoken *)arg1 withDocument:(id)arg2;
- (void)setScaleFactorString:(id)arg1;
- (id)scaleFactorString;
- (void)getKey:(struct _renditionkeytoken *)arg1;
- (void)setGraphicsClass:(unsigned int)arg1;
- (void)setMemoryClass:(unsigned int)arg1;
- (void)setNameIdentifier:(unsigned int)arg1;
- (unsigned int)nameIdentifier;
- (void)setAttributesFromData:(id)arg1;
- (id)dataFromAttributes;
- (void)setDimension2:(unsigned int)arg1;
- (void)setDimension1:(unsigned int)arg1;
- (void)setAttributesFromCopyData:(id)arg1;
- (id)copyDataFromAttributes;
- (void)copyAttributesInto:(id)arg1;
- (unsigned int)scaleFactor;
- (void)setSubtype:(unsigned int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)subtype;
- (const struct _renditionkeytoken *)key;
- (id)debugDescription;
- (void)dealloc;
- (void)setScaleFactor:(unsigned int)arg1;

// Remaining properties
@property(retain, nonatomic) TDThemeDirection *direction; // @dynamic direction;
@property(retain, nonatomic) TDThemeElement *element; // @dynamic element;
@property(retain, nonatomic) TDThemeIdiom *idiom; // @dynamic idiom;
@property(retain, nonatomic) TDThemeDrawingLayer *layer; // @dynamic layer;
@property(retain, nonatomic) TDThemePart *part; // @dynamic part;
@property(retain, nonatomic) TDThemePresentationState *presentationState; // @dynamic presentationState;
@property(retain, nonatomic) TDThemeState *previousState; // @dynamic previousState;
@property(retain, nonatomic) TDThemeValue *previousValue; // @dynamic previousValue;
@property(retain, nonatomic) TDThemeSize *size; // @dynamic size;
@property(retain, nonatomic) TDThemeUISizeClass *sizeClassHorizontal; // @dynamic sizeClassHorizontal;
@property(retain, nonatomic) TDThemeUISizeClass *sizeClassVertical; // @dynamic sizeClassVertical;
@property(retain, nonatomic) TDThemeState *state; // @dynamic state;
@property(retain, nonatomic) TDThemeValue *value; // @dynamic value;

@end


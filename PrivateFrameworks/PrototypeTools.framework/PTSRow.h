//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_UISettingsKeyPathObserver.h"

@class NSHashTable, NSPredicate, NSString, PTSRowAction, PTSSection, UIImage, _UISettings;

@interface PTSRow : NSObject <_UISettingsKeyPathObserver>
{
    NSHashTable *_observers;
    NSString *_valueKeyPath;
    NSString *_staticTitle;
    NSString *_titleKeyPath;
    UIImage *_staticImage;
    NSString *_imageKeyPath;
    NSPredicate *_condition;
    PTSRowAction *_action;
    CDUnknownBlockType _valueValidatator;
    CDUnknownBlockType _valueFormatter;
    NSString *_groupKeyPath;
    int _allowedEditingTypes;
    _UISettings *_settings;
    PTSSection *_section;
    _UISettings *_groupChild;
}

+ (id)rowWithTitle:(id)arg1 valueKeyPath:(id)arg2;
+ (id)row;
- (Class)rowTableViewCellClass;
- (id)condition:(id)arg1;
- (id)valueFormatter:(CDUnknownBlockType)arg1;
- (id)valueValidator:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) _UISettings *groupChild; // @synthesize groupChild=_groupChild;
- (BOOL)allowsShare;
- (BOOL)allowsDuplicate;
- (BOOL)allowsReorder;
- (BOOL)allowsDelete;
- (id)concreteCopyWithIndex:(unsigned int)arg1;
- (id)childSettingsForKeyPath:(id)arg1;
- (id)allowedEditingTypes:(int)arg1;
- (id)groupKeyPath:(id)arg1;
- (id)action:(id)arg1;
- (id)imageKeyPath:(id)arg1;
- (id)staticImage:(id)arg1;
- (id)titleKeyPath:(id)arg1;
- (void)updateWithRow:(id)arg1;
- (void)resolveTemplatesWithIndex:(unsigned int)arg1;
- (void)_sendImageChanged;
- (void)_sendTitleChanged;
- (void)_sendValueChanged;
@property(nonatomic) int allowedEditingTypes; // @synthesize allowedEditingTypes=_allowedEditingTypes;
@property(retain, nonatomic) NSString *groupKeyPath; // @synthesize groupKeyPath=_groupKeyPath;
@property(copy, nonatomic) CDUnknownBlockType valueFormatter; // @synthesize valueFormatter=_valueFormatter;
@property(copy, nonatomic) CDUnknownBlockType valueValidatator; // @synthesize valueValidatator=_valueValidatator;
@property(copy, nonatomic) NSString *imageKeyPath; // @synthesize imageKeyPath=_imageKeyPath;
@property(retain, nonatomic) UIImage *staticImage; // @synthesize staticImage=_staticImage;
@property(copy, nonatomic) NSString *titleKeyPath; // @synthesize titleKeyPath=_titleKeyPath;
@property(copy, nonatomic) NSString *staticTitle; // @synthesize staticTitle=_staticTitle;
- (id)valueKeyPath:(id)arg1;
- (id)staticTitle:(id)arg1;
@property(copy, nonatomic) NSString *valueKeyPath; // @synthesize valueKeyPath=_valueKeyPath;
- (void)addObserver:(id)arg1;
@property(nonatomic) __weak PTSSection *section; // @synthesize section=_section;
@property(copy, nonatomic) NSPredicate *condition; // @synthesize condition=_condition;
- (void).cxx_destruct;
- (id)group;
@property(retain, nonatomic) _UISettings *settings; // @synthesize settings=_settings;
- (id)conditionFormat:(id)arg1;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
@property(copy, nonatomic) PTSRowAction *action; // @synthesize action=_action;
- (void)removeObserver:(id)arg1;
- (id)image;
@property(retain, nonatomic) id value;
- (id)title;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

